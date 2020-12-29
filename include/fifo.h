#pragma once

#include "corona.h"

template<class T, uint8_t IDENT, uint8_t BUFSIZE>
class fifo_t
{
public:
    static bool get(T& x)
    {
        critical_section_t cs;

        if (m_ridx == m_widx)
            return false;
        x = m_buf[m_ridx++ & mask];
        if (m_ridx == m_widx)           // rebase indices
            m_ridx = m_widx = 0;
        return true;
    }

    static bool peek(T& x)
    {
        critical_section_t cs;

        if (m_ridx == m_widx)
            return false;
        x = m_buf[m_ridx & mask];
        return true;
    }

    inline static void put(T x)         // use in interrupt only
    {
        static_assert((BUFSIZE != 0) && !(BUFSIZE & (BUFSIZE - 1)), "buffer size must be a power of 2");

        if (m_widx < m_ridx + BUFSIZE)  // discard when buffer full
            m_buf[m_widx++ & mask] = x;
    }

private:
    static const uint8_t mask = BUFSIZE - 1;
    static T m_buf[BUFSIZE];
    static uint8_t m_widx, m_ridx;
};

template<class T, uint8_t IDENT, uint8_t BUFSIZE> T fifo_t<T, IDENT, BUFSIZE>::m_buf[BUFSIZE];
template<class T, uint8_t IDENT, uint8_t BUFSIZE> uint8_t fifo_t<T, IDENT, BUFSIZE>::m_widx = 0;
template<class T, uint8_t IDENT, uint8_t BUFSIZE> uint8_t fifo_t<T, IDENT, BUFSIZE>::m_ridx = 0;

