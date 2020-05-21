#pragma once

////
//
//      STM32L4 peripheral clock control
//
////

template<typename PERIPHERAL>
struct clock_control_t {};

template<>
struct clock_control_t<peripheral_t<STM32L412, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, GPIOD>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, USBFS>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USBFSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBFSRST; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USBFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L412, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DCMISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, DFSDM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDMEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_DFSDMSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_DFSDMSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2DSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, HASH1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASH1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_HASH1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASH1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASH1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_HASH1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_OTGFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L476, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DCMISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, DFSDM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDMEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_DFSDMSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_DFSDMSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2DSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, HASH1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASH1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_HASH1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASH1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASH1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_HASH1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_OTGFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L496, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, DFSDM>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_DFSDMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_DFSDMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SP3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SPI1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI1EN; }
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SPI2>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, USART1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART1EN; }
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART1SMEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART1RST; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, USART4>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, USBFS>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USBFSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBFSRST; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USBFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x1, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, DFSDM>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_DFSDMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_DFSDMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SP3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SPI1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI1EN; }
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SPI2>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, USART1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART1EN; }
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART1SMEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART1RST; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, USART4>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, USBFS>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USBFSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBFSRST; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USBFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x2, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, USBFS>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USBFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USBFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x3, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, DFSDM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDMEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_DFSDMSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_DFSDMSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_OTGFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x5, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADCFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AESSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CAN2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CAN2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CAN2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CAN2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DCMISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, DFSDM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDMEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_DFSDMSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_DFSDMSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2DSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, FIREWALL>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_FIREWALLEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_FIREWALLEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, HASH1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASH1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_HASH1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASH1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASH1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_HASH1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LCDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPTIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_OPAMPSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_OTGFSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QSPISMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SDMMC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDMMCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SDMMCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDMMCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDMMCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SDMMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SWPMI1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_SWPMI1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_SWPMI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_SWPMI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_TSCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32L4x6, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};
