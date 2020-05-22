#include <stdlib.h>
#include <cstring>
#include <usart.h>
#include <redirect.h>

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
    stdio_t::bind<serial>();
    interrupt::set<interrupt::USART2>();
    interrupt::enable();

    printf("Hello STM32G070!\n");

    for (;;)
    {
        static char buf[256];

        printf("> ");
        fflush(stdout);
        if (fgets(buf, sizeof(buf), stdin))
        {
            buf[strcspn(buf, "\r\n")] = 0;
            printf("got = '%s'\n", buf);
        }
    }
}

