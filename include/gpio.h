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

template<pin_t PIN>
static constexpr int pin_bit()
{
    return static_cast<int>(PIN) & 0xf;
}

template<pin_t PIN>
static constexpr port_t pin_port()
{
    return static_cast<port_t>(static_cast<int>(PIN) >> 4);
}

template<port_t PORT>
using gpio_t = typename gpio_traits<PORT>::gpio;

#include <driver/gpio.h>
#include <driver/exti.h>

template<pin_t PIN>
class output_t: private gpio_driver<PIN>
{
public:
    using BASE = gpio_driver<PIN>;

    template
        < output_type_t output_type = push_pull
        , output_speed_t speed = low_speed
        >
    static inline void setup()
    {
        gpio_traits<BASE::PORT>::template enable<rcc_t>();
        gpio_driver<PIN>::template setup<output_type, speed>();
    }

    static inline void set()
    {
        gpio_t<BASE::PORT>::V.BSRR = BASE::MASK;
    }

    static inline void clear()
    {
        gpio_t<BASE::PORT>::V.BSRR = BASE::MASK << 16;
    }

    static inline bool read()
    {
        return (gpio_t<BASE::PORT>::V.ODR & BASE::MASK) != 0;
    }

    static inline bool write(bool x)
    {
        x ? set() : clear(); return x;
    }

    static inline void toggle()
    {
        write(!read());
    }
};

template<pin_t PIN>
class input_t: private gpio_driver<PIN>
{
public:
    using BASE = gpio_driver<PIN>;

    template<input_type_t input_type = floating>
    static inline void setup()
    {
        gpio_traits<BASE::PORT>::template enable<rcc_t>();
        gpio_driver<PIN>::template setup<input_type>();
    }

    static inline bool read()
    {
        return gpio_t<BASE::PORT>::V.IDR & BASE::MASK;
    }

    template<trigger_edge_t EDGE = rising_edge>
    static void enable_interrupt()
    {
        exti_interrupt<BASE::PORT, BASE::POS>::template enable
            < EDGE == rising_edge || EDGE == both_edges
            , EDGE == falling_edge || EDGE == both_edges
            >();
    }

    static inline bool interrupt_pending()
    {
        return exti_interrupt<BASE::PORT, BASE::POS>::pending();
    }

    static inline void clear_interrupt()
    {
        exti_interrupt<BASE::PORT, BASE::POS>::clear();
    }
};

/*
template<pin_t PIN>
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

template<pin_t PIN, signal_t ALT>
class alternate_t: private gpio_driver<PIN>
{
public:
    using BASE = gpio_driver<PIN>;

    template
        < output_type_t output_type = push_pull
        , output_speed_t speed = low_speed
        >  // FIXME: should we not have output_type option here?
    static inline void setup()
    {
        gpio_traits<BASE::PORT>::template enable<rcc_t>();
        BASE::template setup<ALT, output_type, speed>();
    }

    template<input_type_t input_type = floating>
    static inline void setup()
    {
        gpio_traits<BASE::PORT>::template enable<rcc_t>();
        BASE::template setup<ALT, input_type>();
    }
};

template<signal_t ALT>
class alternate_t<NO_PIN, ALT>
{
public:
    template
        < output_speed_t speed = low_speed
        , output_type_t output_type = push_pull
        >  // FIXME: should we not have output_type option here?
    static inline void setup() {}

    template<input_type_t input_type = floating>
    static inline void setup() {}
};

