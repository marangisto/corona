#pragma once

////
//
//      STM32L0 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_ADCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, CRS>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_CRSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, CRYP>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRYPEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, CRYPT>>
{
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRYPTSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRYPTSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, DBG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DBGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DBGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, GPIOE>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPEEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPESMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPERST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPEEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, GPIOH>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPHEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPHSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPHRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPHEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C3SMEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, MIF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_MIFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_MIFSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_MIFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_MIFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_MIFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, TIM21>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM21EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM21SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM21RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM21EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM21SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, TIM22>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM22EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM22SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM22RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM22EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM22SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x0, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_WWDGSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_ADCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, CRS>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_CRSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, CRYP>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRYPEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, CRYPT>>
{
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRYPTSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRYPTSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, DBG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DBGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DBGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, GPIOE>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPEEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPESMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPERST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPEEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, GPIOH>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPHEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPHSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPHRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPHEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C3SMEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, MIF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_MIFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_MIFSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_MIFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_MIFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_MIFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, TIM21>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM21EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM21SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM21RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM21EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM21SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, TIM22>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM22EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM22SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM22RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM22EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM22SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x1, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_WWDGSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_ADCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, CRYP>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRYPEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRYPSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRYPEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRYPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_DACSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_DACSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, DBG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DBGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DBGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, GPIOE>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPEEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPESMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPERST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPEEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, GPIOH>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPHEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPHSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPHRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPHEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, LPUART12>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART12RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, MIF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_MIFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_MIFSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_MIFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_MIFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_MIFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, MIFI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_MIFIEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_MIFIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, RNG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TIM21>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM21EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM21SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM21RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM21EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM21SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TIM22>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM22EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM22SMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM22EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM22SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TM12>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM12RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, TOUCH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_TOUCHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_TOUCHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_TOUCHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_TOUCHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_TOUCHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART2SMEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USBEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USBSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, WWD>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x2, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_ADCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_ADCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, CRYP>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_CRYPEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_CRYPSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_CRYPEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRYPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_DACSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_DACSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, DBG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DBGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DBGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DBGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DBGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DBGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_DMAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_DMASMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_DMARST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_DMAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, GPIOA>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPAEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPASMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, GPIOB>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPBEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPBSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, GPIOC>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPCEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPCSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, GPIOD>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPDEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPDSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, GPIOE>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPEEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPESMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPERST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPEEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, GPIOH>>
{
    static void enable() { rcc_t::V.IOPENR |= RCC::T::IOPENR_IOPHEN; }
    static void enable_sleep_mode() { rcc_t::V.IOPSMEN |= RCC::T::IOPSMEN_IOPHSMEN; }
    static void reset() { rcc_t::V.IOPRSTR |= RCC::T::IOPRSTR_IOPHRST; }
    static void disable() { rcc_t::V.IOPENR &= ~RCC::T::IOPENR_IOPHEN; }
    static void disable_sleep_mode() { rcc_t::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, LPUART12>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART12RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, MIF>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_MIFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_MIFSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_MIFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_MIFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_MIFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, MIFI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_MIFIEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_MIFIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, RNG>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TIM21>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM21EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM21SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM21RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM21EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM21SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TIM22>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM22EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM22SMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM22EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM22SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TM12>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TM12RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, TOUCH>>
{
    static void enable() { rcc_t::V.AHBENR |= RCC::T::AHBENR_TOUCHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHBSMENR |= RCC::T::AHBSMENR_TOUCHSMEN; }
    static void reset() { rcc_t::V.AHBRSTR |= RCC::T::AHBRSTR_TOUCHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~RCC::T::AHBENR_TOUCHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHBSMENR &= ~RCC::T::AHBSMENR_TOUCHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART2SMEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USBEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_USBSMEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_USBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, WWD>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L0x3, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR |= RCC::T::APB1SMENR_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR &= ~RCC::T::APB1SMENR_WWDGSMEN; }
};
