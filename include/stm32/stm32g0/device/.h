#pragma once

////
//
//      STM32G0  peripherals
//
////

////
//
//      
//
////

struct stm32g030_gpioc_t
{
};

template<>
struct peripheral_t<STM32G030, GPIOC>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000800;
};

template<>
struct peripheral_t<STM32G030, GPIOD>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000c00;
};

template<>
struct peripheral_t<STM32G030, GPIOF>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50001400;
};

template<>
struct peripheral_t<STM32G030, TIM17>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014800;
};

template<>
struct peripheral_t<STM32G030, USART2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004400;
};

template<>
struct peripheral_t<STM32G030, SPI2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40003800;
};

template<>
struct peripheral_t<STM32G030, I2C2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40005800;
};

template<>
struct peripheral_t<STM32G030, TIM3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40000400;
};

template<>
struct peripheral_t<STM32G031, GPIOC>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000800;
};

template<>
struct peripheral_t<STM32G031, GPIOD>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000c00;
};

template<>
struct peripheral_t<STM32G031, GPIOF>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50001400;
};

template<>
struct peripheral_t<STM32G031, TIM17>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014800;
};

template<>
struct peripheral_t<STM32G031, USART2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004400;
};

template<>
struct peripheral_t<STM32G031, SPI2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40003800;
};

template<>
struct peripheral_t<STM32G031, LPTIM2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40009400;
};

template<>
struct peripheral_t<STM32G031, I2C2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40005800;
};

template<>
struct peripheral_t<STM32G031, TIM3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40000400;
};

template<>
struct peripheral_t<STM32G041, GPIOC>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000800;
};

template<>
struct peripheral_t<STM32G041, GPIOD>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000c00;
};

template<>
struct peripheral_t<STM32G041, GPIOF>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50001400;
};

template<>
struct peripheral_t<STM32G041, TIM17>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014800;
};

template<>
struct peripheral_t<STM32G041, USART2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004400;
};

template<>
struct peripheral_t<STM32G041, SPI2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40003800;
};

template<>
struct peripheral_t<STM32G041, LPTIM2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40009400;
};

template<>
struct peripheral_t<STM32G041, I2C2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40005800;
};

template<>
struct peripheral_t<STM32G041, TIM3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40000400;
};

template<>
struct peripheral_t<STM32G070, GPIOC>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000800;
};

template<>
struct peripheral_t<STM32G070, GPIOD>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000c00;
};

template<>
struct peripheral_t<STM32G070, GPIOF>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50001400;
};

template<>
struct peripheral_t<STM32G070, TIM17>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014800;
};

template<>
struct peripheral_t<STM32G070, TIM15>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014000;
};

template<>
struct peripheral_t<STM32G070, USART2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004400;
};

template<>
struct peripheral_t<STM32G070, USART3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004800;
};

template<>
struct peripheral_t<STM32G070, USART4>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004c00;
};

template<>
struct peripheral_t<STM32G070, SPI2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40003800;
};

template<>
struct peripheral_t<STM32G070, UCPD2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x4000a400;
};

template<>
struct peripheral_t<STM32G070, LPTIM2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40009400;
};

template<>
struct peripheral_t<STM32G070, I2C2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40005800;
};

template<>
struct peripheral_t<STM32G070, TIM7>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40001400;
};

template<>
struct peripheral_t<STM32G070, TIM3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40000400;
};

template<>
struct peripheral_t<STM32G071, GPIOC>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000800;
};

template<>
struct peripheral_t<STM32G071, GPIOD>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000c00;
};

template<>
struct peripheral_t<STM32G071, GPIOF>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50001400;
};

template<>
struct peripheral_t<STM32G071, TIM17>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014800;
};

template<>
struct peripheral_t<STM32G071, USART2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004400;
};

template<>
struct peripheral_t<STM32G071, USART3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004800;
};

template<>
struct peripheral_t<STM32G071, USART4>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004c00;
};

template<>
struct peripheral_t<STM32G071, SPI2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40003800;
};

template<>
struct peripheral_t<STM32G071, UCPD2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x4000a400;
};

template<>
struct peripheral_t<STM32G071, LPTIM2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40009400;
};

template<>
struct peripheral_t<STM32G071, I2C2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40005800;
};

template<>
struct peripheral_t<STM32G071, TIM7>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40001400;
};

template<>
struct peripheral_t<STM32G071, TIM3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40000400;
};

template<>
struct peripheral_t<STM32G081, GPIOC>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000800;
};

template<>
struct peripheral_t<STM32G081, GPIOD>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50000c00;
};

template<>
struct peripheral_t<STM32G081, GPIOF>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x50001400;
};

template<>
struct peripheral_t<STM32G081, TIM17>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014800;
};

template<>
struct peripheral_t<STM32G081, TIM15>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40014000;
};

template<>
struct peripheral_t<STM32G081, USART2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004400;
};

template<>
struct peripheral_t<STM32G081, USART3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004800;
};

template<>
struct peripheral_t<STM32G081, USART4>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40004c00;
};

template<>
struct peripheral_t<STM32G081, SPI2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40003800;
};

template<>
struct peripheral_t<STM32G081, UCPD2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x4000a400;
};

template<>
struct peripheral_t<STM32G081, LPTIM2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40009400;
};

template<>
struct peripheral_t<STM32G081, I2C2>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40005800;
};

template<>
struct peripheral_t<STM32G081, TIM7>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40001400;
};

template<>
struct peripheral_t<STM32G081, TIM3>
{
    typedef stm32g030_gpioc_t type;
    static constexpr uint32_t base_address = 0x40000400;
};

using gpioc_t = peripheral_t<mcu_svd, GPIOC>;
using gpiod_t = peripheral_t<mcu_svd, GPIOD>;
using gpiof_t = peripheral_t<mcu_svd, GPIOF>;
using i2c2_t = peripheral_t<mcu_svd, I2C2>;
using lptim2_t = peripheral_t<mcu_svd, LPTIM2>;
using spi2_t = peripheral_t<mcu_svd, SPI2>;
using tim15_t = peripheral_t<mcu_svd, TIM15>;
using tim17_t = peripheral_t<mcu_svd, TIM17>;
using tim3_t = peripheral_t<mcu_svd, TIM3>;
using tim7_t = peripheral_t<mcu_svd, TIM7>;
using ucpd2_t = peripheral_t<mcu_svd, UCPD2>;
using usart2_t = peripheral_t<mcu_svd, USART2>;
using usart3_t = peripheral_t<mcu_svd, USART3>;
using usart4_t = peripheral_t<mcu_svd, USART4>;

