#pragma once

template<int INST>
struct dac_driver
{
    using traits = dac_traits<INST>;
    using dac = typename traits::dac;
    using _ = typename dac::T;

    static constexpr uint32_t HF_MODE = _::MCR_HFSEL::W(0x2);  // AHB > 160MHz
    static constexpr uint8_t DMAREQ_ID = 6;    // FIXME: better source!
};

