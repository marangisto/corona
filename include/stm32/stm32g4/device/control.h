#pragma once

////
//
//      STM32G4 peripheral clock control
//
////

template<typename PERIPHERAL>
struct clock_control_t {};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G431xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G441xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G471xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G473xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G474xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G483xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, AD12C>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_AD12CSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_AD12CSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, ADC12>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, ADC345>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_ADC345EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_ADC345SMEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_ADC345EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_ADC345SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, CORDIC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CORDICEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CORDICSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CORDICRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CORDICEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CORDICSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_CRCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_CRSSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_CRYPTSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_CRYPTSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DAC>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DAC2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC2SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC2RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DAC3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC3SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC3RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DAC4>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_DAC4SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_DAC4RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_DAC4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMA2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DMAMUX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMAMUXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMAMUXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, DMAMUX1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMAMUX1RST; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, FDCAN>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_FDCANEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_FDCANSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_FDCANRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_FDCANEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_FDCANSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, FLASH>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FLASHSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FLASHSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FLITFEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, FMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_FMACEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_FMACSMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_FMACEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_FMACSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_FMCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOASMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOBSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOCSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIODSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOESMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOFSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_GPIOGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, HRTIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, HRTIMER>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEREN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_HRTIMERSMEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEREN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_HRTIMERSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, I2C3>>
{
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_I2C3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_I2C3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_I2C4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_LPTIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, LPUART>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_LPUART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, MATRIX>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_MATRIXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_PWRSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, QUADSPI1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QUADSPI1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QUADSPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~rcc_t::T::AHB3SMENR_QUADSPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_RNGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SAI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SP3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_SPI2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SPI4SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SPI4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SRAM1>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= rcc_t::T::AHB1SMENR_SRAM1SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~rcc_t::T::AHB1SMENR_SRAM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SRAM2>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM2SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SRAM3>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= rcc_t::T::AHB2SMENR_SRAM3SMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~rcc_t::T::AHB2SMENR_SRAM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_SYSCFGSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM15SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM16SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM17SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM20>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM20EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM20SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM20RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM20EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM20SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM6SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_TIM7SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_TIM8SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART4SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_UART5SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= rcc_t::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~rcc_t::T::APB2SMENR_USART1SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART2SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_USART3SMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, USBD>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_USBDEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= rcc_t::T::APB1RSTR1_USBDRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_USBDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, USBPD>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= rcc_t::T::APB1ENR2_USBPDEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= rcc_t::T::APB1SMENR2_USBPDSMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= rcc_t::T::APB1RSTR2_USBPDRST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~rcc_t::T::APB1ENR2_USBPDEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~rcc_t::T::APB1SMENR2_USBPDSMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32G484xx, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= rcc_t::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= rcc_t::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~rcc_t::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~rcc_t::T::APB1SMENR1_WWDGSMEN; }
};
