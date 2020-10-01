#include <cstring>
#include <textio.h>
#include <usart.h>
#include <timer.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using out = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;
using aux = tim_t<4>;

static constexpr interrupt_t AUX_ISR = interrupt::TIM4;

static volatile uint32_t count = 0;

template<> void handler<AUX_ISR>()
{
    count = tim::count();
    tim::set_count(0);
    aux::clear_update_interrupt_flag();
    out::toggle();
}

template<> void handler<SERIAL_ISR>()
{
    led::toggle();
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

    const auto aux_f = 20;      // Hz
    const auto aux_pre = 999;
    const uint16_t aux_arr = aux::clock() / (aux_f * (aux_pre + 1)) - 1;

    aux::setup(aux_pre, aux_arr);
    aux::enable_update_interrupt();
    interrupt::set<AUX_ISR>();

    for (uint32_t i = 0;;)
    {
        if (count)
        {
            printf<serial>("count = '%d'\n", count);
            count = 0;
            if (++i >= aux_f)
            {
                led::toggle();
                i = 0;
            }
        }
    }
}

