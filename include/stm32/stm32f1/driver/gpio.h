#pragma once

template<pin_t PIN>
struct gpio_driver
{
    template
        < output_type_t output_type
        , output_speed_t speed
        , int altfun_bit = 0
        >
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        volatile uint32_t& CR = POS < 8 ? GPIO.CRL : GPIO.CRH;
        constexpr uint8_t shift = (POS < 8 ? POS : (POS - 8)) << 2;
        constexpr uint32_t bits = (speed == low_speed ? 0x2 : 0x3)
                                | (output_type == open_drain ? 0x4 : 0)
                                | altfun_bit
                                ;

        CR &= ~(0xf << shift);
        CR |= (bits << shift);
    }

    template<input_type_t input_type>
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        volatile uint32_t& CR = POS < 8 ? GPIO.CRL : GPIO.CRH;
        constexpr uint8_t shift = (POS < 8 ? POS : (POS - 8)) << 2;
        constexpr uint32_t bits = input_type == floating ? 0x4 : 0x8;

        CR &= ~(0xf << shift);
        CR |= (bits << shift);
        if (input_type == pull_up)
            GPIO.ODR |= MASK;
        else
            GPIO.ODR &= ~MASK;
    }

    template
        < signal_t SIG
        , output_type_t output_type
        , output_speed_t speed
        >  // FIXME: should we not have output_type option here?
    static inline void setup()
    {
        static_assert(signal_traits<gpio_conf, PIN, SIG>::AF == REMAP, "FIXME: support more than REMAP");

        setup<output_type, speed, 0x8>();   // N.B. alt-fun bit!
    }

    template<signal_t SIG, input_type_t input_type>
    static inline void setup()
    {
        static_assert(signal_traits<gpio_conf, PIN, SIG>::AF == REMAP, "FIXME: support more than REMAP");

        setup<input_type>();    // yes, that's all!
    }

    static constexpr port_t PORT = pin_port<PIN>();
    static constexpr uint8_t POS = pin_bit<PIN>();
    static constexpr uint32_t MASK = 1 << POS;
};

