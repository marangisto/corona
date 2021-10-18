#pragma once

////
//
//      STM32H7 CORDIC peripherals
//
///

// CORDIC: CORDIC register block

struct stm32h723_cordic_t
{
    volatile uint32_t CORDIC_CSR; // CORDIC control/status register
    volatile uint32_t CORDIC_WDATA; // CORDIC argument register
    volatile uint32_t CORDIC_RDATA; // CORDIC result register

    static constexpr uint32_t CORDIC_CSR_RESET_VALUE = 0x50; // Reset value
    typedef bit_field_t<0, 0xf> CORDIC_CSR_FUNC; // Function
    typedef bit_field_t<4, 0xf> CORDIC_CSR_PRECISION; // Precision required (number of iterations) To determine the number of iterations needed for a given accuracy refer to . Note that for most functions, the recommended range for this field is 3 to 6.
    typedef bit_field_t<8, 0x7> CORDIC_CSR_SCALE; // Scaling factor The value of this field indicates the scaling factor applied to the arguments and/or results. A value n implies that the arguments have been multiplied by a factor 2-n, and/or the results need to be multiplied by 2n. Refer to for the applicability of the scaling factor for each function and the appropriate range.
    static constexpr uint32_t CORDIC_CSR_IEN = 0x10000; // Enable interrupt. This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t CORDIC_CSR_DMAREN = 0x20000; // Enable DMA read channel This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t CORDIC_CSR_DMAWEN = 0x40000; // Enable DMA write channel This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t CORDIC_CSR_NRES = 0x80000; // Number of results in the CORDIC_RDATA register Reads return the current state of the bit.
    static constexpr uint32_t CORDIC_CSR_NARGS = 0x100000; // Number of arguments expected by the CORDIC_WDATA register Reads return the current state of the bit.
    static constexpr uint32_t CORDIC_CSR_RESSIZE = 0x200000; // Width of output data RESSIZE selects the number of bits used to represent output data. If 32-bit data is selected, the CORDIC_RDATA register contains results in q1.31 format. If 16-bit data is selected, the least significant half-word of CORDIC_RDATA contains the primary result (RES1) in q1.15 format, and the most significant half-word contains the secondary result (RES2), also in q1.15 format.
    static constexpr uint32_t CORDIC_CSR_ARGSIZE = 0x400000; // Width of input data ARGSIZE selects the number of bits used to represent input data. If 32-bit data is selected, the CORDIC_WDATA register expects arguments in q1.31 format. If 16-bit data is selected, the CORDIC_WDATA register expects arguments in q1.15 format. The primary argument (ARG1) is written to the least significant half-word, and the secondary argument (ARG2) to the most significant half-word.
    static constexpr uint32_t CORDIC_CSR_RRDY = 0x80000000; // Result ready flag This bit is set by hardware when a CORDIC operation completes. It is reset by hardware when the CORDIC_RDATA register is read (NRES+1) times. When this bit is set, if the IEN bit is also set, the CORDIC interrupt is asserted. If the DMAREN bit is set, a DMA read channel request is generated. While this bit is set, no new calculation is started.

    static constexpr uint32_t CORDIC_WDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CORDIC_WDATA_ARG; // Function input arguments This register is programmed with the input arguments for the function selected in the CORDIC_CSR register FUNC field. If 32-bit format is selected (CORDIC_CSR.ARGSIZE = 0) and two input arguments are required (CORDIC_CSR.NARGS = 1), two successive writes are required to this register. The first writes the primary argument (ARG1), the second writes the secondary argument (ARG2). If 32-bit format is selected and only one input argument is required (NARGS = 0), only one write is required to this register, containing the primary argument (ARG1). If 16-bit format is selected (CORDIC_CSR.ARGSIZE = 1), one write to this register contains both arguments. The primary argument (ARG1) is in the lower half, ARG[15:0], and the secondary argument (ARG2) is in the upper half, ARG[31:16]. In this case, NARGS must be set to 0. Refer to for the arguments required by each function, and their permitted range. When the required number of arguments has been written, the CORDIC evaluates the function designated by CORDIC_CSR.FUNC using the supplied input arguments, provided any previous calculation has completed. If a calculation is ongoing, the ARG1 and ARG 2 values are held pending until the calculation is completed and the results read. During this time, a write to the register cancels the pending operation and overwrite the argument data.

    static constexpr uint32_t CORDIC_RDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CORDIC_RDATA_RES; // Function result If 32-bit format is selected (CORDIC_CSR.RESSIZE = 0) and two output values are expected (CORDIC_CSR.NRES = 1), this register must be read twice when the RRDY flag is set. The first read fetches the primary result (RES1). The second read fetches the secondary result (RES2) and resets RRDY. If 32-bit format is selected and only one output value is expected (NRES = 0), only one read of this register is required to fetch the primary result (RES1) and reset the RRDY flag. If 16-bit format is selected (CORDIC_CSR.RESSIZE = 1), this register contains the primary result (RES1) in the lower half, RES[15:0], and the secondary result (RES2) in the upper half, RES[31:16]. In this case, NRES must be set to 0, and only one read performed. A read from this register resets the RRDY flag in the CORDIC_CSR register.
};

template<>
struct peripheral_t<STM32H723, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32h723_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32h723_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32h723_cordic_t;
    static T& V;
};

using cordic_t = peripheral_t<svd, CORDIC>;

template<> struct dma_request_t<CORDIC, CORDIC_READ>
{
    static constexpr unsigned ID = 133;
};

template<> struct dma_request_t<CORDIC, CORDIC_WRITE>
{
    static constexpr unsigned ID = 134;
};
