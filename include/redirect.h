#pragma once

#include <cstdio>

class stdio_t
{
public:
    template<typename T>
    static void bind_stdin() { m_0 = T::read; }

    template<typename T>
    static void bind_stdout() { m_1 = T::write; }

    template<typename T>
    static void bind_stderr() { m_2 = T::write; }

    template<typename T>
    static void bind()
    {
        bind_stdin<T>();
        bind_stdout<T>();
        bind_stderr<T>();
    }

public:
    static bool (*m_0)(char& c);
    static uint32_t (*m_1)(const char *buf, uint32_t len);
    static uint32_t (*m_2)(const char *buf, uint32_t len);
};

bool (*stdio_t::m_0)(char& c) = 0;
uint32_t (*stdio_t::m_1)(const char *buf, uint32_t len) = 0;
uint32_t (*stdio_t::m_2)(const char *buf, uint32_t len) = 0;

extern "C" long _read_r(void *reent, int fd, void *buf, size_t cnt)
{
    char *p = reinterpret_cast<char*>(buf);

    switch (fd)
    {
    case 0:
        if (!stdio_t::m_0 || !cnt)
            return 0;
        while (!stdio_t::m_0(*p));   // busy-wait for character
        return 1;
    default:
        return 0;
    }
}

extern "C" long _write_r(struct _reent *ptr, int fd, const void *buf, size_t cnt)
{
    const char *p = reinterpret_cast<const char*>(buf);

    switch (fd)
    {
        case 1: return stdio_t::m_1 ? stdio_t::m_1(p, cnt) : cnt;
        case 2: return stdio_t::m_2 ? stdio_t::m_2(p, cnt) : cnt;
        default: return 0;
    }
}

