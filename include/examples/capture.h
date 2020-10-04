#include <cstring>
#include <textio.h>
#include <usart.h>
#include <timer.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using out = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;
using icc1 = tim::icc<CH1, TIMER_CH1>;
using icc2 = tim::icc<CH2, TIMER_CH2>;

static volatile bool update = false;
static volatile uint32_t count1 = 0;
static volatile uint32_t accum1 = 0;
static volatile uint32_t count2 = 0;
static volatile uint32_t accum2 = 0;

template<> void handler<TIMER_ISR>()
{
    static tim::count_t last1 = 0, last2 = 0;

    if (tim::update_interrupt_flag())
    {
        uint32_t arr = tim::arr();

        tim::clear_update_interrupt_flag();
        accum1 += arr + 1;
        accum2 += arr + 1;
        led::toggle();
    }

    if (icc1::interrupt_flag())
    {
        icc1::clear_interrupt_flag();
        tim::count_t x = icc1::count();
        count1 = (x - last1) + accum1;
        last1 = x;
        accum1 = 0;
        update = true;
    }

    if (icc2::interrupt_flag())
    {
        icc2::clear_interrupt_flag();
        tim::count_t x = icc2::count();
        count2 = (x - last2) + accum2;
        last2 = x;
        accum2 = 0;
        update = true;
    }
}

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

int main()
{
    led::setup();
    out::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("Hello World!\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    const auto tim_f = 1000000; // Hz
    const auto tim_pre = tim::clock() / tim_f - 1;

    tim::setup(tim_pre, 65535);
    tim::enable_update_interrupt();
    icc1::setup();
    icc1::enable_interrupt();
    icc2::setup();
    icc2::enable_interrupt();
    interrupt::set<TIMER_ISR>();

    for (uint32_t i = 0;;)
    {
        if (update)
        {
            printf<serial>("%05d %5u %5u\n", i++, count1, count2);
            update = 0;
        }
    }
}

