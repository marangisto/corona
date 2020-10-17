#pragma once

template<pin_t PIN>
struct gpio_driver
{
    template<output_type_t output_type, output_speed_t speed>
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        GPIO.MODER &= ~(0x3 << (POS*2));
        GPIO.MODER |= output_mode << (POS*2);
        if (speed != low_speed)
            GPIO.OSPEEDR |= speed << (POS*2);
        if (output_type == open_drain)
            GPIO.OTYPER |= MASK;
    }

    template<input_type_t input_type>
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        GPIO.MODER &= ~(0x3 << (POS*2));    // N.B. input_mode is 0
        if (input_type != floating)
            GPIO.PUPDR |= input_type << (POS*2);
    }

    template<input_type_t input_type>
    static inline void setup_analog()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        static_assert
            ( input_type != pull_up
            , "only floating or pull-down modes allowed for analog pins"
            );

        GPIO.MODER |= (0x3 << (POS*2));
        if (input_type != floating)
            GPIO.PUPDR |= input_type << (POS*2);
    }

    template
        < signal_t SIG
        , output_type_t output_type
        , output_speed_t speed
        >  // FIXME: should we not have output_type option here?
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        GPIO.MODER &= ~(0x3 << (POS*2));
        GPIO.MODER |= alternate_mode << (POS*2);
        if (speed != low_speed)
            GPIO.OSPEEDR |= speed << (POS*2);
        if (output_type == open_drain)
            GPIO.OTYPER |= MASK;
        if (POS < 8)
            GPIO.AFRL |= signal_traits<gpio_conf, PIN, SIG>::AF << (POS*4);
        else
            GPIO.AFRH |= signal_traits<gpio_conf, PIN, SIG>::AF << ((POS-8)*4);
    }

    template<signal_t SIG, input_type_t input_type>
    static inline void setup()
    {
        typename gpio_t<PORT>::T& GPIO = gpio_t<PORT>::V;

        GPIO.MODER &= ~(0x3 << (POS*2));
        GPIO.MODER |= alternate_mode << (POS*2);
        if (input_type != floating)
            GPIO.PUPDR |= input_type << (POS*2);
        if (POS < 8)
            GPIO.AFRL |= signal_traits<gpio_conf, PIN, SIG>::AF << (POS*4);
        else
            GPIO.AFRH |= signal_traits<gpio_conf, PIN, SIG>::AF << ((POS-8)*4);
    }

    static constexpr port_t PORT = pin_port<PIN>();
    static constexpr uint8_t POS = pin_bit<PIN>();
    static constexpr uint32_t MASK = 1 << POS;
};

