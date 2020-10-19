using led1 = output_t<LED>;
using led2 = output_t<LED2>;
using led3 = output_t<LED3>;
using led4 = output_t<LED4>;

template<pin_t> constexpr uint8_t count = 1;
template<> constexpr uint8_t count<NO_PIN> = 0;

constexpr uint8_t N
    = count<LED>
    + count<LED2>
    + count<LED3>
    + count<LED4>
    ;

static uint8_t next(uint8_t i) { return ++i == N ? 0 : i; }

static void write_led(uint8_t i, bool b)
{
    switch (i)
    {
        case 0: led1::write(b); break;
        case 1: led2::write(b); break;
        case 2: led3::write(b); break;
        case 3: led4::write(b); break;
    }
}

int main()
{
    led1::setup();
    led2::setup();
    led3::setup();
    led4::setup();

    for (uint8_t i = N - 1;; i = next(i))
    {
        write_led(i, false);
        write_led(next(i), true);
        sys_tick::delay_ms(200);
    }
}

