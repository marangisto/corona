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

    printf<serial>("AT25xB Demo\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    eeprom::setup<fpclk_8>();
    sys_tick::delay_ms(25);

    //eeprom::write_enable();
    eeprom::write(10, 0xd);
    eeprom::write(11, 0xe);
    eeprom::write(12, 0xa);
    eeprom::write(13, 0xd);
    eeprom::write(14, 0xb);
    eeprom::write(15, 0xe);
    eeprom::write(16, 0xe);
    eeprom::write(17, 0xf);

    printf<serial>("sr = 0x%02x\n", eeprom::status());
    eeprom::write_enable();
    printf<serial>("sr = 0x%02x\n", eeprom::status());
    eeprom::write_disable();
    printf<serial>("sr = 0x%02x\n", eeprom::status());
/*
    for (uint16_t i = 0;; ++i)
    {
        uint8_t x = eeprom::read(i);
        printf<serial>("mem[0x%04x] = 0x%02x\n", i, x);
        sys_tick::delay_ms(1000);
    }
    */

    for (;;)
    {
        static char buf[512];

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;
        uint16_t addr = atoi(buf);
        printf<serial>("got = 0x%0x\n", addr);
        if (eeprom::read(addr, buf, 256))
            printf<serial>("read failure!\n");
        else
            hexdump(buf, 256, addr);
    }
}

