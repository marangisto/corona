#pragma once

////
//
//      STM32F4 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F401, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, FSMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, FSMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FSMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F405, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, FSMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, FSMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FSMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F407, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, EXTIT>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_EXTITEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_EXTITEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, EXTITLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_EXTITLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_EXTITLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, RNG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, RNGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_RTCAPBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F410, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F411, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, DFSDM>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, DFSDMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_DFSDMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_DFSDMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, EXTIT>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_EXTITEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_EXTITEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, FSMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, FSMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FSMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_RTCAPBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F412, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CAN3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CAN3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DFSDM>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DFSDM2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DFSDM2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_DFSDM2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_DFSDM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DFSDMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_DFSDMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_DFSDMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, EXTIT>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_EXTITEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_EXTITEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, FSMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, FSMCLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_FSMCLPEN; }
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FSMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, LPTIMER1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIMER1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIMER1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIMER1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, LPTIMER1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIMER1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIMER1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, QSPILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_QSPILPEN; }
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SART10>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SART10RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART8>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART8EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART9>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART9RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, USART9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F413, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F427, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F429, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2CFMP1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2CFMP1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2CFMP1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2CFMP1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, I2CFMP1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2CFMP1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2CFMP1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPDIF>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPDIFLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F446, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, DSILP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_DSILPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_DSILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F469, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};
