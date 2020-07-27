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

template<typename SPI, pin_t CS_PIN>
struct l3gd20_t
{
    using CS = output_t<CS_PIN>;

    enum reg_t
        { who_am_i      = 0x0f
        , ctrl_reg1     = 0x20
        , ctrl_reg2     = 0x21
        , ctrl_reg3     = 0x22
        , ctrl_reg4     = 0x23
        , ctrl_reg5     = 0x24
        , reference     = 0x25
        , out_temp      = 0x26
        , status_reg    = 0x27
        , out_x_l       = 0x28
        , out_x_h       = 0x29
        , out_y_l       = 0x2a
        , out_y_h       = 0x2b
        , out_z_l       = 0x2c
        , out_z_h       = 0x2d
        , fifo_ctrl_reg = 0x2e
        , fifo_src_reg  = 0x2f
        , int1_cfg      = 0x30
        , int1_src      = 0x31
        , int1_tsh_xh   = 0x32
        , int1_tsh_xl   = 0x33
        , int1_tsh_yh   = 0x34
        , int1_tsh_yl   = 0x35
        , int1_tsh_zh   = 0x36
        , int1_tsh_zl   = 0x37
        , int1_duration = 0x38
        };

    static void setup()
    {
        CS::setup();
        SPI::template setup<mode_3, msb_first, fpclk_8, low_speed>();
        while (read(who_am_i) == 0);    // wait for startup
        write(ctrl_reg1, 0x0f);         // normal mode | xen | yen | zen
        write(ctrl_reg4, 0x30);         // 2000 dps full-scale
    }

    static uint8_t get(int16_t& x, int16_t& y, int16_t& z)
    {
        uint8_t sts = read(status_reg);

        if (sts & 0x1)
        {
            x = read(out_x_l);
            x |= read(out_x_h) << 8;
        }

        if (sts & 0x2)
        {
            y = read(out_y_l);
            y |= read(out_y_h) << 8;
        }

        if (sts & 0x4)
        {
            z = read(out_z_l);
            z |= read(out_z_h) << 8;
        }

        return sts;
    }

    static void write(reg_t reg, uint8_t x)
    {
        CS::clear();                // chip select
        SPI::write8(reg);           // write register
        SPI::read();                // discard RX buffer
        SPI::write8(x);             // clock in data
        SPI::read();                // discard RX buffer
        SPI::wait_idle();           // wait to complete
        CS::set();                  // chip de-select
    }

    static uint8_t read(reg_t reg)
    {
        CS::clear();                // chip select
        SPI::write8(0x80 | reg);    // read register
        SPI::read();                // discard RX buffer
        SPI::write8(0x00);          // clock in data
        uint8_t x = SPI::read();    // read response
        SPI::wait_idle();           // wait to complete
        CS::set();                  // chip de-select
        return x;
    }
};

template<typename SERIAL, typename GYRO>
static void show_regs()
{
    printf<SERIAL>("who_am_i  = %x\n", GYRO::read(GYRO::who_am_i));
    printf<SERIAL>("ctrl_reg1 = %x\n", GYRO::read(GYRO::ctrl_reg1));
    printf<SERIAL>("ctrl_reg2 = %x\n", GYRO::read(GYRO::ctrl_reg2));
    printf<SERIAL>("ctrl_reg3 = %x\n", GYRO::read(GYRO::ctrl_reg3));
    printf<SERIAL>("ctrl_reg4 = %x\n", GYRO::read(GYRO::ctrl_reg4));
    printf<SERIAL>("ctrl_reg5 = %x\n", GYRO::read(GYRO::ctrl_reg5));
    printf<SERIAL>("reference = %x\n", GYRO::read(GYRO::reference));
    printf<SERIAL>("out_temp = %x\n", GYRO::read(GYRO::out_temp));
    printf<SERIAL>("status_reg = %x\n", GYRO::read(GYRO::status_reg));
    printf<SERIAL>("out_x_l = %x\n", GYRO::read(GYRO::out_x_l));
    printf<SERIAL>("out_x_h = %x\n", GYRO::read(GYRO::out_x_h));
    printf<SERIAL>("out_y_l = %x\n", GYRO::read(GYRO::out_y_l));
    printf<SERIAL>("out_y_h = %x\n", GYRO::read(GYRO::out_y_h));
    printf<SERIAL>("out_z_l = %x\n", GYRO::read(GYRO::out_z_l));
    printf<SERIAL>("out_z_h = %x\n", GYRO::read(GYRO::out_z_h));
    printf<SERIAL>("fifo_ctrl_reg = %x\n", GYRO::read(GYRO::fifo_ctrl_reg));
    printf<SERIAL>("fifo_src_reg = %x\n", GYRO::read(GYRO::fifo_src_reg));
    printf<SERIAL>("int1_cfg = %x\n", GYRO::read(GYRO::int1_cfg));
    printf<SERIAL>("int1_src = %x\n", GYRO::read(GYRO::int1_src));
    printf<SERIAL>("int1_tsh_xh = %x\n", GYRO::read(GYRO::int1_tsh_xh));
    printf<SERIAL>("int1_tsh_xl = %x\n", GYRO::read(GYRO::int1_tsh_xl));
    printf<SERIAL>("int1_tsh_yh = %x\n", GYRO::read(GYRO::int1_tsh_yh));
    printf<SERIAL>("int1_tsh_yl = %x\n", GYRO::read(GYRO::int1_tsh_yl));
    printf<SERIAL>("int1_tsh_zh = %x\n", GYRO::read(GYRO::int1_tsh_zh));
    printf<SERIAL>("int1_tsh_zl = %x\n", GYRO::read(GYRO::int1_tsh_zl));
    printf<SERIAL>("int1_duration = %x\n", GYRO::read(GYRO::int1_duration));
};

using gyro = l3gd20_t<spi_t<1, PA5, PA7, PA6>, PE3>;

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
    gyro::setup();
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

    show_regs<serial, gyro>();

    int16_t x = 0, y = 0, z = 0;

    for (;;)
    {
        uint8_t sts = gyro::get(x, y, z);

        if (sts)
            printf<serial>("%x %5d %5d %5d\n", sts, x, y, z);
        //sys_tick::delay_ms(10);
    }
}

