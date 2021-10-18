#include "../board.h"
#include <timer.h>
#include <cstring>
#include <textio.h>
#include <usart.h>
#include <device/fdcan.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using probe = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;

template<int INST, pin_t TX, pin_t RX>
class fd_can_t
{
public:
    static void setup()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        alternate_t<TX, traits::TX>::template setup<push_pull, high_speed>();
        alternate_t<RX, traits::RX>::template setup<floating>();

        fdcan_traits<0>::template enable<rcc_t>();   // enable clock


        FDCAN.FDCAN_CCCR = _::FDCAN_CCCR_INIT;      // start initialization

        /*
        FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_FDOE;     // enable FD operation
                         |  _::FDCAN_CCCR_FDOE;     // enable FD operation
                         ;
                         */
    }

    static void test_mode(bool enable)
    {
        typename fdcan::T& FDCAN = fdcan::V;

        init_begin();

        if (enable)
        {
            FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_CCE;      // configuration change enable
            FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_TEST;     // enable test mode
            FDCAN.FDCAN_TEST |= _::FDCAN_TEST_LBCK;     // loop back mode
        }
        else
            FDCAN.FDCAN_CCCR &= ~_::FDCAN_CCCR_TEST;    // disable test mode

        init_end();
    }

    static bool test_rx_read()
    {
        return fdcan::V.FDCAN_TEST & _::FDCAN_TEST_RX;
    }

    static void test_tx_write(bool x)
    {
        if (x)
            fdcan::V.FDCAN_TEST &= ~_::FDCAN_TEST_TX::W(0x2);
        else
            fdcan::V.FDCAN_TEST |= _::FDCAN_TEST_TX::W(0x3);
    }

    static uint32_t reg()
    {
        return fdcan::V.FDCAN_NBTP;
    }

private:
    static void init_begin()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_INIT;             // start initialization
        while (!(FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT));   // wait for acceptance
    }

    static void init_end()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        FDCAN.FDCAN_CCCR &= ~_::FDCAN_CCCR_INIT;            // finish initialization
        while (FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT);      // wait for acceptance
    }

    using traits = fdcan_traits<INST>;
    using fdcan = typename traits::fdcan;
    using _ = typename fdcan::T;
};

using fdcan = fd_can_t<1, PB9, PB8>;

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

    fdcan::setup();

    fdcan::test_mode(true);
    printf<serial>("rx = %x\n", fdcan::test_rx_read());
    printf<serial>("reg = %04x\n", fdcan::reg());

    for (uint8_t i = 0;; ++i)
    {
        probe::write(fdcan::test_rx_read());
        fdcan::test_tx_write(i & 0x1);
        sys_tick::delay_us(20);
    }

    fdcan::test_mode(false);
}

