#pragma once

// requires <textio.h> included before

template<typename WRITER, unsigned BPL = 16>
static void hexdump(const char *buf, uint16_t len, uint16_t base = 0)
{
    static char line[8 + 4 * BPL];

    for (unsigned i = 0; i < len; i += BPL)
    {
        char *lp = line;

        lp += sprintf(lp, "%04x ", base + i);

        for (unsigned j = 0; j < BPL; ++j)
            if (i + j < len)
                lp += sprintf(lp, "%02x ", buf[i+j]);
            else
                lp += sprintf(lp, "   ");

        for (unsigned j = 0; j < BPL; ++j)
            if (i + j < len)
                lp += sprintf(lp, "%c", isprint(buf[i+j]) ? buf[i+j] : '.');

        printf<WRITER>("%s\n", line);
    }
}

