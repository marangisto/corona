#include <corona.h>
#include <algorithm>
#include <device/rcc.h>
#include <device/stk.h>
#include <device/flash.h>
#include <driver/sysclock.h>

void sys_tick::delay_ms(uint32_t ms)
{
    uint32_t now = ms_counter, then = now + ms;

    while (ms_counter >= now && ms_counter < then)
        ;   // busy wait
}

void sys_tick::delay_us(uint32_t us)
{
    stk_t::T& STK = stk_t::V;
    volatile uint32_t& c = STK.CVR;
    const uint32_t c_max = STK.RVR;
    const uint32_t fuzz = ticks_per_us - (ticks_per_us >> 2);
    const uint32_t n = us * ticks_per_us - fuzz;
    const uint32_t now = c;
    const uint32_t then = now >= n ? now - n : (c_max - n + now);

    if (now > then)
        while (c > then && c < now);
    else
        while (!(c > now && c < then));
}

void sys_tick::init(uint32_t n)
{
    typedef stk_t::T _;
    stk_t::T& STK = stk_t::V;

    ms_counter = 0;                 // start new epoq
    ticks_per_us = n / 1000;        // for us in delay_us

    STK.CSR = _::CSR_RESET_VALUE;   // reset controls
    STK.RVR = n - 1;                // reload value
    STK.CVR = _::CVR_RESET_VALUE;   // current counter value
    STK.CSR |= _::CSR_CLKSOURCE;    // systick clock source
    STK.CSR |= _::CSR_ENABLE | _::CSR_TICKINT;  // enable 
}

volatile uint32_t sys_tick::ms_counter = 0;
uint32_t sys_tick::ticks_per_us = 0;

inline void sys_tick_init(uint32_t n) { sys_tick::init(n); }
inline void sys_tick_update() { ++sys_tick::ms_counter; }

uint32_t sys_clock::m_freq;

void sys_clock::init()
{
    m_freq = clock_tree_init();
    sys_tick_init(m_freq / 1000);
}

template<> void handler<interrupt::SYSTICK>()
{
    sys_tick_update();              // N.B. wraps in 49 days!
}

extern void system_init(void)
{
    sys_clock::init();
}

