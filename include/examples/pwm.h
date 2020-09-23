#include <timer.h>

using tim = tim_t<TIMER_NO>;
using pwma = tim::pwm<CH1, TIMER_CH1>;
using pwmb = tim::pwm<CH2, TIMER_CH2>;
using led = output_t<LED>;

int main()
{
    led::setup();

    const auto psc = 0;
    const auto f_pwm = 48000;
    const auto f_sys = sys_clock::freq();
    const uint16_t max_duty = f_sys / (f_pwm * (psc + 1)) - 1;

    tim::setup(psc, max_duty);
    pwma::setup();
    pwmb::setup();

    for (uint16_t duty = 0;; ++duty)
    {
        if (duty > max_duty)
        {
            duty = 0;
            led::toggle();
        }

        pwma::duty(duty);
        pwmb::duty(max_duty - duty);

        sys_tick::delay_ms(1);
    }
}

