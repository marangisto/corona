#pragma once

////
//
//      STM32H7 peripheral clock control
//
////

template<typename PERIPHERAL>
struct clock_control_t {};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, FLASHLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLASHLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB1OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGHSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB1OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGHSULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB2OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGHSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB2OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGHSULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB2OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGHSULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H742x, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, FLASHLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLASHLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB1OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGHSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB1OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGHSULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB2OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGHSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB2OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGHSULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB2OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGHSULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H743, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM4, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H745_CM7, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM4, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H747_CM7, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H750x, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, FLASHLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLASHLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB1OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGHSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB1OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGHSULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB2OTGHSLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGHSLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGHSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB2OTGHSULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGHSULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGHSULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB2OTGHSULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGHSULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGHSULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H753, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM4, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H755_CM7, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM4, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ADC12>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ADC12EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ADC12LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ADC12LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ADC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ADC3>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_ADC3EN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ADC3LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_ADC3LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_ADC3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, AXISRAMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_AXISRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, BDMA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BDMAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, BDMALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BDMALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, BKPRAM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_BKPRAMEN; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_BKPRAMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, BKPRAMLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_BKPRAMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CAMITF>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CAMITFEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CAMITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CAMITFLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CAMITFLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CAMITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, COMP12>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_COMP12EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_COMP12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, COMP12LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_COMP12LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_COMP12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CRC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_CRCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CRCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_CRCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_CRCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CRS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_CRSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CRSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_CRSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_CRSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CRYPT>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_CRYPTEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_CRYPTEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, CRYPTLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_CRYPTLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_CRYPTLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, D1DTCM1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_D1DTCM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DAC12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_DAC12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_DAC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DAC12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_DAC12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_DAC12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DFSDM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DFSDM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DFSDM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DFSDM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_DFSDM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_DFSDM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DMA1>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA1EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DMA1LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA1LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DMA2>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_DMA2EN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DMA2D>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_DMA2DEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_DMA2DEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DMA2DLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DMA2DLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DMA2DLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DMA2LP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_DMA2LPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_DMA2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, DTCM2LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_DTCM2LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_DTCM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ETH1MAC>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1MACEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1MACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ETH1MACLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1MACLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ETH1RX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1RXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1RXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ETH1RXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1RXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ETH1TX>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_ETH1TXEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_ETH1TXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ETH1TXLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_ETH1TXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, FDCAN>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_FDCANEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_FDCANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, FDCANLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_FDCANLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_FDCANLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, FLITFLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FLITFLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FLITFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, FMC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_FMCEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, FMCLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_FMCLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_FMCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOA>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOAEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOALP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOALPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOB>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOBEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOBLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOBLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOC>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOCEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOCLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOCLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOD>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIODEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIODEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIODLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIODLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIODLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOE>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOEEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOELP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOELPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOELPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOF>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOFEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOFLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOFLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOG>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOGEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOGLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOGLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOH>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOHEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOHLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOHLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOI>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOIEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOILP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOILPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOJ>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOJEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOJEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOJLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOJLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOJLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOK>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_GPIOKEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_GPIOKEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, GPIOKLP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_GPIOKLPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_GPIOKLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HASH>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_HASHEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_HASHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HASHLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_HASHLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_HASHLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HDMICEC>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_HDMICECEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_HDMICECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HDMICECLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_HDMICECLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_HDMICECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HRTIM>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_HRTIMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HRTIMLP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_HRTIMLPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_HRTIMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, HSEM>>
{
    static void enable() { rcc_t::V.AHB4ENR |= rcc_t::T::AHB4ENR_HSEMEN; }
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
    static void disable() { rcc_t::V.AHB4ENR &= ~rcc_t::T::AHB4ENR_HSEMEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_I2C3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_I2C3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_I2C4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_I2C4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, I2C4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_I2C4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_I2C4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, ITCMLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_ITCMLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_ITCMLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, JPGDEC>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_JPGDECEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_JPGDECEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, JPGDECLP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_JPGDECLPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_JPGDECLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM1>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_LPTIM1EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_LPTIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM1LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_LPTIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM2>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM2EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM2LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM2LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM3>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM3EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM3LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM3LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM5>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPTIM5EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPTIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPTIM5LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPTIM5LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPTIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPUART>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_LPUART1EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_LPUART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LPUART1LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_LPUART1LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_LPUART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LTDC>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_LTDCEN; }
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_LTDCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, LTDCLP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_LTDCLPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_LTDCLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, MDIOS>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_MDIOSEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_MDIOSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, MDIOSLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_MDIOSLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_MDIOSLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, MDMA>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_MDMAEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_MDMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, MDMALP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_MDMALPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_MDMALPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, OPAMP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_OPAMPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_OPAMPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, OPAMPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_OPAMPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_OPAMPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, QSPI>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_QSPIEN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_QSPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, QSPILP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_QSPILPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_QSPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, RNG>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_RNGEN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_RNGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, RNGLP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_RNGLPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_RNGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, RTCAPBLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_RTCAPBLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_RTCAPBLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI2LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI2LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SAI3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SAI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI3LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SAI3LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SAI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI4>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SAI4EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SAI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SAI4LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SAI4LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SAI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SDMMC1>>
{
    static void enable() { rcc_t::V.AHB3ENR |= rcc_t::T::AHB3ENR_SDMMC1EN; }
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
    static void disable() { rcc_t::V.AHB3ENR &= ~rcc_t::T::AHB3ENR_SDMMC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SDMMC1LP>>
{
    static void enable() { rcc_t::V.AHB3LPENR |= rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
    static void disable() { rcc_t::V.AHB3LPENR &= ~rcc_t::T::AHB3LPENR_SDMMC1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SDMMC2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SDMMC2EN; }
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SDMMC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SDMMC2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SDMMC2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPDIFRX>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPDIFRXEN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPDIFRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPDIFRXLP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPDIFRXLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_SPI3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_SPI3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI4>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI4EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI4LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI4LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI5>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI5EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI5LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_SPI5LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_SPI5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI6>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SPI6EN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SPI6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SPI6LP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SPI6LPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SPI6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM1>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM1EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM1LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM1LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM2>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM2EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM2LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM2LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM3>>
{
    static void enable() { rcc_t::V.AHB2ENR |= rcc_t::T::AHB2ENR_SRAM3EN; }
    static void disable() { rcc_t::V.AHB2ENR &= ~rcc_t::T::AHB2ENR_SRAM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM3LP>>
{
    static void enable() { rcc_t::V.AHB2LPENR |= rcc_t::T::AHB2LPENR_SRAM3LPEN; }
    static void disable() { rcc_t::V.AHB2LPENR &= ~rcc_t::T::AHB2LPENR_SRAM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SRAM4LP>>
{
    static void enable() { rcc_t::V.AHB4LPENR |= rcc_t::T::AHB4LPENR_SRAM4LPEN; }
    static void disable() { rcc_t::V.AHB4LPENR &= ~rcc_t::T::AHB4LPENR_SRAM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SWP>>
{
    static void enable() { rcc_t::V.APB1HENR |= rcc_t::T::APB1HENR_SWPEN; }
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
    static void disable() { rcc_t::V.APB1HENR &= ~rcc_t::T::APB1HENR_SWPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SWPLP>>
{
    static void enable() { rcc_t::V.APB1HLPENR |= rcc_t::T::APB1HLPENR_SWPLPEN; }
    static void disable() { rcc_t::V.APB1HLPENR &= ~rcc_t::T::APB1HLPENR_SWPLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SYSCFG>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, SYSCFGLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_SYSCFGLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_SYSCFGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM12>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM12LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM12LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM12LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM13>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM13LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM13LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM13LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM14>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM14LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM14LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM14LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM15LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM15LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM15LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM16LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM16LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM16LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM17LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM17LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM17LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM6>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM6LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM6LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_TIM7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_TIM7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, TIM8LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_TIM8LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_TIM8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, UART4>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART4EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, UART4LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART4LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART4LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, UART5>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_UART5EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, UART5LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_UART5LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_UART5LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART1LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART1LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART2>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART2EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART2LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART2LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART2LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART3>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART3EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART3LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART3LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART3LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART6LP>>
{
    static void enable() { rcc_t::V.APB2LPENR |= rcc_t::T::APB2LPENR_USART6LPEN; }
    static void disable() { rcc_t::V.APB2LPENR &= ~rcc_t::T::APB2LPENR_USART6LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART7>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART7EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART7LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART7LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART7LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART8>>
{
    static void enable() { rcc_t::V.APB1LENR |= rcc_t::T::APB1LENR_USART8EN; }
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
    static void disable() { rcc_t::V.APB1LENR &= ~rcc_t::T::APB1LENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USART8LP>>
{
    static void enable() { rcc_t::V.APB1LLPENR |= rcc_t::T::APB1LLPENR_USART8LPEN; }
    static void disable() { rcc_t::V.APB1LLPENR &= ~rcc_t::T::APB1LLPENR_USART8LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB1OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB1OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB1ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB1ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB1ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB1ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB1ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB2OTG>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2OTGEN; }
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2OTGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB2OTGLP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2OTGLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB2ULPI>>
{
    static void enable() { rcc_t::V.AHB1ENR |= rcc_t::T::AHB1ENR_USB2ULPIEN; }
    static void disable() { rcc_t::V.AHB1ENR &= ~rcc_t::T::AHB1ENR_USB2ULPIEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, USB2ULPILP>>
{
    static void enable() { rcc_t::V.AHB1LPENR |= rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
    static void disable() { rcc_t::V.AHB1LPENR &= ~rcc_t::T::AHB1LPENR_USB2ULPILPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, VREF>>
{
    static void enable() { rcc_t::V.APB4ENR |= rcc_t::T::APB4ENR_VREFEN; }
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
    static void disable() { rcc_t::V.APB4ENR &= ~rcc_t::T::APB4ENR_VREFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, VREFLP>>
{
    static void enable() { rcc_t::V.APB4LPENR |= rcc_t::T::APB4LPENR_VREFLPEN; }
    static void disable() { rcc_t::V.APB4LPENR &= ~rcc_t::T::APB4LPENR_VREFLPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, WWDG1>>
{
    static void enable() { rcc_t::V.APB3ENR |= rcc_t::T::APB3ENR_WWDG1EN; }
    static void disable() { rcc_t::V.APB3ENR &= ~rcc_t::T::APB3ENR_WWDG1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H757_CM7, WWDG1LP>>
{
    static void enable() { rcc_t::V.APB3LPENR |= rcc_t::T::APB3LPENR_WWDG1LPEN; }
    static void disable() { rcc_t::V.APB3LPENR &= ~rcc_t::T::APB3LPENR_WWDG1LPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, ADC12>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, ADC3>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, BDMA>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, CAMITF>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, COMP12>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, CRC>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, CRS>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, CRYPT>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, DAC12>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, DFSDM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, DMA1>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, DMA2>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, DMA2D>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, ETH1MAC>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, FDCAN>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, FMC>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOA>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOB>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOC>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOD>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOE>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOF>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOG>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOH>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOI>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOJ>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, GPIOK>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, HASH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, HDMICEC>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, HRTIM>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, HSEM>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, I2C1>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, I2C2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, I2C3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, I2C4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, JPGDEC>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LPTIM2>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LPTIM3>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LPTIM4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LPTIM5>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LPUART>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, LTDC>>
{
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, MDIOS>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, MDMA>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, OPAMP>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, QSPI>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, RNG>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SAI1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SAI2>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SAI3>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SAI4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SDMMC1>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SDMMC2>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPDIFRX>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPI1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPI2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPI3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SPI6>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SWP>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, SYSCFG>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM12>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM13>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM14>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM15>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM16>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM17>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM4>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM5>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM6>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM7>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, TIM8>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, UART4>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, UART5>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USART1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USART2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USART3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USART6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USART7>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USART8>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USB1OTG>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, USB2OTG>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7A3x, VREF>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, ADC12>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, ADC3>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, BDMA>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, CAMITF>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, COMP12>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, CRC>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, CRS>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, CRYPT>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, DAC12>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, DFSDM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, DMA1>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, DMA2>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, DMA2D>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, ETH1MAC>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, FDCAN>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, FMC>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOA>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOB>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOC>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOD>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOE>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOF>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOG>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOH>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOI>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOJ>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, GPIOK>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, HASH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, HDMICEC>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, HRTIM>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, HSEM>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, I2C1>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, I2C2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, I2C3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, I2C4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, JPGDEC>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LPTIM2>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LPTIM3>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LPTIM4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LPTIM5>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LPUART>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, LTDC>>
{
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, MDIOS>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, MDMA>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, OPAMP>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, QSPI>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, RNG>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SAI1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SAI2>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SAI3>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SAI4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SDMMC1>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SDMMC2>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPDIFRX>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPI1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPI2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPI3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SPI6>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SWP>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, SYSCFG>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM12>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM13>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM14>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM15>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM16>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM17>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM4>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM5>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM6>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM7>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, TIM8>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, UART4>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, UART5>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USART1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USART2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USART3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USART6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USART7>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USART8>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USB1OTG>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, USB2OTG>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B0x, VREF>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, ADC12>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ADC12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, ADC3>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_ADC3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, BDMA>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_BDMARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, CAMITF>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CAMITFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, COMP12>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_COMP12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, CPU>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_CPURST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, CRC>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_CRCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, CRS>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_CRSRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, CRYPT>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_CRYPTRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, DAC12>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_DAC12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, DFSDM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DFSDM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, DMA1>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, DMA2>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_DMA2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, DMA2D>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_DMA2DRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, ETH1MAC>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_ETH1MACRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, FDCAN>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_FDCANRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, FMC>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_FMCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOA>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOB>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOC>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOD>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIODRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOE>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOERST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOF>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOFRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOG>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOH>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOHRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOI>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOIRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOJ>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOJRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, GPIOK>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_GPIOKRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, HASH>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_HASHRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, HDMICEC>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_HDMICECRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, HRTIM>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_HRTIMRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, HSEM>>
{
    static void reset() { rcc_t::V.AHB4RSTR |= rcc_t::T::AHB4RSTR_HSEMRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, I2C1>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, I2C2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, I2C3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_I2C3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, I2C4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_I2C4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, JPGDEC>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_JPGDECRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LPTIM1>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_LPTIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LPTIM2>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LPTIM3>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LPTIM4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LPTIM5>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPTIM5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LPUART>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_LPUART1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, LTDC>>
{
    static void reset() { rcc_t::V.APB3RSTR |= rcc_t::T::APB3RSTR_LTDCRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, MDIOS>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_MDIOSRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, MDMA>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_MDMARST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, OPAMP>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_OPAMPRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, QSPI>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_QSPIRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, RNG>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_RNGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SAI1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SAI2>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SAI3>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SAI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SAI4>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SAI4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SDMMC1>>
{
    static void reset() { rcc_t::V.AHB3RSTR |= rcc_t::T::AHB3RSTR_SDMMC1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SDMMC2>>
{
    static void reset() { rcc_t::V.AHB2RSTR |= rcc_t::T::AHB2RSTR_SDMMC2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPDIFRX>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPDIFRXRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPI1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPI2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPI3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_SPI3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPI4>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPI5>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SPI6>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SPI6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SWP>>
{
    static void reset() { rcc_t::V.APB1HRSTR |= rcc_t::T::APB1HRSTR_SWPRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, SYSCFG>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_SYSCFGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM12>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM12RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM13>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM13RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM14>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM14RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM15>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM16>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM17>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM4>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM5>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM6>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM7>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_TIM7RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, TIM8>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, UART4>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, UART5>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USART1>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USART2>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USART3>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USART6>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART6RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USART7>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART7RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USART8>>
{
    static void reset() { rcc_t::V.APB1LRSTR |= rcc_t::T::APB1LRSTR_USART8RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USB1OTG>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB1OTGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, USB2OTG>>
{
    static void reset() { rcc_t::V.AHB1RSTR |= rcc_t::T::AHB1RSTR_USB2OTGRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32H7B3x, VREF>>
{
    static void reset() { rcc_t::V.APB4RSTR |= rcc_t::T::APB4RSTR_VREFRST; }
};
