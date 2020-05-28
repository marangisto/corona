#pragma once

////
//
//      STM32L1 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, COMP>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_COMPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_COMPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_COMPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, COMPLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_COMPLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_COMPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, CRCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA1EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, DMA1LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA2EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, DMA2LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLITFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLITFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLITFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, FLITFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FSMCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOA>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOARST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOALP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOB>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOBRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOC>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOD>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIODRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIODLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOE>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOERST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOELP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOF>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOG>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOGRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOH>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPB>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPBEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPD>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPDEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPE>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPEEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPGEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, GPIOPH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPHEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LCDEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LCDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, LCDLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LCDLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LCDLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SRAMLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_SRAMLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_SRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TM10>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM10RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, TM11>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM11RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, USBLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USBLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, WWD>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L100, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, COMP>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_COMPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_COMPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_COMPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, COMPLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_COMPLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_COMPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, CRCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA1EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, DMA1LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA2EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, DMA2LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLITFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLITFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLITFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, FLITFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FSMCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOA>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOARST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOALP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOB>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOBRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOC>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOD>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIODRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIODLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOE>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOERST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOELP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOF>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOG>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOGRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOH>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPB>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPBEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPD>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPDEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPE>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPEEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPGEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, GPIOPH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPHEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LCDEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LCDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, LCDLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LCDLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LCDLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SRAMLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_SRAMLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_SRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TM10>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM10RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, TM11>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM11RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, USBLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USBLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, WWD>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L151, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, COMP>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_COMPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_COMPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_COMPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, COMPLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_COMPLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_COMPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, CRCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA1EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, DMA1LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA2EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, DMA2LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLITFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLITFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLITFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, FLITFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FSMCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOA>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOARST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOALP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOB>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOBRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOC>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOD>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIODRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIODLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOE>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOERST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOELP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOF>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOG>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOGRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOH>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPB>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPBEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPD>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPDEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPE>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPEEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPGEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, GPIOPH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPHEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LCDEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LCDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, LCDLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LCDLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LCDLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SRAMLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_SRAMLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_SRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TM10>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM10RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, TM11>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM11RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, USBLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USBLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, WWD>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L152, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, COMP>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_COMPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_COMPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_COMPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, COMPLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_COMPLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_COMPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, CRCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA1EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, DMA1LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMA2EN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, DMA2LP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLITFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLITFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLITFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, FLITFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FSMCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOA>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOARST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOALP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOB>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOBRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOC>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOD>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIODRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIODLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOE>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOERST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOELP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOF>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOG>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOGRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOH>>
{
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_GPIOHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPB>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPBEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPD>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPDEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPE>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPEEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPGEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, GPIOPH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_GPIOPHEN; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_GPIOPHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LCDEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LCDEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, LCDLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LCDLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LCDLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SRAMLP>>
{
    static void enable() { rcc_t::V.AHBLPENR |= RCC::T::AHBLPENR_SRAMLPEN; }
    static void disable() { rcc_t::V.AHBLPENR &= ~RCC::T::AHBLPENR_SRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TM10>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM10RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, TM11>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM11RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, USBLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USBLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, WWD>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L162, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};
