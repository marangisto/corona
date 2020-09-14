#pragma once

#include <spi.h>

template<typename SPI, pin_t CS_PIN>
struct at25_t
{
    using CS = output_t<CS_PIN>;

    static void setup()
    {
        CS::setup();
        SPI::template setup<mode_0, msb_first, fpclk_64, low_speed>();
        CS::set();
    }

    static uint8_t read()
    {
        CS::clear();
        SPI::write8(0x05);
        SPI::read();
        SPI::write8(0x00);
        uint8_t x = SPI::read();
        SPI::wait_idle();
        CS::set();
        return x;
    }
};

