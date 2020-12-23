#include "../board.h"
#include <cstring>
#include <stdlib.h>
#include <ctype.h>
#include <textio.h>
#include <usart.h>
#include <hardware/mcp48fvb.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;

using dac = mcp48fvb_t<spi_t<1, PA5, PA7, PA6>, PA4>;

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

    printf<serial>("MCP48FVB08 Demo\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());
    printf<serial>("use 'h' for help\n");

    dac::setup<fpclk_256>();

    for (;;)
    {
        static char buf[512];
        static uint16_t addr = 0;
        uint8_t x;

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;

        switch (buf[0])
        {
        case 'h':
            printf<serial>("commands\n");
            printf<serial>("    annnn   - set address to nnn (decimal)\n");
            printf<serial>("    r       - read from current address\n");
            printf<serial>("    wnnn    - write nnn at current address\n");
            break;
        case 'a':
            addr = atoi(buf + 1);
            printf<serial>("addr = 0x%x\n", addr);
            break;
        case 'r':
            x = dac::read(addr);
            printf<serial>("0x%x 0x%x\n", addr, x);
            break;
        case 'w':
            x = atoi(buf + 1);
            dac::write(addr, x);
            printf<serial>("wrote 0x%x at 0x%x\n", x, addr);
            break;
        case '\0':
            printf<serial>("\n");
            break;
        default:
            printf<serial>("bad command!\n");
        }
    }
}

