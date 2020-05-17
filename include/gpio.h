#pragma once

#include "corona.h"
#include <device/gpio.h>
#include <device/pin.h>
#include <device/rcc.h>
#include <device/control.h>

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

        clock_control_t<gpio_t<PORT>>::enable();

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
        // FIXME: be smarter!
        x ? set() : clear(); return x;
    }

    static inline void toggle()
    {
        // FIXME: be smarter!
        write(!read());
    }

private:
    static constexpr gpio_port_t PORT = port_pin<PIN>();
    static constexpr uint8_t POS = pin_bit<PIN>();
    static constexpr uint32_t MASK = 1 << POS;
};

