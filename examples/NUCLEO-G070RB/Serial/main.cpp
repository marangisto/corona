#include <cstring>
#include <usart.h>
#include <textio.h>

using serial = usart_t<2, PA2, PA3>;
using ld4 = output_t<PA5>;

template<> void handler<interrupt::USART2>()
{
    ld4::toggle();
    serial::isr();
}

int main()
{
    ld4::setup();
    serial::setup<230400>();
    interrupt::set<interrupt::USART2>();
    interrupt::enable();

    printf<serial>("Hello STM32G070!\n");

    for (;;)
    {
        static char buf[128];

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;
        printf<serial>("got = '%s'\n", buf);
    }
}

