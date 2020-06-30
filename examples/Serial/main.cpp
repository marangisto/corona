#include <cstring>
#include <textio.h>
#include <board.h>

using serial = board::serial;
using led = board::led1;

template<> void handler<board::serial_interrupt>()
{
    led::toggle();
    serial::isr();
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<board::serial_interrupt>();
    interrupt::enable();

    printf<serial>("Hello World!\n");

    for (;;)
    {
        static char buf[128];

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;
        printf<serial>("got = '%s'\n", buf);
    }
}

