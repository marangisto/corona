#pragma once

template<int INST>
struct dac_driver
{
    using traits = dac_traits<INST>;
    using dac = typename traits::dac;
    using _ = typename dac::T;

    static constexpr uint32_t HF_MODE = 0;     // not such flag on G0
    static constexpr uint8_t DMAREQ_ID = 8;    // FIXME: better source!
};

