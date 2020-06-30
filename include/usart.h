#pragma once

#include "gpio.h"
#include "fifo.h"
#include <device/usart.h>

template<int INST, pin_t TX, pin_t RX> struct usart_t
{
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
        typename usart::T& USART = usart::V;

        alternate_t<TX, traits::TX>::template setup<speed>();
        alternate_t<RX, traits::RX>::template setup<pull_up>();

        usart_traits<INST>::template enable<rcc_t>(); // enable clock
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
        usart::V.TDR = x;
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
        fifo::put(usart::V.RDR);
    }

    __attribute__((always_inline))
    static inline bool read(char &c)
    {
        return fifo::get(c);
    }

    __attribute__((always_inline))
    static inline bool tx_empty()
    {
        return usart::V.ISR & _::ISR_TXE;
    }

    __attribute__((always_inline))
    static inline bool rx_not_empty()
    {
        return usart::V.ISR & _::ISR_RXNE;
    }

private:
    using traits = usart_traits<INST>;
    using usart = typename traits::usart;
    using _ = typename usart::T;
    using fifo = fifo_t<char, INST, 16>;    // FIXME id on type!
};

