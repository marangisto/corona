#pragma once

////
//
//      STM32L5 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, FDCAN1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_FDCAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_FDCAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_FDCAN1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_FDCAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_FDCAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, GTZC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GTZCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GTZCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GTZCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GTZCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GTZCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, ICACHE>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_ICACHESMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_ICACHESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, LPTIM3>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM3RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, OSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_OSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_OSPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, OTFDEC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTFDEC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTFDEC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTFDEC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTFDEC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTFDEC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, PKA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_PKAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_PKASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_PKARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_PKAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_PKASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, UCPD1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_UCPD1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_UCPD1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_UCPD1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_UCPD1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_UCPD1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, USBFS>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_USBFSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_USBFSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_USBFSRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_USBFSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_USBFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L552, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, FDCAN1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_FDCAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_FDCAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_FDCAN1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_FDCAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_FDCAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, GTZC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GTZCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GTZCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GTZCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GTZCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GTZCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, ICACHE>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_ICACHESMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_ICACHESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, LPTIM3>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM3RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, OSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_OSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_OSPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, OTFDEC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTFDEC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTFDEC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTFDEC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTFDEC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTFDEC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, PKA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_PKAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_PKASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_PKARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_PKAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_PKASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, UCPD1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_UCPD1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_UCPD1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_UCPD1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_UCPD1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_UCPD1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, USBFS>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_USBFSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_USBFSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_USBFSRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_USBFSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_USBFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L562, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};
