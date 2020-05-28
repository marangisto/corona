#pragma once

////
//
//      STM32F2 peripheral clock control
//
////

template<typename RCC, typename PERIPHERAL>
struct clock_control_t {};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, FSMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, FSMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FSMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F215, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC>>
{
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_ADCRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ADC3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_ADC3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, BKPSRAM>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_BKPSRAMEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_BKPSRAMEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, BKPSRAMLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_BKPSRAMLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_BKPSRAMLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CAN1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CAN2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_CAN2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_CAN2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CRC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CRCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_CRCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CRYP>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, CRYPLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_CRYPLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_CRYPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_DACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DACLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_DACLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_DACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DCMI>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_DCMIEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_DCMIRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_DCMIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DCMILP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_DCMILPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_DCMILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_DMA2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACPTP>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACPTPEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACPTPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACPTPLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACPTPLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACRXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACRXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACRXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACRXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_ETHMACTXEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, ETHMACTXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_ETHMACTXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_ETHMACTXLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_FLITFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, FSMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, FSMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= RCC::T::AHB3LPENR_FSMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~RCC::T::AHB3LPENR_FSMCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOA>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOALPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOB>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOBLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOCLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOD>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIODLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOE>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOELPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOF>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOFLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOH>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_GPIOILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_HASHLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, HSAH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_HSAHRST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_I2C3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, OTGFS>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTGFSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, OTGFSLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_OTGFSLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_OTGFSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, OTGHS>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= RCC::T::AHB1RSTR_OTGHSRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= RCC::T::AHB1ENR_OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~RCC::T::AHB1ENR_OTGHSULPIEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_OTGHSULPILPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, PWRLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_PWRLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_PWRLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= RCC::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~RCC::T::AHB2LPENR_RNGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SDIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SDIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SDIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SDIOEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SDIOLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SDIOLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SDIOLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SPI1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_SPI3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= RCC::T::AHB1LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~RCC::T::AHB1LPENR_SRAM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_SYSCFGLPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM10LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM10LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM10LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM11LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM11LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM11LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM12LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM13LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM14LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_TIM7LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM8LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, TIM9LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_TIM9LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_TIM9LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, UART2>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART2RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, UART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART3RST; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART4LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_UART5LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART1LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART2LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_USART3EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_USART3LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= RCC::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= RCC::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~RCC::T::APB2LPENR_USART6LPEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN; }
};

template<typename RCC>
struct clock_control_t<RCC, peripheral_t<STM32F217, WWDGLP>>
{
    static void enable() { rcc_t::V.APB1LPENR |= RCC::T::APB1LPENR_WWDGLPEN; }
    static void disable() { rcc_t::V.APB1LPENR &= ~RCC::T::APB1LPENR_WWDGLPEN; }
};
