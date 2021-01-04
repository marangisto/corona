#include "../board.h"
#include <timer.h>

using led = output_t<LED>;
using probe = output_t<PB8>;
using master = tim_t<3>;
using slave = tim_t<4>;
using pulse_a = slave::pwm<CH1, PB6>;
using pulse_b = slave::pwm<CH2, PB7>;

volatile slave::count_t pulse_duty;

template<> void handler<interrupt::TIM3>()
{
    static int i = 0;

    probe::set();
    master::clear_update_interrupt_flag();
    pulse_a::duty(pulse_duty);
    pulse_b::duty(pulse_duty | ((i & 0x1) ? 0 : 0xffff));
    probe::clear();
    slave::enable();
    ++i;
}

int main()
{
    led::setup();
    probe::setup();

    // f_tim = f_clock / ((psc + 1) (arr + 1))
    // arr = t_us * f_clock / (1e6 * (p + 1) - 1

    const auto t1 = 2;     // period in micro-seconds
    const auto pre1 = 0;    // prescaler
    const auto arr1 = t1 * (master::clock() / 1000000) / (pre1 + 1) - 1;

    master::setup(pre1, arr1);
    master::enable_update_interrupt();
    interrupt::set<interrupt::TIM3>();

    const auto len = 500;   // pulse length in nano-seconds
    const auto del = 200;   // delay in nano-seconds
    const auto pre2 = 0;    // prescaler
    const auto c1 = del * (slave::clock() / 1000000) / (1000 * (pre2 + 1));
    const auto c2 = len * (slave::clock() / 1000000) / (1000 * (pre2 + 1));

    slave::setup(pre2, c1 + c2);
    slave::set_one_pulse_mode();
    pulse_a::setup<pwm_mode_2>();
    pulse_b::setup<pwm_mode_2>();
    pulse_duty = c1;

    interrupt::enable();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    }
}

