#pragma once

////
//
//      STM32H7 FMAC peripherals
//
///

// FMAC: FMAC register block

struct stm32h723_fmac_t
{
    volatile uint32_t FMAC_X1BUFCFG; // FMAC X1 buffer configuration register
    volatile uint32_t FMAC_X2BUFCFG; // FMAC X2 buffer configuration register
    volatile uint32_t FMAC_YBUFCFG; // FMAC Y buffer configuration register
    volatile uint32_t FMAC_PARAM; // FMAC parameter register
    volatile uint32_t FMAC_CR; // FMAC control register
    volatile uint32_t FMAC_SR; // FMAC status register
    volatile uint32_t FMAC_WDATA; // FMAC write data register
    volatile uint32_t FMAC_RDATA; // FMAC read data register

    static constexpr uint32_t FMAC_X1BUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FMAC_X1BUFCFG_X1_BASE; // Base address of X1 buffer
    typedef bit_field_t<8, 0xff> FMAC_X1BUFCFG_X1_BUF_SIZE; // Allocated size of X1 buffer in 16-bit words The minimum buffer size is the number of feed-forward taps in the filter (+ the watermark threshold - 1).
    typedef bit_field_t<24, 0x3> FMAC_X1BUFCFG_FULL_WM; // Watermark for buffer full flag Defines the threshold for setting the X1 buffer full flag when operating in circular mode. The flag is set if the number of free spaces in the buffer is less than 2FULL_WM. 2: Threshold = 4 3: Threshold = 8 Setting a threshold greater than 1 allows several data to be transferred into the buffer under one interrupt. Threshold should be set to 1 if DMA write requests are enabled (DMAWEN = 1 in FMAC_CR register).

    static constexpr uint32_t FMAC_X2BUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FMAC_X2BUFCFG_X2_BASE; // Base address of X2 buffer The X2 buffer base address can be modified while START=1, for example to change coefficient values. The filter should be stalled when doing this, since changing the coefficients while a calculation is ongoing affects the result.
    typedef bit_field_t<8, 0xff> FMAC_X2BUFCFG_X2_BUF_SIZE; // Size of X2 buffer in 16-bit words This bitfield can not be modified when a function is ongoing (START = 1).

    static constexpr uint32_t FMAC_YBUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FMAC_YBUFCFG_Y_BASE; // Base address of Y buffer
    typedef bit_field_t<8, 0xff> FMAC_YBUFCFG_Y_BUF_SIZE; // Size of Y buffer in 16-bit words For FIR filters, the minimum buffer size is 1 (+ the watermark threshold). For IIR filters the minimum buffer size is the number of feedback taps (+ the watermark threshold).
    typedef bit_field_t<24, 0x3> FMAC_YBUFCFG_EMPTY_WM; // Watermark for buffer empty flag Defines the threshold for setting the Y buffer empty flag when operating in circular mode. The flag is set if the number of unread values in the buffer is less than 2EMPTY_WM. 2: Threshold = 4 3: Threshold = 8 Setting a threshold greater than 1 allows several data to be transferred from the buffer under one interrupt. Threshold should be set to 1 if DMA read requests are enabled (DMAREN = 1 in FMAC_CR register).

    static constexpr uint32_t FMAC_PARAM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FMAC_PARAM_P; // Input parameter P. The value of this parameter is dependent on the function This bitfield can not be modified when a function is ongoing (START = 1)
    typedef bit_field_t<8, 0xff> FMAC_PARAM_Q; // Input parameter Q. The value of this parameter is dependent on the function. This bitfield can not be modified when a function is ongoing (START = 1)
    typedef bit_field_t<16, 0xff> FMAC_PARAM_R; // Input parameter R. The value of this parameter is dependent on the function. This bitfield can not be modified when a function is ongoing (START = 1)
    typedef bit_field_t<24, 0x7f> FMAC_PARAM_FUNC; // Function 2: Load X2 buffer 3: Load Y buffer 4 to 7: Reserved 8: Convolution (FIR filter) 9: IIR filter (direct form 1) This bitfield can not be modified when a function is ongoing (START = 1)
    static constexpr uint32_t FMAC_PARAM_START = 0x80000000; // Enable execution Setting this bit triggers the execution of the function selected in the FUNC bitfield. Resetting it by software stops any ongoing function. For initialization functions, this bit is reset by hardware.

    static constexpr uint32_t FMAC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FMAC_CR_RIEN = 0x1; // Enable read interrupt This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_WIEN = 0x2; // Enable write interrupt This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_OVFLIEN = 0x4; // Enable overflow error interrupts This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_UNFLIEN = 0x8; // Enable underflow error interrupts This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_SATIEN = 0x10; // Enable saturation error interrupts This bit is set and cleared by software. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_DMAREN = 0x100; // Enable DMA read channel requests This bit can only be modified when START= 0 in the FMAC_PARAM register. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_DMAWEN = 0x200; // Enable DMA write channel requests This bit can only be modified when START= 0 in the FMAC_PARAM register. A read returns the current state of the bit.
    static constexpr uint32_t FMAC_CR_CLIPEN = 0x8000; // Enable clipping
    static constexpr uint32_t FMAC_CR_RESET = 0x10000; // Reset FMAC unit This resets the write and read pointers, the internal control logic, the FMAC_SR register and the FMAC_PARAM register, including the START bit if active. Other register settings are not affected. This bit is reset by hardware.

    static constexpr uint32_t FMAC_SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t FMAC_SR_YEMPTY = 0x1; // Y buffer empty flag The buffer is flagged as empty if the number of unread data is less than the EMPTY_WM threshold. The number of unread data is the difference between the read pointer and the current output destination address. This flag is set and cleared by hardware, or by a reset. Note: after the last sample is read from the Y buffer there is a delay of 3 clock cycles before the YEMPTY flag goes high. To avoid any risk of underflow it is recommended to insert a software delay after reading from the Y buffer before reading the FMAC_SR. Alternatively, an EMPTY_WM threshold of 2 can be used.
    static constexpr uint32_t FMAC_SR_X1FULL = 0x2; // X1 buffer full flag The buffer is flagged as full if the number of available spaces is less than the FULL_WM threshold. The number of available spaces is the difference between the write pointer and the least recent sample currently in use. This flag is set and cleared by hardware, or by a reset. Note: after the last available space in the X1 buffer is filled there is a delay of 3 clock cycles before the X1FULL flag goes high. To avoid any risk of overflow it is recommended to insert a software delay after writing to the X1 buffer before reading the FMAC_SR. Alternatively, a FULL_WM threshold of 2 can be used.
    static constexpr uint32_t FMAC_SR_OVFL = 0x100; // Overflow error flag An overflow occurs when a write is made to FMAC_WDATA when no free space is available in the X1 buffer. This flag is cleared by a reset of the unit.
    static constexpr uint32_t FMAC_SR_UNFL = 0x200; // Underflow error flag An underflow occurs when a read is made from FMAC_RDATA when no valid data is available in the Y buffer. This flag is cleared by a reset of the unit.
    static constexpr uint32_t FMAC_SR_SAT = 0x400; // Saturation error flag Saturation occurs when the result of an accumulation exceeds the numeric range of the accumulator. This flag is cleared by a reset of the unit.

    static constexpr uint32_t FMAC_WDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FMAC_WDATA_WDATA; // Write data When a write access to this register occurs, the write data are transferred to the address offset indicated by the write pointer. The pointer address is automatically incremented after each write access.

    static constexpr uint32_t FMAC_RDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FMAC_RDATA_RDATA; // Read data When a read access to this register occurs, the read data are the contents of the Y output buffer at the address offset indicated by the READ pointer. The pointer address is automatically incremented after each read access.
};

template<>
struct peripheral_t<STM32H723, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32h723_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32h723_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32h723_fmac_t;
    static T& V;
};

using fmac_t = peripheral_t<svd, FMAC>;

template<> struct dma_request_t<FMAC, FMAC_READ>
{
    static constexpr unsigned ID = 131;
};

template<> struct dma_request_t<FMAC, FMAC_WRITE>
{
    static constexpr unsigned ID = 132;
};
