#pragma once

#include <device/syscfg.h>
#include <device/vrefbuf.h>

enum vrs_t
    { vrs_2048 = 0x0
    , vrs_2500 = 0x1
    , vrs_2900 = 0x2
    };

struct vrefbuf
{
    template<vrs_t vrs>
    static void setup()
    {
        vrefbuf_t::T& VREFBUF = vrefbuf_t::V;
        using _ = vrefbuf_t::T;

        syscfg_traits<0>::template enable<rcc_t>(); // enable vrefbuf clock

        VREFBUF.CSR = _::CSR_RESET_VALUE;       // reset control register
        VREFBUF.CSR &= ~_::CSR_HIZ;             // clear high-impedance mode
        VREFBUF.CSR |= _::CSR_VRS::W(vrs)       // set voltage reference scale
                    |  _::CSR_ENVR              // enable voltage ref buffer
                    ;

        while (!(VREFBUF.CSR & _::CSR_VRR));    // wait for voltage ref ready
    }
};

