#include <board.h>
#include <servo.h>
#include <math.h>

using servos = servos_t<3>;

using servo_a = servos::servo<CH1, PB4>;
using servo_b = servos::servo<CH2, PB5>;

using aux = tim_t<2>;
using led = board::led1;

template<> void handler<interrupt::TIM2>()
{
    aux::clear_update_interrupt_flag();
    led::toggle();
}

static volatile float g_x = 0;
static volatile float g_dx = 0;

template<> void handler<interrupt::TIM3>()
{
    servos::clear_update_interrupt_flag();
    servo_a::set(sin(g_x));
    servo_b::set(cos(g_x));
    g_x += g_dx;
}

int main()
{
    led::setup();

    servos::setup();
    servos::enable_update_interrupt();
    servo_a::setup();
    servo_b::setup();

    interrupt::set<interrupt::TIM3>();

    aux::setup(sys_clock::freq() / 10000 - 1, 9999);
    aux::enable_update_interrupt();
    interrupt::set<interrupt::TIM2>();
    interrupt::enable();

    g_dx = 2. * M_PI / 150.;

    for (;;);
}

