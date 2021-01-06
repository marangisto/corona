#include "../board.h"
#include <textio.h>

using led = output_t<LED>;
using probe = output_t<PROBE>;
using clk = output_t<PB4>;
using dio = output_t<PB6>;

static inline void bit_delay()
{
    sys_tick::delay_us(80);
}

class seven_segment_t
{
public:
    static uint8_t encode(char c)
    {
        return s_glyphs[(c > 'Z' ? c - 0x20 : c) - ' '];
    }

private:
    static const uint8_t s_glyphs[];
};

const uint8_t seven_segment_t::s_glyphs[] =
    { 0b0000000 // space
    , 0b0000000 // !
    , 0b0000000 // "
    , 0b0000000 // #
    , 0b0000000 // $
    , 0b0000000 // %
    , 0b0000000 // &
    , 0b0000000 // '
    , 0b0000000 // (
    , 0b0000000 // )
    , 0b0000000 // *
    , 0b0000000 // +
    , 0b0000000 // ,
    , 0b1000000 // -
    , 0b0000000 // .
    , 0b0000000 // /
    , 0b0111111 // 0
    , 0b0000110 // 1
    , 0b1011011 // 2
    , 0b1001111 // 3
    , 0b1100110 // 4
    , 0b1101101 // 5
    , 0b1111101 // 6
    , 0b0000111 // 7
    , 0b1111111 // 8
    , 0b1101111 // 9
    , 0b0000000 // :
    , 0b0000000 // ;
    , 0b0000000 // <
    , 0b0000000 // =
    , 0b0000000 // >
    , 0b0000000 // ?
    , 0b0000000 // @
    , 0b1110111 // A
    , 0b1111100 // B
    , 0b1011000 // C
    , 0b1011110 // D
    , 0b1111001 // E
    , 0b1110001 // F
    , 0b0111101 // G
    , 0b1110100 // H
    , 0b0000100 // I
    , 0b0011110 // J
    , 0b1110101 // K
    , 0b0111000 // L
    , 0b0110111 // M
    , 0b1010100 // N
    , 0b1011100 // O
    , 0b1110011 // P
    , 0b1100111 // Q
    , 0b1010000 // R
    , 0b1101100 // S
    , 0b1111000 // T
    , 0b0011100 // U
    , 0b0111110 // V
    , 0b1111110 // W
    , 0b1110110 // X
    , 0b1101110 // Y
    , 0b0011011 // Z
    };

template<typename OUTPUT>
void write(bool x)
{
    OUTPUT::write(!x);      // inverted!
}

static void write_byte(uint8_t x)
{
    for (uint8_t i = 0; i < 8; ++i)
    {
        write<clk>(0);
        bit_delay();
        write<dio>(x & (1 << i));
        bit_delay();
        write<clk>(1);
        bit_delay();
    }

    write<clk>(0);
    write<dio>(1);
    bit_delay();

    write<clk>(1);
    bit_delay();
    write<dio>(0);  // ack unconditionally
    bit_delay();

    write<clk>(0);
    bit_delay();
}

static void start()
{
    write<dio>(0);
    bit_delay();
}

static void stop()
{
    write<dio>(0);
    bit_delay();
    write<clk>(1);
    bit_delay();
    write<dio>(1);
    bit_delay();
}

static void set_segs(const uint8_t *s, uint8_t n, uint8_t p)
{
    start();
    write_byte(0x40);
    stop();

    start();
    write_byte(0xc0 | (p & 0x07));
    for (uint8_t i = 0; i < n; ++i)
        write_byte(*s++);
    stop();

    start();
    write_byte(0x80 | 0xa); // 8 + 0-7
    stop();
}

static void write_string(const char *s)
{
    static constexpr uint8_t pos[] = { 2, 1, 0, 5, 4, 3 };
    static uint8_t buf[sizeof(pos)];
    uint8_t i = 0;

    while (i < sizeof(pos) && *s)
        buf[pos[i++]] = seven_segment_t::encode(*s++);
    while (i < sizeof(pos))
        buf[pos[i++]] = seven_segment_t::encode(' ');
    set_segs(buf, sizeof(pos), 0);
}

int main()
{
    led::setup();
    probe::setup();

    clk::setup();
    dio::setup();

    for (uint16_t i = 0;; ++i)
    {
        char buf[7];

        sprintf(buf, "%6d", i);
        led::toggle();
        probe::toggle();
        write_string(buf);
    }
}

