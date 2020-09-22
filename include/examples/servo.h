#include <servo.h>
#include <math.h>

using tim = servo_timer_t<TIMER_NO>;
using servo_a = tim::servo<CH1, TIMER_CH1>;
using servo_b = tim::servo<CH2, TIMER_CH2>;
using led = output_t<LED>;

static constexpr float g_dx = 2. * M_PI / 101.;

template<> void handler<TIMER_ISR>()
{
    static float g_x = 0;
    float a = sin(g_x), b = cos(g_x);

    tim::clear_update_interrupt_flag();
    servo_a::set(a);
    servo_b::set(b);
    led::write(a > b);
    g_x += g_dx;
}

int main()
{
    led::setup();
    tim::setup();
    tim::enable_update_interrupt();
    servo_a::setup();
    servo_b::setup();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    for (;;);
}

