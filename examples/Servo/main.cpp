#include <board.h>
#include <servo.h>
#include <math.h>

using master = servo_master_t<3>;
using aux = timer_t<2>;
using led = board::led1;

template<> void handler<interrupt::TIM2>()
{
    aux::clear_update_interrupt_flag();
    led::toggle();
}

int main()
{
    led::setup();

    master::setup();
    servo_channel_t<master, CH3, PB0> sa;
    servo_channel_t<master, CH4, PB1> sb;

    aux::setup(sys_clock::freq() / 10000 - 1, 9999);
    aux::enable_update_interrupt();
    interrupt::set<interrupt::TIM2>();
    interrupt::enable();

    const float dx = 2. * M_PI / 3000.;

    for (float x = 0;; x += dx)
    {
        sa.set(sin(x));
        sb.set(cos(x));
        sys_tick::delay_ms(1);
    }
}

