#pragma once

////
//
//      STM32WB peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, AES1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AES1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AES1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AES1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AES1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AES1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, AES2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_AES2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_AES2SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_AES2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_AES2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_AES2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, CR>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUXEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUXSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUXRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUXEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUXSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, FLASH>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_HSEMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, IPCC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_IPCCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_IPCCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_IPCCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LCDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, PKA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_PKAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_PKASMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_PKARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_PKAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_PKASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_QSPISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, RF>>
{
    static void reset() { rcc_t::V.APB3RSTR |= RCC::T::APB3RSTR_RFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_SRAM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_SRAM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, USB>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USBEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USBSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USBEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, USBFS>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USBFSRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB30_CM4, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, AES1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AES1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AES1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AES1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AES1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AES1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, AES2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_AES2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_AES2SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_AES2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_AES2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_AES2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, CR>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUXEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUXSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUXRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUXEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUXSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, FLASH>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_HSEMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, IPCC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_IPCCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_IPCCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_IPCCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LCDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, PKA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_PKAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_PKASMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_PKARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_PKAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_PKASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_QSPISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, RF>>
{
    static void reset() { rcc_t::V.APB3RSTR |= RCC::T::APB3RSTR_RFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_SRAM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_SRAM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, USB>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USBEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USBSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USBEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, USBFS>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USBFSRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB35_CM4, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, AES1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AES1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AES1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AES1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AES1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AES1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, AES2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_AES2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_AES2SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_AES2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_AES2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_AES2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, CR>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUXEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUXSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUXRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUXEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUXSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, FLASH>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_HSEMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, IPCC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_IPCCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_IPCCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_IPCCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LCDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, PKA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_PKAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_PKASMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_PKARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_PKAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_PKASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_QSPISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, RF>>
{
    static void reset() { rcc_t::V.APB3RSTR |= RCC::T::APB3RSTR_RFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_SRAM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_SRAM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, USB>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USBEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USBSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USBEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, USBFS>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USBFSRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB50_CM4, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, AES1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AES1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AES1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AES1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AES1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AES1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, AES2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_AES2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_AES2SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_AES2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_AES2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_AES2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, CR>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUXEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUXSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUXRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUXEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUXSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, FLASH>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_HSEMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, IPCC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_IPCCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_IPCCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_IPCCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, LCD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LCDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LCDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LCDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LCDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LCDSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, PKA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_PKAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_PKASMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_PKARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_PKAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_PKASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_QSPISMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_QSPISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, RF>>
{
    static void reset() { rcc_t::V.APB3RSTR |= RCC::T::APB3RSTR_RFRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_SRAM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_SRAM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, USB>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USBEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USBSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USBEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, USBFS>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USBFSRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32WB55_CM4, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};
