
int main()
{
    using led = output_t<LED>;

    led::setup();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    }
}

