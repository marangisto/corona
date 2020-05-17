#pragma once

#include "register.h"
#include "stm32/stm32.h"
#include <device/mcu.h>
#include <device/peripheral.h>
#include <device/interrupt.h>

static constexpr mcu_t mcu = STM32G070RBTx;
static constexpr mcu_family_t mcu_family = mcu_traits<mcu>::mcu_family;
static constexpr mcu_svd_t mcu_svd = mcu_traits<mcu>::mcu_svd;

template<mcu_svd_t SVD, peripheral_enum_t PERIPHERAL>
struct peripheral_t
{
    static_assert(always_false_i<SVD>::value, "peripheral not available on MCU!");
};

template<typename PERIPHERAL>
struct clock_control_t {};

template<interrupt::interrupt_t> void handler();

struct critical_section_t
{
    critical_section_t() { interrupt::disable(); }
    ~critical_section_t() { interrupt::enable(); }
};

class sys_tick
{
public:
    static void delay_ms(uint32_t ms);
    static void delay_us(uint32_t ms);
    static inline uint32_t count() { return ms_counter; }

private:
    friend inline void sys_tick_init(uint32_t n);
    friend inline void sys_tick_update();
    static void init(uint32_t reload);
    static inline void update();
    static volatile uint32_t ms_counter;
    static uint32_t ticks_per_us;
};

class sys_clock
{
public:
    static void init();
    static uint32_t freq() { return m_freq; }
    static void _set_freq(uint32_t freq) { m_freq = freq; }

private:
    static uint32_t m_freq;
};

