#pragma once

#include <stddef.h>
#include <cstdarg>

extern "C" int sprintf(char *buf, const char *fmt, ...);

extern "C" int snprintf(char* buf, size_t len, const char *fmt, ...);

extern "C" int _vsnprintf
    ( void (*)(char c, void*, size_t, size_t)
    , char* buf
    , const size_t len
    , const char* fmt
    , va_list args
    );

template<typename WRITER>
struct printf_t
{
    static inline void write(char c, void *, size_t, size_t)
    {
        WRITER::write(c);
    }
};

template<typename WRITER>
int printf(const char *fmt, ...)
{
    char buf[1];
    va_list args;
    va_start(args, fmt);
    int n = _vsnprintf
        ( printf_t<WRITER>::write
        , buf
        , 0xFFFFFFFF
        , fmt
        , args
        );
    va_end(args);
    return n;
}

template<typename READER>
size_t getline(char *buf, size_t n)
{
    char *p = buf;

    for (char c = 0; n > 1 && c != '\n'; ++p, --n)
    {
        while (!READER::read(c));
        *p = c;
    }
    *p = 0;
    return p - buf;
}

