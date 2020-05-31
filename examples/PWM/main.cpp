#include <board.h>
#include <timer.h>

using tim = timer_t<3>;
using aux = timer_t<14>;
using pwma = pwm_t<tim, CH1, PB4>;
using pwmb = pwm_t<tim, CH2, PB5>;
using pwmc = pwm_t<tim, CH3, PB0>;
using pwmd = pwm_t<tim, CH4, PB1>;
using led = board::led1;

template<> void handler<interrupt::TIM14>()
{
    aux::clear_update_interrupt_flag();
    led::toggle();
}

int main()
{
    led::setup();

    tim::setup(0, 65535);
    pwma::setup();
    pwmb::setup();
    pwmc::setup();
    pwmd::setup();

    aux::setup(sys_clock::freq() / 10000, 9999);
    aux::enable_update_interrupt();
    interrupt::set<interrupt::TIM14>();
    interrupt::enable();

    for (uint16_t duty = 0;; duty += 32)
    {
        pwma::duty(duty += 32);
        pwmb::duty(65535 - duty);
        pwmc::duty(duty);
        pwmd::duty(65535 - duty);
        sys_tick::delay_ms(1);
    }
}

