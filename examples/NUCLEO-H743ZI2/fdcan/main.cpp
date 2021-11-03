#include "../board.h"
#include <fdcan.h>
#include <timer.h>
#include <cstring>
#include <textio.h>
#include <usart.h>
#include <mco.h>

using fdcan = fd_can_t<1, PB9, PB8>;
using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using probe = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;
using mco2 = mco_t<PC9>;

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

template<> void handler<TIMER_ISR>()
{
    tim::clear_update_interrupt_flag();
    led::toggle();
}

int main()
{
    led::setup();
    probe::setup();
    mco2::setup<mco_pll2, 10>();

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

    //fdcan::setup<64, 128, 64, 32, 32, 0, 32, 32, 0>();
    fdcan::setup<8, 0, 0, 1>();
    fdcan::start();
    sys_tick::delay_ms(100);

    fdcan_tx_header_t hdr = { 0xf, 2 };
    uint8_t buf[8] = { 0xd, 0xe, 0xa, 0xd, 0xb, 0xe, 0xe, 0xf };

    for (;;)
    {
        probe::set();
        if (fdcan::write(hdr, buf))
            break;
        probe::clear();
        sys_tick::delay_ms(1);
    }

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(50);
    }

    fdcan::test_mode(true);
    printf<serial>("rx = %x\n", fdcan::test_rx_read());
    printf<serial>("reg = %04x\n", fdcan::reg());

    for (uint8_t i = 0;; ++i)
    {
        //probe::write(fdcan::test_rx_read());
        probe::set();
        fdcan::test_tx_write(i & 0x1);
        //fdcan::test_tx_write(i & 0x1);
        sys_tick::delay_us(10);
        probe::clear();
        sys_tick::delay_ms(1);
    }

    fdcan::test_mode(false);
}

