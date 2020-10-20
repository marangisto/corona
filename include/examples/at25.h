#include <cstring>
#include <textio.h>
#include <stdlib.h>
#include <ctype.h>
#include <usart.h>
#include <at25.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;

using eeprom = at25_t<256, spi_t<1, PA5, PA7, PA6>, PA4>;

template<> void handler<SERIAL_ISR>()
{
    led::toggle();
    serial::isr();
}

static void hexdump(const char *buf, uint16_t len, uint16_t base = 0)
{
    static constexpr unsigned bpl = 16; // bytes per line
    static char line[8 + 4 * bpl];

    for (unsigned i = 0; i < len; i += bpl)
    {
        char *lp = line;

        lp += sprintf(lp, "%04x ", base + i);
        for (unsigned j = 0; j < bpl; ++j)
            if (i + j < len)
                lp += sprintf(lp, "%02x ", buf[i+j]);
            else
                lp += sprintf(lp, "   ");
        for (unsigned j = 0; j < bpl; ++j)
            if (i + j < len)
                lp += sprintf(lp, "%c", isprint(buf[i+j]) ? buf[i+j] : '.');
        printf<serial>("%s\n", line);
    }
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("AT25 Demo\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());
    printf<serial>("use 'h' for help\n");

    eeprom::setup<fpclk_8>();

    for (;;)
    {
        static char buf[512];
        static uint16_t addr = 0;

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;

        switch (buf[0])
        {
        case 'h':
            printf<serial>("commands\n");
            printf<serial>("    annnn   - set address to nnn (decimal)\n");
            printf<serial>("    r       - read from current address\n");
            printf<serial>("    wxyz    - write ascii at current address\n");
            break;
        case 'a':
            addr = atoi(buf + 1);
            printf<serial>("addr = 0x%04x\n", addr);
            break;
        case 'r':
            if (eeprom::read(addr, buf, 256))
                printf<serial>("read failure!\n");
            else
            {
                printf<serial>("\n");
                hexdump(buf, 256, addr);
            }
            break;
        case 'w':
            if (strlen(buf) <= 1)
            {
                printf<serial>("nothing to write!\n");
                break;
            }
            if (eeprom::write_page(addr, buf + 1, strlen(buf) - 1))
                printf<serial>("write failure!\n");
            else
                printf<serial>("wrote %d bytes\n", strlen(buf) - 1);
            break;
        case '\0':
            printf<serial>("\n");
            break;
        default:
            printf<serial>("bad command!\n");
        }
    }
}

