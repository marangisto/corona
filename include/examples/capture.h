#include <cstring>
#include <textio.h>
#include <usart.h>
#include <timer.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using out = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;
using icc = tim::icc<CH1, TIMER_CH1>;

static volatile uint32_t count = 0;
static volatile tim::count_t ovf = 0;

template<> void handler<TIMER_ISR>()
{
    static bool idle = true;
    static uint32_t start = 0;
    static uint32_t overflow = 0;

    if (icc::interrupt_flag())
    {
        icc::clear_interrupt_flag();

        if (idle)
        {
            start = icc::count();
            idle = false;
            overflow = 0;
        }
        else
        {
            count = overflow + icc::count() - start;
            tim::set_count(0);
            idle = true;
        }
    }

    if (tim::update_interrupt_flag())
    {
        tim::clear_update_interrupt_flag();
        ovf = tim::count() - 1;
        overflow += tim::arr() + 1;
        led::toggle();
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
    icc::setup();
    icc::enable_interrupt();
    interrupt::set<TIMER_ISR>();

    for (uint32_t i = 0;;)
    {
        if (count)
        {
            if (ovf)
                printf<serial>("%05d %5u %5u\n", i++, count, ovf);
            else
                printf<serial>("%05d %5u\n", i++, count);
            count = 0;
            ovf = 0;
        }
    }
}

