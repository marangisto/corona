#pragma once

#include "gpio.h"
#include "fifo.h"
#include <device/usart.h>

template<int INST> struct usart_traits {};

template<> struct usart_traits<1>
{
    static constexpr peripheral_enum_t peripheral = USART1;
    static constexpr alternate_function_t tx = USART1_TX;
    static constexpr alternate_function_t rx = USART1_RX;
};

template<> struct usart_traits<2>
{
    static constexpr peripheral_enum_t peripheral = USART2;
    static constexpr alternate_function_t tx = USART2_TX;
    static constexpr alternate_function_t rx = USART2_RX;
};

template<int INST>
using usart = peripheral_t<mcu_svd, usart_traits<INST>::peripheral>;

template<int INST, gpio_pin_t TX, gpio_pin_t RX> struct usart_t
{
private:
    typedef fifo_t<char, INST, 16> fifo;
    using _ = typename usart<INST>::T;

public:
    template
        < uint32_t              baud = 9600
        , uint8_t               data_bits = 8
        , uint8_t               stop_bits = 1
        , bool                  parity = false
        , output_speed_t        speed = high_speed
        >
    static inline void setup()
    {
        typename usart<INST>::T& USART = usart<INST>::V;

        alternate_t<TX, usart_traits<INST>::tx>::template setup<speed>();
        alternate_t<RX, usart_traits<INST>::rx>::template setup<pull_up>();

        clock_control_t<usart<INST>>::enable(); // enable clock
        USART.BRR = sys_clock::freq() / baud;   // set baud-rate FIXME: need clock reference!
        USART.CR1 |= _::CR1_RESET_VALUE     // reset control register 1
                  | _::CR1_TE               // enable transmitter
                  | _::CR1_RE               // enable receiver
                  | _::CR1_RXNEIE           // interrupt on rx not empty
                  | _::CR1_UE               // enable usart itself
                  ;
        USART.CR2 |= _::CR2_RESET_VALUE;    // reset control register 2
        USART.CR3 |= _::CR3_RESET_VALUE;    // reset control register 3
    }

    __attribute__((always_inline))
    static inline void write(uint8_t x)
    {
        while (!tx_empty());
        usart<INST>::V.TDR = x;
    }

    static inline void write(const char *s)
    {
        while (*s)
            write(*s++);
    }

    static uint32_t write(const char *buf, uint32_t len)
    {
        for (uint32_t i = 0; i < len; ++i)
            write(*buf++);
        return len;
    }

    // call isr in relevant handler
    __attribute__((always_inline))
    static inline void isr()
    {
        fifo::put(usart<INST>::V.RDR);
    }

    __attribute__((always_inline))
    static inline bool read(char &c)
    {
        return fifo::get(c);
    }

    __attribute__((always_inline))
    static inline bool tx_empty()
    {
        return usart<INST>::V.ISR & _::ISR_TXE;
    }

    __attribute__((always_inline))
    static inline bool rx_not_empty()
    {
        return usart<INST>::V.ISR & _::ISR_RXNE;
    }
};

