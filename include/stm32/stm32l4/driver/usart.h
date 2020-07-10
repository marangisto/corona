#pragma once

template<typename T>
struct usart_driver
{
    static inline void write(uint8_t x) { T::V.DR = x; }
    static inline uint8_t read() { return T::V.DR; }
    static inline bool txe() { return T::V.SR & T::T::SR_TXE; }
    static inline bool rxne() { return T::V.SR & T::T::SR_RXNE; }
};

