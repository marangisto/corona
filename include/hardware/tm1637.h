#pragma once

#include <timer.h>
#include <dma.h>

extern uint8_t seven_segment_encode(uint8_t);

template<int TIM_NO, int DMA_NO, int DMA_CH, pin_t CLK, pin_t DIO>
class tm1637_t
{
public:
    template<unsigned BIT_RATE = 10000>
    static void setup()
    {
        static_assert(pin_port<DIO>() == pin_port<CLK>(), "pins must share port");

        clk::template setup<open_drain>();
        dio::template setup<open_drain>();
        clk::set();
        dio::set();

        tim::setup(0, tim::clock() / (BIT_RATE << 1) - 1);
        tim::enable_update_dma();

        dma::setup();
        dma::template mem_to_periph<DMA_CH, uint32_t, linear>(0, 0, clk::bsrr());
        static constexpr periph_t P = tim::tim::P;
        dma::template set_request_id<DMA_CH, dma_request_t<P, TIM_UP>::ID>();

        level = 0xf;
        control();
    }

    static void write_string(const char *s)
    {
        static constexpr uint8_t pos[] = { 2, 1, 0, 5, 4, 3 };
        uint8_t buf[sizeof(pos)];
        uint8_t i = 0;

        while (i < sizeof(pos) && *s)
        {
            uint8_t dp = (*(s+1) == '.') ? 0x80 : 0;
            buf[pos[i++]] = seven_segment_encode(*s++) | dp;
            if (dp)
                ++s;
        }
        while (i < sizeof(pos))
            buf[pos[i++]] = seven_segment_encode(' ');
        set_segments(buf, sizeof(pos), 0);
    }

    static void enable()
    {
        level |= 0x8;
        control();
    }

    static void disable()
    {
        level &= ~0x8;
        control();
    }

    static void brightness(uint8_t x)
    {
        level &= ~0x7;
        level |= (x & 0x7);
        control();
    }

private:
    using dma = dma_t<DMA_NO>;
    using tim = tim_t<TIM_NO>;
    using clk = output_t<CLK>;
    using dio = output_t<DIO>;

    static constexpr uint32_t CT = clk::MASK;
    static constexpr uint32_t CF = clk::MASK << 16;
    static constexpr uint32_t DT = dio::MASK;
    static constexpr uint32_t DF = dio::MASK << 16;

    static void start()
    {
        *bp++ = DF;
    }

    static void stop()
    {
        *bp++ = DF;
        *bp++ = CT;
        *bp++ = DT;
    }

    static void write_byte(uint8_t x)
    {
        for (uint8_t i = 0; i < 8; ++i)
        {
            *bp++ = CF | ((x & (1 << i)) ? DT : DF);
            *bp++ = CT;
        }

        *bp++ = CF | DT;
        *bp++ = CT;
        *bp++ = DF;         // ack unconditionally
        *bp++ = CF;
    }

    static void set_segments(const uint8_t *s, uint8_t n, uint8_t p)
    {
        while (dma::template busy<DMA_CH>());       // waite idle
        bp = buf;                                   // start afresh
        start();                                    //  1
        write_byte(0xc0 | (p & 0x07));              // 20
        for (uint8_t i = 0; i < n && i < 6; ++i)
            write_byte(*s++);                       // 20 * n
        stop();                                     //  3
        dma::template transfer<DMA_CH>(buf, bp - buf);
    }

    static void control()
    {
        while (dma::template busy<DMA_CH>());       // waite idle
        bp = buf;                                   // start afresh
        start();
        write_byte(0x80 | level);
        stop();
        dma::template transfer<DMA_CH>(buf, bp - buf);
    }

    static constexpr uint16_t buf_size = 144;       // N.B. count carefully!
    static uint32_t buf[buf_size];
    static uint32_t *bp;
    static uint8_t level;
};

template<int T, int D, int C, pin_t CLK, pin_t DIO>
uint32_t tm1637_t<T, D, C, CLK, DIO>::buf[tm1637_t<T, D, C, CLK, DIO>::buf_size];

template<int T, int D, int C, pin_t CLK, pin_t DIO>
uint32_t *tm1637_t<T, D, C, CLK, DIO>::bp;

template<int T, int D, int C, pin_t CLK, pin_t DIO>
uint8_t tm1637_t<T, D, C, CLK, DIO>::level;

