#pragma once

#include "gpio.h"

template<gpio_pin_t PIN>
class button_t
{
public:
    static inline bool read()               // call from main thread only
    {
        interrupt::disable();
        bool b = m_pressed;
        m_pressed = false;
        interrupt::enable();
        return b;
    }
 
    static inline void update()             // call from ISR every ms or so
    {
        bool this_state = input::read();

        m_count = this_state != m_stable_state && this_state == m_last_state ? m_count + 1 : 0;
        if (m_count == m_stable_count)
            m_pressed = true;
        m_last_state = this_state;
    }

    static inline bool update_read()        // combined call for isr
    {
        update();
        bool b = m_pressed;
        m_pressed = false;
        return b;
    }

    template<input_type_t input_type>
    static void setup(uint8_t stable_count = 8)
    {
        static_assert(input_type != floating, "input type must be pull-up or pull-down");
        input::template setup<input_type>();
        m_stable_count = stable_count;
        m_stable_state = input_type == pull_up;
        m_last_state = m_stable_state;
        m_count = 0;
        m_pressed = false;
    }

private:
    typedef input_t<PIN> input;

    static bool     m_stable_state;
    static bool     m_last_state;
    static uint8_t  m_stable_count;
    static uint8_t  m_count;
    static bool     m_pressed;
};

template<gpio_pin_t PIN> bool button_t<PIN>::m_stable_state;
template<gpio_pin_t PIN> bool button_t<PIN>::m_last_state;
template<gpio_pin_t PIN> uint8_t button_t<PIN>::m_stable_count;
template<gpio_pin_t PIN> uint8_t button_t<PIN>::m_count;
template<gpio_pin_t PIN> bool button_t<PIN>::m_pressed;

