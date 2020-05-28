#pragma once

////
//
//      STM32G0 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, ADC>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_ADCSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_ADCRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, DBG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DBGSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DBGRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, GPIOF>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPFEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPFSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPFRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPFEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, I2C1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, I2C2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, PWR>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_PWRRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, SPI1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SPI1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SPI1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, SPI2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, SYSCFG>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SYSCFGRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, TIM1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, TIM14>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM14EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM14SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM14RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM14EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM14SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, TIM16>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM16SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM16RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, TIM17>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM17SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM17RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, TIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, TIM3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, USART1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_USART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_USART1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, USART2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G030, WWDG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, ADC>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_ADCSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_ADCRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, DBG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DBGSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DBGRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, GPIOF>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPFEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPFSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPFRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPFEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, I2C1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, I2C2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, LPTIM1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, LPTIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, LPUART1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPUART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPUART1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, PWR>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_PWRRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, SPI1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SPI1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SPI1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, SPI2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, SYSCFG>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SYSCFGRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, TIM1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, TIM14>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM14EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM14SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM14RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM14EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM14SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, TIM16>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM16SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM16RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, TIM17>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM17SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM17RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, TIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, TIM3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, USART1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_USART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_USART1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, USART2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G031, WWDG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, ADC>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_ADCSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_ADCRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, AES>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_AESRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, DBG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DBGSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DBGRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, GPIOF>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPFEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPFSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPFRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPFEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, I2C1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, I2C2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, LPTIM1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, LPTIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, LPUART1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPUART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPUART1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, PWR>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_PWRRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, RNG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, SPI1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SPI1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SPI1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, SPI2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, SYSCFG>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SYSCFGRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, TIM1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, TIM14>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM14EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM14SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM14RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM14EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM14SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, TIM16>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM16SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM16RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, TIM17>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM17SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM17RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, TIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, TIM3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, USART1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_USART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_USART1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, USART2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G041, WWDG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, ADC>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_ADCSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_ADCRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, AES>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_AESRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, DAC1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, DBG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DBGSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DBGRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, GPIOF>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPFEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPFSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPFRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPFEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, I2C1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, I2C2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, LPTIM1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, LPTIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, LPUART1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPUART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPUART1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, PWR>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_PWRRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, RNG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, SPI1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SPI1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SPI1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, SPI2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, SYSCFG>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SYSCFGRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM14>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM14EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM14SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM14RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM14EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM14SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM15>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM15SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM15RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM16>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM16SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM16RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM17>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM17SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM17RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM6>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, TIM7>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, UCPD1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_UCPD1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_UCPD1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_UCPD1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_UCPD1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_UCPD1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, UCPD2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_UCPD2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_UCPD2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_UCPD2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_UCPD2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_UCPD2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, USART1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_USART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_USART1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, USART2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, USART3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, USART4>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART4SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART4RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G070, WWDG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, ADC>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_ADCSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_ADCRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, AES>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_AESRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, DAC1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, DBG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DBGSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DBGRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, GPIOF>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPFEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPFSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPFRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPFEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, I2C1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, I2C2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, LPTIM1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, LPTIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, LPUART1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPUART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPUART1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, PWR>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_PWRRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, RNG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, SPI1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SPI1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SPI1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, SPI2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, SYSCFG>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SYSCFGRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM14>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM14EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM14SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM14RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM14EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM14SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM15>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM15SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM15RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM16>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM16SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM16RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM17>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM17SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM17RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM6>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, TIM7>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, UCPD1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_UCPD1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_UCPD1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_UCPD1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_UCPD1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_UCPD1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, UCPD2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_UCPD2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_UCPD2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_UCPD2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_UCPD2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_UCPD2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, USART1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_USART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_USART1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, USART2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, USART3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, USART4>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART4SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART4RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G071, WWDG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, ADC>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_ADCSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_ADCRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, AES>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_AESRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, DAC1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, DBG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_DBGSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_DBGRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, GPIOF>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPFEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMENR |= RCC::T::IOPSMENR_IOPFSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPFRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPFEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMENR &= ~RCC::T::IOPSMENR_IOPFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, I2C1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, I2C2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, LPTIM1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, LPTIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPTIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, LPUART1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_LPUART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_LPUART1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, PWR>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_PWRRST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, RNG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, SPI1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SPI1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SPI1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, SPI2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, SYSCFG>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_SYSCFGRST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM14>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM14EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM14SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM14RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM14EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM14SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM15>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM15SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM15RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM16>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM16SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM16RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM17>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_TIM17SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_TIM17RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM6>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, TIM7>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, UCPD1>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_UCPD1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_UCPD1SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_UCPD1RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_UCPD1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_UCPD1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, UCPD2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_UCPD2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_UCPD2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_UCPD2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_UCPD2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_UCPD2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, USART1>>
{
    static void enable() { rcc_t::V.APBENR2 |= RCC::T::APBENR2_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR2 |= RCC::T::APBSMENR2_USART1SMEN; }
    static void reset() { rcc_t::V.APBRSTR2 |= RCC::T::APBRSTR2_USART1RST; }
    static void disable() { rcc_t::V.APBENR2 &= ~RCC::T::APBENR2_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR2 &= ~RCC::T::APBSMENR2_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, USART2>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART2RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, USART3>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART3RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, USART4>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_USART4SMEN; }
    static void reset() { rcc_t::V.APBRSTR1 |= RCC::T::APBRSTR1_USART4RST; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32G081, WWDG>>
{
    static void enable() { rcc_t::V.APBENR1 |= RCC::T::APBENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APBSMENR1 |= RCC::T::APBSMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APBENR1 &= ~RCC::T::APBENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APBSMENR1 &= ~RCC::T::APBSMENR1_WWDGSMEN; }
};
