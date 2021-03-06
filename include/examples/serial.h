#include <cstring>
#include <textio.h>
#include <usart.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;

template<> void handler<SERIAL_ISR>()
{
    led::toggle();
    serial::isr();
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("Hello World!\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    for (;;)
    {
        static char buf[128];

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;
        printf<serial>("got = '%s'\n", buf);
    }
}

