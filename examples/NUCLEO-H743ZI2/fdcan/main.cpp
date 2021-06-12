#include "../board.h"
#include <timer.h>
#include <cstring>
#include <textio.h>
#include <usart.h>
#include <device/fdcan.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using out = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;
using tx = output_t<PB9>;
using rx = input_t<PB8>;

template<int INST>
struct fd_can_t
{
    static void setup()
    {
        fdcan_traits<0>::template enable<rcc_t>();   // enable clock
    }

    static uint32_t reg()
    {
        return fdcan::V.FDCAN_NBTP;
    }

private:
    using traits = fdcan_traits<INST>;
    using fdcan = typename traits::fdcan;
    using _ = typename fdcan::T;
};

using fdcan = fd_can_t<1>;

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

template<> void handler<TIMER_ISR>()
{
    tim::clear_update_interrupt_flag();
    led::toggle();
    out::toggle();
}

int main()
{
    led::setup();
    out::setup();

    // f_tim = f_sysclock / ((psc + 1) (arr + 1))

    const auto t = 1;       // period in seconds
    const auto arr = 9999;  // counter limit
    const auto pre = t * tim::clock() / (arr + 1) - 1;

    tim::setup(pre, arr);
    tim::enable_update_interrupt();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("Hello World!\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    tx::setup();
    rx::setup();
    fdcan::setup();
    printf<serial>("sys-clock = %04x\n", fdcan::reg());

    for (;;)
    {
        tx::toggle();
        sys_tick::delay_us(10);
    }
}

