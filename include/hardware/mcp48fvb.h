#pragma once

#include <spi.h>

template<typename SPI, pin_t CS_PIN>
class mcp48fvb_t
{
public:
    template<spi_clock_divider_t PRESCALE = fpclk_256>
    static void setup()
    {
        CS::setup();
        CS::set();
        SPI::template setup<mode_3, msb_first, PRESCALE, high_speed>();
    }

    static uint16_t read(uint8_t addr)
    {
        chip_select cs;

        SPI::w8((addr << 3) | 0x6); // READ command

        uint8_t h = SPI::r8();
        uint8_t l = SPI::r8();

        return l | (h << 8);
    }

    static void write(uint8_t addr, uint16_t x)
    {
        chip_select cs;

        SPI::w8(addr << 3);         // WRITE command

        SPI::w8(x >> 8);
        SPI::w8(x & 0xff);
    }

private:
    using CS = output_t<CS_PIN>;

    struct chip_select
    {
        chip_select()
        {
            CS::clear();
            sys_tick::delay_us(1);
        }

        ~chip_select()
        {
            sys_tick::delay_us(1);
            CS::set();
            sys_tick::delay_us(1);
        }
    };
};

