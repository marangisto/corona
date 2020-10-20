#pragma once

#include <spi.h>

template<typename CS>
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

template<unsigned KBITS, typename SPI, pin_t CS_PIN>
struct at25_t
{
    using CS = output_t<CS_PIN>;

    enum instruction_t
        { WREN  = 0x06
        , WRDI  = 0x04
        , RDSR  = 0x05
        , WRSR  = 0x01
        , READ  = 0x03
        , WRITE = 0x02
        };

    enum status_t
        { NRDY  = 0x01
        , WEN   = 0x02
        , BP0   = 0x04
        , BP1   = 0x08
        , WPEN  = 0x80
        };

    static void setup()
    {
        CS::setup();
        SPI::template setup<mode_0, msb_first, fpclk_256, high_speed>();
        CS::set();
    }

    static uint8_t status()
    {
        chip_select<CS> cs;

        return SPI::w8r8(RDSR);
    }

    static void write_enable()
    {
        chip_select<CS> cs;

        SPI::w8(WREN);
    }

    static void write_disable()
    {
        chip_select<CS> cs;
 
        SPI::w8(WRDI);
    }

    static void write(uint16_t addr, uint8_t x)
    {
        {
            chip_select<CS> cs;

            SPI::w8(WRITE);
            SPI::w8(addr >> 8);
            SPI::w8(addr & 0xff);
            SPI::w8(x);
        }

        // N.B. scope brackets end of write!

        {
            chip_select<CS> cs;

            while (status() & NRDY)
                ; // wait for write completion
        }
    }

    static uint8_t read(uint16_t addr)
    {
        chip_select<CS> cs;

        SPI::w8(READ);
        SPI::w8(addr >> 8);
        SPI::w8(addr & 0xff);
        return SPI::r8();
    }
};

