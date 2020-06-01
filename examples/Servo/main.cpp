#include <board.h>
#include <servo.h>
#include <math.h>

using master = servo_master_t<3>;
using aux = tim_t<2>;
using led = board::led1;

template<> void handler<interrupt::TIM2>()
{
    aux::clear_update_interrupt_flag();
    led::toggle();
}

static volatile float g_x = 0;
static volatile float g_dx = 0;

static std::function<void(float)> fa;
static std::function<void(float)> fb;

template<> void handler<interrupt::TIM3>()
{
    master::clear_update_interrupt_flag();
    fa(sin(g_x));
    fb(cos(g_x));
    g_x += g_dx;
}

int main()
{
    led::setup();

    master::setup();
    master::enable_update_interrupt();
    fa = master::chan<CH1, PB4>();
    fb = master::chan<CH2, PB5>();

    interrupt::set<interrupt::TIM3>();

    aux::setup(sys_clock::freq() / 10000 - 1, 9999);
    aux::enable_update_interrupt();
    interrupt::set<interrupt::TIM2>();
    interrupt::enable();

    g_dx = 2. * M_PI / 150.;

    for (;;);
}

