#pragma once

////
//
//      STM32F7 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, AESLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_AESLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_AESLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, AXILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_AXILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_AXILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DTCMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DTCMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DTCMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, DTCMRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DTCMRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DTCMRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SDMMC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SDMMC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART8>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART8EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, USBPHYC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USBPHYCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USBPHYCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USBPHYCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F722, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, AESLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_AESLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_AESLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, AXILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_AXILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_AXILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DTCMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DTCMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DTCMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, DTCMRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DTCMRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DTCMRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SDMMC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SDMMC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART8>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART8EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, USBPHYC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USBPHYCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USBPHYCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USBPHYCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F723, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, AESLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_AESLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_AESLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, AXILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_AXILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_AXILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DTCMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DTCMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DTCMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, DTCMRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DTCMRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DTCMRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SDMMC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SDMMC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART8>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART8EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, USBPHYC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USBPHYCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USBPHYCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USBPHYCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F730, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, AESLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_AESLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_AESLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, AXILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_AXILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_AXILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DTCMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DTCMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DTCMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, DTCMRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DTCMRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DTCMRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SDMMC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SDMMC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART8>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART8EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, USBPHYC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USBPHYCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USBPHYCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USBPHYCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F732, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, AES>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, AESLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_AESLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_AESLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, AXILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_AXILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_AXILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DTCMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DTCMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DTCMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, DTCMRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DTCMRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DTCMRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SDMMC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SDMMC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART8>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART8EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, USBPHYC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USBPHYCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USBPHYCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USBPHYCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F733, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F745, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F746, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F750x, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F756, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F765, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F767, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F768, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F769, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F777, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F778, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CCMDATARAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CCMDATARAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CCMDATARAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CECLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CECLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CECLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DMA2D>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2DEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2DLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOJLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOK>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOKLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, I2C4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_LPTIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, LPTMI1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_LPTMI1EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_LPTMI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, LTDC>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, LTDCLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_LTDCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_QSPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_QSPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SAI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SDMMC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDMMC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SDMMC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDMMC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPDIFRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI6RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SPI6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART7>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART8>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, UART8LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART8LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F779, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};
