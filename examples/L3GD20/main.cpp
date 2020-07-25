////
// 
//      Use L3GD20 via SPI peripheral
//
////

#include <cstring>
#include <textio.h>
#include <board.h>
#include <timer.h>
#include <spi.h>

using serial = board::serial;
using gyro_spi = spi_t<1, PA5, PA7, PA6>;
using gyro_cs = output_t<PE3>;
using led1 = board::led1;
using led2 = board::led2;
using led3 = board::led3;
using led4 = board::led4;
using tim = tim_t<3>;

template<> void handler<interrupt::TIM3>()
{
    static uint8_t i = 0;

    tim::clear_update_interrupt_flag();

    switch (i++ & 0x3)
    {
        case 0: led1::toggle(); break;
        case 1: led2::toggle(); break;
        case 2: led4::toggle(); break;
        case 3: led3::toggle(); break;
    }
}

int main()
{
    gyro_spi::setup<mode_3, msb_first, fpclk_256, low_speed>();
    gyro_cs::setup();
    led1::setup();
    led2::setup();
    led3::setup();
    led4::setup();

    serial::setup<230400>();
    interrupt::set<board::serial_interrupt>();
    interrupt::enable();

    // f_tim = f_sysclock / ((psc + 1) (arr + 1))
    tim::setup(sys_clock::freq() / 9999, 999);
    tim::enable_update_interrupt();
    interrupt::set<interrupt::TIM3>();
    interrupt::enable();

    printf<serial>("L3GD20 Demo\n");

    for (;;)
    {
        gyro_cs::clear();
        gyro_spi::write8(0x8f);
        gyro_spi::write8(0x00);
        gyro_spi::wait_idle();
        gyro_cs::set();
        sys_tick::delay_ms(100);
    }
}

