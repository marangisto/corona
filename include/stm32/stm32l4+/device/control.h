#pragma once

////
//
//      STM32L4+ peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4P5, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4Q5, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GFXMMU>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GFXMMUEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GFXMMUSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GFXMMURST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GFXMMUEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GFXMMUSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R5, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GFXMMU>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GFXMMUEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GFXMMUSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GFXMMURST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GFXMMUEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GFXMMUSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R7, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GFXMMU>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GFXMMUEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GFXMMUSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GFXMMURST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GFXMMUEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GFXMMUSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4R9, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GFXMMU>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GFXMMUEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GFXMMUSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GFXMMURST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GFXMMUEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GFXMMUSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S5, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GFXMMU>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GFXMMUEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GFXMMUSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GFXMMURST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GFXMMUEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GFXMMUSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S7, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, ADC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_ADCEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, ADCFS>>
{
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_ADCFSSMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_ADCFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CAN1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CAN1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CAN1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CAN1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_CRCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CRCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_CRSEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_CRSSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_CRSEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_CRSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DAC1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_DCMISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_DCMISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2DSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2DSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DMAMUX1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUX1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUX1SMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUX1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUX1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUX1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, DSI>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_DSIEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_DSISMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_DSIRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_DSIEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_DSISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, FLASH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, FW>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_FWEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_FWEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GFXMMU>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GFXMMUEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_GFXMMUSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GFXMMURST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GFXMMUEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_GFXMMUSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOA>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOAEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOASMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOAEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOASMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOB>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOBEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOBSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOBEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOBSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOC>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOCSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOD>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIODEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIODSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIODEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIODSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOE>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOEEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOESMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOEEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOESMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOFEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOFSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOFEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOFSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, GPIOI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_GPIOIEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_GPIOISMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_GPIOIEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_GPIOISMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_HASHSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_HASHSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_I2C3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_I2C3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_I2C3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_I2C3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_I2C4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_I2C4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_I2C4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_I2C4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, LPTIM2>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, LPUART1>>
{
    static void enable() { rcc_t::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN; }
    static void reset() { rcc_t::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST; }
    static void disable() { rcc_t::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_LTDCSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_LTDCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, OPAMP>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, OSPI2>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_OSPI2EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_OSPI2RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_OSPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, OSPIM>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OSPIMEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OSPIMSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OSPIMRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OSPIMEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OSPIMSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTGFSSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTGFSSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_PWREN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_PWRSMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_PWREN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_PWRSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SAI2SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SAI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN; }
    static void enable_sleep_mode() { rcc_t::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN; }
    static void disable_sleep_mode() { rcc_t::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SP3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SP3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SP3SMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SP3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SP3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SPI3>>
{
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM6EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM6SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM6EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM6SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM7EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM7SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM7EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM7SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_TIM8SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM8SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, TSC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_TSCEN; }
    static void enable_sleep_mode() { rcc_t::V.AHB1SMENR |= RCC::T::AHB1SMENR_TSCSMEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_TSCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_TSCEN; }
    static void disable_sleep_mode() { rcc_t::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_TSCSMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART4EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART4SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART4EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART4SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_UART5EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_UART5SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_UART5EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_UART5SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void enable_sleep_mode() { rcc_t::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
    static void disable_sleep_mode() { rcc_t::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART2EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART2SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART2EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART2SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_USART3EN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_USART3SMEN; }
    static void reset() { rcc_t::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USART3EN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_USART3SMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32L4S9, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN; }
    static void enable_sleep_mode() { rcc_t::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN; }
    static void disable() { rcc_t::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN; }
    static void disable_sleep_mode() { rcc_t::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN; }
};
