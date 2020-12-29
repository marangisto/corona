#include "../board.h"
#include <cstring>
#include <stdlib.h>
#include <ctype.h>
#include <textio.h>
#include <usart.h>
#include <hardware/mcp48fvb.h>
extern "C"
{
#include "cmd.h"
}

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using dac = mcp48fvb_t<spi_t<1, PA5, PA7, PA6>, PA4>;

template<> void handler<SERIAL_ISR>()
{
    led::toggle();
    serial::isr();
}

extern "C" int yyparse (void);

extern "C" void yyerror(const char *s)
{
    printf<serial>("%s\n", s);
}

extern "C" int yylex(void)
{
    char c;

    while (!serial::read(c) || isblank(c)); // wait for input

    if (isdigit(c))
    {
        double x = c - '0', k = 0.1;
        bool dp = false;

        for (;;)
        {
            while (!serial::peek(c));       // wait for some char

            if (isdigit(c))
            {
                if (dp)
                {
                    x = x + k * (c - '0');
                    k *= 0.1;
                }
                else
                    x = x * 10. + c - '0';
                serial::read(c);            // absorb char
            }
            else if (c == '.' && !dp)
            {
                dp = true;
                serial::read(c);            // absorb char
            }
            else
                break;
        }

        yylval.NUM = x;
        return NUM;
    }
    else if (isalpha(c))
    {
        char buf[8], *p = buf;

        *p++ = c;

        for (;;)
        {
            while (!serial::peek(c));       // wait for some char

            if ((isalnum(c) || c == '_') && p + 1 < buf + sizeof(buf))
            {
                *p++ = c;
                serial::read(c);            // absorb char
            }
            else
                break;
        }

        *p = 0;

        if (!strcmp(buf, "r") || !strcmp(buf, "read")) return READ;
        else if (!strcmp(buf, "w") || !strcmp(buf, "write")) return WRITE;
        else if (!strcmp(buf, "a") || !strcmp(buf, "addr")) return ADDR;
        else if (!strcmp(buf, "d") || !strcmp(buf, "dump")) return DUMP;
        else return IDENT;
    }
    else
        return c;
}

extern "C" void run_command(int cmd, double x)
{
    static uint16_t addr = 0;
    uint16_t y = 0;

    switch (cmd)
    {
    case NUM:
        printf<serial>("%g\n", x);
        break;
    case READ:
        y = dac::read(addr);
        printf<serial>("0x%04x %d\n", addr, y);
        break;
    case WRITE:
        if (static_cast<unsigned>(x) != x)
            printf<serial>("expected integer value!\n");
        else
        {
            dac::write(addr, x);
            run_command(READ, 0);
        }
        break;
    case ADDR:
        if (static_cast<unsigned>(x) != x)
            printf<serial>("expected integer value!\n");
        else
        {
            addr = x;
            run_command(READ, 0);
        }
        break;
    case DUMP:
        for (uint16_t i = 0; i < 4; ++i)
        {
            uint16_t a = i << 3;

            printf<serial>("0x%04x", a);
            for (uint16_t j = 0; j < 8; ++j)
                printf<serial>("%5d", dac::read(a + j));
            printf<serial>("\n");
        }
        break;
    default:
        printf<serial>("unknown command: %d\n", cmd);
    }
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("MCP48FVB08 Demo\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    dac::setup<fpclk_256>();

    for (;;)
        yyparse();
}

