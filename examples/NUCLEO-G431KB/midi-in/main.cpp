#include "../board.h"
#include <cstring>
#include <textio.h>
#include <usart.h>

static constexpr int MIDI_USART = 1;
static constexpr interrupt_t MIDI_ISR = interrupt::USART1;
static constexpr pin_t MIDI_RX = PA10;

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using midi = usart_t<MIDI_USART, NO_PIN, MIDI_RX>;
using led = output_t<LED>;

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

template<> void handler<MIDI_ISR>()
{
    led::toggle();
    midi::isr();
}

enum midi_message_t
    { no_message
    , bad_message
    , note_off          = 0x80
    , note_on           = 0x90
    , after_touch       = 0xa0
    , control_change    = 0xb0
    , program_change    = 0xc0
    , channel_pressure  = 0xd0
    , pitch_wheel       = 0xe0
    , system_common     = 0xf0
    , timing_clock      = 0xf8
    };

static midi_message_t midi_input(char& ch, char& p0, char& p1)
{
    char c;

    if (!midi::read(c) || !(c & 0x80))
        return no_message;

    midi_message_t m = static_cast<midi_message_t>(c & 0xf0);

    switch (m)
    {
    case note_off:;
    case note_on:;
    case after_touch:;
    case control_change:;
    case pitch_wheel:
        ch = c & 0x0f;
        while (!midi::read(p0));
        while (!midi::read(p1));
        return m;
    case program_change:;
    case channel_pressure:
        ch = c & 0x0f;
        while (!midi::read(p0));
        return m;
    case system_common:
        switch (c)
        {
        case timing_clock:
            return timing_clock;
        default:
            return system_common;   // FIXME: catch-all
        }
        break;
    default:
        p0 = c;
        return bad_message;
    }
}

template<typename T>
static void show_midi(midi_message_t m, char ch, char p0, char p1)
{
    switch (m)
    {
    case note_off:
        printf<T>("note-off[%d] %d %d\n", ch, p0, p1);
        break;
    case note_on:
        printf<T>("note-on[%d] %d %d\n", ch, p0, p1);
        break;
    case after_touch:
        printf<T>("after-touch[%d] %d %d\n", ch, p0, p1);
        break;
    case control_change:
        printf<T>("control-change[%d] %d %d\n", ch, p0, p1);
        break;
    case pitch_wheel:
        printf<T>("pitch-wheel[%d] %d %d\n", ch, p0, p1);
        break;
    case program_change:
        printf<T>("program-change[%d] %d\n", ch, p0);
        break;
    case channel_pressure:
        printf<T>("channel_pressure[%d] %d\n", ch, p0);
        break;
    case timing_clock:
        // printf<T>("timing-clock\n");
        break;
    case bad_message:
        printf<T>("bad-message: 0x%x\n", p0);
        break;
    default:
        ;
    }
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    midi::setup<31250>();
    interrupt::set<MIDI_ISR>();
    interrupt::enable();

    printf<serial>("MIDI-in Demo!\n");

    for (;;)
    {
        char ch = 0, p0, p1;
        midi_message_t m = midi_input(ch, p0, p1);

        if (m != no_message)
            show_midi<serial>(m, ch, p0, p1);
        if (m == note_on)
            led::toggle();
    }
}

