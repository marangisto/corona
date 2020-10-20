#include <cstring>
#include <textio.h>
#include <usart.h>
#include <at25.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;

using eeprom = at25_t<256, spi_t<1, PA5, PA7, PA6>, PA4>;
//using pin = output_t<PA7>;  // MOSI
//using pin = output_t<PA6>;  // MISO
//using pin = output_t<PA5>;  // SCK
using pin = output_t<PA4>;  // CS

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

    printf<serial>("AT25xB Demo\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    eeprom::setup();
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

    for (uint16_t i = 0;; ++i)
    {
        uint8_t x = eeprom::read(i);
        printf<serial>("mem[0x%04x] = 0x%02x\n", i, x);
        sys_tick::delay_ms(1000);
    }

    for (;;)
    {
        static char buf[128];

        printf<serial>("> ");
        getline<serial>(buf, sizeof(buf));
        buf[strcspn(buf, "\r\n")] = 0;
        printf<serial>("got = '%s'\n", buf);
    }
}

