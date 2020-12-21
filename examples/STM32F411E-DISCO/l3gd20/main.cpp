////
// 
//      Use L3GD20 via SPI peripheral
//
////

#include "../board.h"
#include <cstring>
#include <textio.h>
#include <board.h>
#include <timer.h>
#include <spi.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led1 = output_t<LED>;
using led2 = output_t<LED2>;
using led3 = output_t<LED3>;
using led4 = output_t<LED4>;
using probe = output_t<PROBE>;
using gyro_spi = spi_t<1, PA5, PA7, PA6>;
using gyro_cs = output_t<PE3>;
using gyro_drdy = input_t<PE1>;
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
        write(ctrl_reg1, 0x4f);         // normal | xen | yen | zen | 190Hz
        write(ctrl_reg3, 0x08);         // interrupt on data ready
        write(ctrl_reg4, 0x10);         // 500 dps full-scale
    }

    static uint8_t status()
    {
        return read(status_reg);
    }

    static int16_t get_x()
    {
        return read(out_x_l) | (read(out_x_h) << 8);
    }

    static int16_t get_y()
    {
        return read(out_y_l) | (read(out_y_h) << 8);
    }

    static int16_t get_z()
    {
        return read(out_z_l) | (read(out_z_h) << 8);
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

static volatile int16_t x, y, z;
static volatile bool fire = false;

template<uint8_t N>
int16_t mavg(const int16_t *xs)
{
    int32_t s = 0;

    for (uint8_t i = 0; i < N; ++i)
        s += *xs++;

    return s / N;
}

template<> void handler<interrupt::EXTI1>()
{
    if (gyro_drdy::interrupt_pending())
        gyro_drdy::clear_interrupt();

    uint8_t sts = gyro::status();

    static const uint8_t N = 4;
    static int16_t xs[N], ys[N], zs[N];
    static uint8_t xi = 0, yi = 0, zi = 0;

    if (sts & 0x1)
    {
        xs[xi++] = gyro::get_x();
        if (xi == N)
            xi = 0;
        x = mavg<N>(xs);
    }

    if (sts & 0x2)
    {
        ys[yi++] = gyro::get_y();
        if (yi == N)
            yi = 0;
        y = mavg<N>(ys);
    }

    if (sts & 0x4)
    {
        zs[zi++] = gyro::get_z();
        if (zi == N)
            zi = 0;
        z = mavg<N>(zs);
    }

    fire = true;
    probe::toggle();
}

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

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

int main()
{
    gyro::setup();
    led1::setup();
    led2::setup();
    led3::setup();
    led4::setup();
    probe::setup();

    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    // f_tim = f_sysclock / ((psc + 1) (arr + 1))
    tim::setup(sys_clock::freq() / 9999, 999);
    tim::enable_update_interrupt();
    interrupt::set<interrupt::TIM3>();
    interrupt::enable();

    gyro_drdy::setup<BTN_TYPE>();
    gyro_drdy::enable_interrupt<rising_edge>();
    interrupt::set<interrupt::EXTI1>();
    printf<serial>("L3GD20 Demo\n");

    show_regs<serial, gyro>();

    for (;;)
    {
        if (fire)
        {
            printf<serial>("-32000, 32000, %5d %5d %5d\n", x, y, z);
            fire = false;
        }
    }
}

