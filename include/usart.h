#pragma once

#include "gpio.h"
#include "fifo.h"
#include <device/usart.h>
#include <driver/usart.h>

template<int INST, pin_t TX, pin_t RX, pin_t CK = NO_PIN> struct usart_t
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

        static_assert(CK == NO_PIN, "clock pin not allowed in async mode");
        alternate_t<TX, traits::TX>::template setup<push_pull, speed>();
        alternate_t<RX, traits::RX>::template setup<pull_up>();

        usart_traits<INST>::template enable<rcc_t>();   // enable clock

        const uint32_t clock = sys_clock::freq(usart_traits<INST>::CLOCK);

        USART.BRR = clock / baud;           // set the baud-rate
        USART.CR1 = _::CR1_RESET_VALUE      // reset control register 1
                  | _::CR1_TE               // enable transmitter
                  | _::CR1_RE               // enable receiver
                  | _::CR1_RXNEIE           // interrupt on rx not empty
                  | _::CR1_UE               // enable usart itself
                  ;
        USART.CR2 = _::CR2_RESET_VALUE;     // reset control register 2
        USART.CR3 = _::CR3_RESET_VALUE;     // reset control register 3
    }

    template
        < uint32_t              baud = 1000000
        , output_speed_t        speed = high_speed
        >
    static inline void setup_sync_master()
    {
        typename usart::T& USART = usart::V;

        static_assert(CK != NO_PIN, "clock pin required in sync mode");
        alternate_t<CK, traits::CK>::template setup<push_pull, speed>();
        alternate_t<TX, traits::TX>::template setup<push_pull, speed>();
        alternate_t<RX, traits::RX>::template setup<pull_up>();

        usart_traits<INST>::template enable<rcc_t>();   // enable clock

        const uint32_t clock = sys_clock::freq(usart_traits<INST>::CLOCK);

        USART.BRR = clock / baud;           // set the baud-rate
        USART.CR3 = _::CR3_RESET_VALUE;     // reset control register 3
        USART.CR2 = _::CR2_RESET_VALUE      // reset control register 2
                  | _::CR2_CLKEN            // enable clock output
                  | _::CR2_LBCL             // issue clock on last bit
                  | _::CR2_MSBFIRST         // most significant bit first
                  ;
        USART.CR1 = _::CR1_RESET_VALUE      // reset control register 1
                  | _::CR1_TE               // enable transmitter
                  | _::CR1_RE               // enable receiver
                  | _::CR1_UE               // enable usart itself
                  ;
    }

    __attribute__((always_inline))
    static inline void write(uint8_t x)
    {
        while (!tx_empty());
        usart_driver<usart>::write(x);
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
        fifo::put(usart_driver<usart>::read());
    }

    __attribute__((always_inline))
    static inline bool read(char& c)
    {
        return fifo::get(c);
    }

    __attribute__((always_inline))
    static inline bool peek(char& c)
    {
        return fifo::peek(c);
    }

    __attribute__((always_inline))
    static inline bool tx_empty()
    {
        return usart_driver<usart>::txe();
    }

    __attribute__((always_inline))
    static inline bool rx_not_empty()
    {
        return usart_driver<usart>::rxne();
    }

    __attribute__((always_inline))
    static inline bool tx_complete()
    {
        return usart_driver<usart>::tc();
    }

private:
    using traits = usart_traits<INST>;
    using usart = typename traits::usart;
    using _ = typename usart::T;
    using fifo = fifo_t<char, INST, 16>;    // FIXME id on type!
};

