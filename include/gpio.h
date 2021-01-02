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

template<pin_t PIN, int POLARITY = 1>
class analog_t: private gpio_driver<PIN>
{
public:
    using BASE = gpio_driver<PIN>;

    template<periph_t PERIPH>
    static constexpr uint8_t CHAN
        = adc_dac_chan<PERIPH, PIN, POLARITY>::CHAN;

    template<input_type_t input_type = floating>
    static inline void setup()
    {
        gpio_traits<BASE::PORT>::template enable<rcc_t>();
        gpio_driver<PIN>::template setup_analog<input_type>();
    }

    // FIXME: output setup for DAC
};

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
        < output_type_t output_type = push_pull
        , output_speed_t speed = low_speed
        >  // FIXME: should we not have output_type option here?
    static inline void setup() {}

    template<input_type_t input_type = floating>
    static inline void setup() {}
};

template<pin_t PIN>
struct pin_traits
{
    template<pin_t P>
    static constexpr bool same_port = pin_port<P>() == pin_port<PIN>();

    template<unsigned BIT>
    static uint32_t R(uint32_t y)
    {
        return (y & (1 << pin_bit<PIN>())) ? (1 << BIT) : 0;
    }

    template<unsigned BIT>
    static uint32_t W(uint32_t x)
    {
        return (1 << pin_bit<PIN>()) << ((x & (1 << BIT)) ? 0 : 16);
    }

    template<trigger_edge_t EDGE = rising_edge>
    static void enable_interrupt()
    {
        exti_interrupt<pin_port<PIN>(), pin_bit<PIN>()>::template enable
            < EDGE == rising_edge || EDGE == both_edges
            , EDGE == falling_edge || EDGE == both_edges
            >();
    }
};

////
//
//  Pin-set support
//
////

template<>
struct pin_traits<NO_PIN>
{
    template<pin_t P>
    static constexpr bool same_port = true;

    template<unsigned BIT>
    static uint32_t R(uint32_t) { return 0; }

    template<unsigned BIT>
    static uint32_t W(uint32_t) { return 0; }

    template<trigger_edge_t EDGE = rising_edge>
    static void enable_interrupt() {}
};

template
    < pin_t P0
    , pin_t P1 = NO_PIN
    , pin_t P2 = NO_PIN
    , pin_t P3 = NO_PIN
    , pin_t P4 = NO_PIN
    , pin_t P5 = NO_PIN
    , pin_t P6 = NO_PIN
    , pin_t P7 = NO_PIN
    >
class outputs_t: private gpio_driver<P0>
{
public:
    using BASE = gpio_driver<P0>;

    template
        < output_type_t output_type = push_pull
        , output_speed_t speed = low_speed
        >
    static inline void setup()
    {
        static_assert(pin_traits<P1>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P2>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P3>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P4>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P5>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P6>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P7>::template same_port<P0>, "mixed ports");

        gpio_traits<BASE::PORT>::template enable<rcc_t>();

        gpio_driver<P0>::template setup<output_type, speed>();
        gpio_driver<P1>::template setup<output_type, speed>();
        gpio_driver<P2>::template setup<output_type, speed>();
        gpio_driver<P3>::template setup<output_type, speed>();
        gpio_driver<P4>::template setup<output_type, speed>();
        gpio_driver<P5>::template setup<output_type, speed>();
        gpio_driver<P6>::template setup<output_type, speed>();
        gpio_driver<P7>::template setup<output_type, speed>();
    }

    static inline uint32_t read()
    {
        uint32_t x = gpio_t<BASE::PORT>::V.ODR;

        return pin_traits<P0>::template R<0>(x)
             | pin_traits<P1>::template R<1>(x)
             | pin_traits<P2>::template R<2>(x)
             | pin_traits<P3>::template R<3>(x)
             | pin_traits<P4>::template R<4>(x)
             | pin_traits<P5>::template R<5>(x)
             | pin_traits<P6>::template R<6>(x)
             | pin_traits<P7>::template R<7>(x)
             ;
    }

    static inline uint32_t write(uint32_t x)
    {
        gpio_t<BASE::PORT>::V.BSRR
            = pin_traits<P0>::template W<0>(x)
            | pin_traits<P1>::template W<1>(x)
            | pin_traits<P2>::template W<2>(x)
            | pin_traits<P3>::template W<3>(x)
            | pin_traits<P4>::template W<4>(x)
            | pin_traits<P5>::template W<5>(x)
            | pin_traits<P6>::template W<6>(x)
            | pin_traits<P7>::template W<7>(x)
            ;
        return x;
    }
};

template
    < pin_t P0
    , pin_t P1 = NO_PIN
    , pin_t P2 = NO_PIN
    , pin_t P3 = NO_PIN
    , pin_t P4 = NO_PIN
    , pin_t P5 = NO_PIN
    , pin_t P6 = NO_PIN
    , pin_t P7 = NO_PIN
    >
class inputs_t: private gpio_driver<P0>
{
public:
    using BASE = gpio_driver<P0>;

    template<input_type_t input_type = floating>
    static inline void setup()
    {
        static_assert(pin_traits<P1>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P2>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P3>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P4>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P5>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P6>::template same_port<P0>, "mixed ports");
        static_assert(pin_traits<P7>::template same_port<P0>, "mixed ports");

        gpio_traits<BASE::PORT>::template enable<rcc_t>();

        gpio_driver<P0>::template setup<input_type>();
        gpio_driver<P1>::template setup<input_type>();
        gpio_driver<P2>::template setup<input_type>();
        gpio_driver<P3>::template setup<input_type>();
        gpio_driver<P4>::template setup<input_type>();
        gpio_driver<P5>::template setup<input_type>();
        gpio_driver<P6>::template setup<input_type>();
        gpio_driver<P7>::template setup<input_type>();
    }

    static inline uint32_t read()
    {
        uint32_t x = gpio_t<BASE::PORT>::V.IDR;

        return pin_traits<P0>::template R<0>(x)
             | pin_traits<P1>::template R<1>(x)
             | pin_traits<P2>::template R<2>(x)
             | pin_traits<P3>::template R<3>(x)
             | pin_traits<P4>::template R<4>(x)
             | pin_traits<P5>::template R<5>(x)
             | pin_traits<P6>::template R<6>(x)
             | pin_traits<P7>::template R<7>(x)
             ;
    }

    template<trigger_edge_t EDGE = rising_edge>
    static void enable_interrupt()
    {
        pin_traits<P0>::template enable_interrupt<EDGE>();
        pin_traits<P1>::template enable_interrupt<EDGE>();
        pin_traits<P2>::template enable_interrupt<EDGE>();
        pin_traits<P3>::template enable_interrupt<EDGE>();
        pin_traits<P4>::template enable_interrupt<EDGE>();
        pin_traits<P5>::template enable_interrupt<EDGE>();
        pin_traits<P6>::template enable_interrupt<EDGE>();
        pin_traits<P7>::template enable_interrupt<EDGE>();
    }

    static inline uint32_t interrupt_pending()
    {
        uint32_t x = exti_interrupt<BASE::PORT, BASE::POS>::get_bits();

        return pin_traits<P0>::template R<0>(x)
             | pin_traits<P1>::template R<1>(x)
             | pin_traits<P2>::template R<2>(x)
             | pin_traits<P3>::template R<3>(x)
             | pin_traits<P4>::template R<4>(x)
             | pin_traits<P5>::template R<5>(x)
             | pin_traits<P6>::template R<6>(x)
             | pin_traits<P7>::template R<7>(x)
             ;
    }

    static inline void clear_interrupt(uint32_t x)
    {
        exti_interrupt<BASE::PORT, BASE::POS>::clear_bits
            ( pin_traits<P0>::template W<0>(x)
            | pin_traits<P1>::template W<1>(x)
            | pin_traits<P2>::template W<2>(x)
            | pin_traits<P3>::template W<3>(x)
            | pin_traits<P4>::template W<4>(x)
            | pin_traits<P5>::template W<5>(x)
            | pin_traits<P6>::template W<6>(x)
            | pin_traits<P7>::template W<7>(x)
            );
    }
};

