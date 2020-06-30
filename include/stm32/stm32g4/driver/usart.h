#pragma once

template<typename T>
struct usart_driver
{
    static inline void write(uint8_t x) { T::V.TDR = x; }
    static inline uint8_t read() { return T::V.RDR; }
    static inline bool txe() { return T::V.ISR & T::T::ISR_TXE; }
    static inline bool rxne() { return T::V.ISR & T::T::ISR_RXNE; }
};

