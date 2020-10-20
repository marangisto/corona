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

    static constexpr unsigned EOM = KBITS << 7;     // max address
    static constexpr unsigned PGSIZ = 64;           // page size
    static constexpr unsigned MASK = ~(PGSIZ-1);    // page address bits

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

    template<spi_clock_divider_t PRESCALE = fpclk_256>
    static void setup()
    {
        CS::setup();
        CS::set();
        SPI::template setup<mode_0, msb_first, PRESCALE, high_speed>();
    }

    static uint8_t status()
    {
        chip_select<CS> cs;

        return SPI::w8r8(RDSR);
    }

    static int read(uint16_t addr, char *buf, uint16_t len)
    {
        if (static_cast<unsigned>(addr) + len > EOM)
            return -1;              // out of range access

        chip_select<CS> cs;

        SPI::w8(READ);
        SPI::w8(addr >> 8);
        SPI::w8(addr & 0xff);

        while (len-- != 0)
            *buf++ = SPI::r8();

        return 0;                   // success
    }

    static int write(uint16_t addr, char *buf, uint16_t len)
    {
        if (static_cast<unsigned>(addr) + len > EOM)
            return -1;              // out of range access

        while (len > 0)
        {
            uint16_t n = len > PGSIZ ? PGSIZ : len;
            int sts = write_page(addr, buf, n);

            if (sts)
                return sts;

            addr += n;
            buf += n;
            len -= n;
        }

        return 0;                   // success
    }

    static int write_page(uint16_t addr, char *buf, uint16_t len)
    {
        if ((addr & MASK) != ((addr + len - 1) & MASK))
            return -2;              // can't span page boundary

        {
            chip_select<CS> cs;

            SPI::w8(WREN);
        }

        // N.B. scope brackets end of write enable!

        {
            chip_select<CS> cs;

            SPI::w8(WRITE);
            SPI::w8(addr >> 8);
            SPI::w8(addr & 0xff);

            while (len-- != 0)
                SPI::w8(*buf++);
        }

        // N.B. scope brackets end of write!

        {
            chip_select<CS> cs;

            while (status() & NRDY)
                ; // wait for write completion
        }

        return 0;                   // success
    }
};

