#include <board.h>
#include <timer.h>

using tim = tim_t<3>;
using aux = tim_t<2>;
using pwma = tim::pwm<CH1, PB4>;
using pwmb = tim::pwm<CH2, PB5>;    // FIXME: broken on L073?
using pwmc = tim::pwm<CH3, PB0>;
using pwmd = tim::pwm<CH4, PB1>;
using led = board::led1;

template<> void handler<interrupt::TIM2>()
{
    aux::clear_update_interrupt_flag();
    led::toggle();
}

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
    pwmc::setup();
    pwmd::setup();

    aux::setup(sys_clock::freq() / 10000 - 1, 9999);
    aux::enable_update_interrupt();
    interrupt::set<interrupt::TIM2>();
    interrupt::enable();

    for (uint16_t duty = 0;; ++duty)
    {
        if (duty > max_duty)
            duty = 0;

        pwma::duty(duty);
        pwmb::duty(max_duty - duty);
        pwmc::duty(duty);
        pwmd::duty(max_duty - duty);

        sys_tick::delay_ms(1);
    }
}

