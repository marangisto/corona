#include "../board.h"
#include <device/fdcan.h>
#include <cstring>
#include <textio.h>
#include <usart.h>

using led = output_t<LED>;
using probe = output_t<PROBE>;
using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;

using tx = output_t<PB9>;

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
    led::toggle();
    probe::toggle();
}

template<int INST>
struct fd_can_t
{
    static void setup()
    {
        fdcan_traits<0>::template enable<rcc_t>();   // enable clock
    }

    static uint32_t reg()
    {
        return fdcan::V.DBTP;
    }

private:
    using traits = fdcan_traits<INST>;
    using fdcan = typename traits::fdcan;
    using _ = typename fdcan::T;
};

using fdcan = fd_can_t<1>;

int main()
{
    probe::setup();
    led::setup();

    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("Hello World!\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    fdcan::setup();
    tx::setup();

    for (;;)
    {
        tx::toggle();
        sys_tick::delay_us(8);
    }

    printf<serial>("reg = %x\n", fdcan::reg());

    for (;;)
    {
        static char buf[128];

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;
        printf<serial>("got = '%s'\n", buf);
    }
}

