#pragma once

#include "corona.h"
#include <device/gpio.h>

enum output_type_t
    { push_pull
    , open_drain
    };

enum output_speed_t
    { low_speed     = 0x0
    , medium_speed  = 0x1
    , high_speed    = 0x3
    };

enum input_type_t
    { floating
    , pull_up
    , pull_down
    };

enum trigger_edge_t
    { rising_edge
    , falling_edge
    , both_edges
    };

enum moder
    { input_mode
    , output_mode
    , alternate_mode
    , analog_mode
    };

template<gpio_pin_t PIN>
static constexpr int pin_bit()
{
    return static_cast<int>(PIN) & 0xf;
}

template<gpio_pin_t PIN>
static constexpr gpio_port_t port_pin()
{
    return static_cast<gpio_port_t>(static_cast<int>(PIN) >> 4);
}

template<gpio_port_t PORT>
using gpio_t = peripheral_t<mcu_svd, gpio_traits_t<PORT>::peripheral>;

template<gpio_pin_t PIN>
class output_t
{
public:
    template
        < output_type_t output_type = push_pull
        , output_speed_t speed = low_speed
        >
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        clock_control_t<rcc_t, gpio_t<PORT>>::enable();

        // FIXME: feature for STM32F1 family!
        GPIO.MODER &= ~(0x3 << (POS*2));
        GPIO.MODER |= output_mode << (POS*2);
        if (speed != low_speed)
            GPIO.OSPEEDR |= speed << (POS*2);
        if (output_type == open_drain)
            GPIO.OTYPER |= MASK;
    }

    static inline void set()
    {
        gpio_t<PORT>::V.BSRR = MASK;
    }

    static inline void clear()
    {
        gpio_t<PORT>::V.BSRR = MASK << 16;
    }

    static inline bool read()
    {
        return (gpio_t<PORT>::V.ODR & MASK) != 0;
    }

    static inline bool write(bool x)
    {
        x ? set() : clear(); return x;
    }

    static inline void toggle()
    {
        write(!read());
    }

private:
    static constexpr gpio_port_t PORT = port_pin<PIN>();
    static constexpr uint8_t POS = pin_bit<PIN>();
    static constexpr uint32_t MASK = 1 << POS;
};

template<gpio_pin_t PIN>
class input_t
{
public:
    template<input_type_t input_type = floating>
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        clock_control_t<rcc_t, gpio_t<PORT>>::enable();
        // FIXME: refactor and feature for F1 series
        GPIO.MODER &= ~(0x3 << (POS*2));    // N.B. input_mode is 0
        if (input_type != floating)
            GPIO.PUPDR |= input_type << (POS*2);
    }

    static inline bool read() { return gpio_t<PORT>::V.IDR & MASK; }

    /*
    // FIXME: refactor and feature for other series
    template<trigger_edge_t EDGE = rising_edge>
    static void enable_interrupt()
    {
        using namespace device;

        peripheral_traits<syscfg_t>::enable();
        constexpr gpio_port_t port = pin_port(PIN);
        constexpr uint8_t shift = (pin_bit(PIN) & 0x3) << 2;
        volatile uint32_t& EXTICR = syscfg_traits<pin_bit(PIN)>::EXTICR();

        EXTICR &= ~(0xf << shift);
        EXTICR |= (port << shift);
        EXTI.IMR1 |= pin::bit_mask;
        if (EDGE == rising_edge || EDGE == both_edges)
            EXTI.RTSR1 |= pin::bit_mask;
        if (EDGE == falling_edge || EDGE == both_edges)
            EXTI.FTSR1 |= pin::bit_mask;

    }

    static inline bool interrupt_pending() { return (device::EXTI.PR1 & pin::bit_mask) != 0; }
    static inline void clear_interrupt() { device::EXTI.PR1 = pin::bit_mask; }
    */

private:
    static constexpr gpio_port_t PORT = port_pin<PIN>();
    static constexpr uint8_t POS = pin_bit<PIN>();
    static constexpr uint32_t MASK = 1 << POS;
};

/*
template<gpio_pin_t PIN>
class analog_t
{
public:
    template<input_type_t input_type = floating>
    static inline void setup()
    {
        device::peripheral_traits<typename port_traits<pin_port(PIN)>::gpio_t>::enable();
        pin::gpio().MODER |= 0x3 << (pin::bit_pos*2);
        static_assert(input_type != pull_up, "only floating or pull-down modes allowed for analog pins");
        if (input_type != floating)
            pin::gpio().PUPDR |= input_type << (pin::bit_pos*2);
    }

private:
    typedef pin_t<PIN> pin;
};
 */

template<gpio_pin_t PIN, alternate_function_t ALT>
class alternate_t
{
public:
    template
        < output_speed_t speed = low_speed
        , output_type_t output_type = push_pull
        >  // FIXME: should we not have output_type option here?
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        clock_control_t<rcc_t, gpio_t<PORT>>::enable();
        GPIO.MODER &= ~(0x3 << (POS*2));
        GPIO.MODER |= alternate_mode << (POS*2);
        if (speed != low_speed)
            GPIO.OSPEEDR |= speed << (POS*2);
        if (output_type == open_drain)
            GPIO.OTYPER |= MASK;
        if (POS < 8)
            GPIO.AFRL |= alt_fun_traits<gpio_conf, PIN, ALT>::AF << (POS*4);
        else
            GPIO.AFRH |= alt_fun_traits<gpio_conf, PIN, ALT>::AF << ((POS-8)*4);
    }

    template<input_type_t input_type = floating>
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        clock_control_t<rcc_t, gpio_t<PORT>>::enable();
        GPIO.MODER &= ~(0x3 << (POS*2));
        GPIO.MODER |= alternate_mode << (POS*2);
        if (input_type != floating)
            GPIO.PUPDR |= input_type << (POS*2);
        if (POS < 8)
            GPIO.AFRL |= alt_fun_traits<gpio_conf, PIN, ALT>::AF << (POS*4);
        else
            GPIO.AFRH |= alt_fun_traits<gpio_conf, PIN, ALT>::AF << ((POS-8)*4);
    }

private:
    static constexpr gpio_port_t PORT = port_pin<PIN>();
    static constexpr uint8_t POS = pin_bit<PIN>();
    static constexpr uint32_t MASK = 1 << POS;
};

