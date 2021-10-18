#pragma once

////
//
//      STM32H7 PSSI peripherals
//
///

// PSSI: PSSI register block

struct stm32h723_pssi_t
{
    volatile uint32_t PSSI_CR; // PSSI control register
    volatile uint32_t PSSI_SR; // PSSI status register
    volatile uint32_t PSSI_RIS; // PSSI raw interrupt status register
    volatile uint32_t PSSI_IER; // PSSI interrupt enable register
    volatile uint32_t PSSI_MIS; // PSSI masked interrupt status register
    volatile uint32_t PSSI_ICR; // PSSI interrupt clear register
    reserved_t<0x4> _0x18;
    volatile uint32_t PSSI_DR; // PSSI data register

    static constexpr uint32_t PSSI_CR_RESET_VALUE = 0x40000000; // Reset value
    static constexpr uint32_t PSSI_CR_CKPOL = 0x20; // Parallel data clock polarity This bit configures the capture edge of the parallel clock or the edge used for driving outputs, depending on OUTEN.
    static constexpr uint32_t PSSI_CR_DEPOL = 0x40; // Data enable (PSSI_DE) polarity This bit indicates the level on the PSSI_DE pin when the data are not valid on the parallel interface.
    static constexpr uint32_t PSSI_CR_RDYPOL = 0x100; // Ready (PSSI_RDY) polarity This bit indicates the level on the PSSI_RDY pin when the data are not valid on the parallel interface.
    typedef bit_field_t<10, 0x3> PSSI_CR_EDM; // Extended data mode
    static constexpr uint32_t PSSI_CR_ENABLE = 0x4000; // PSSI enable The contents of the FIFO are flushed when ENABLE is cleared to 0. Note: When ENABLE=1, the content of PSSI_CR must not be changed, except for the ENABLE bit itself. All configuration bits can change as soon as ENABLE changes from 0 to 1. The DMA controller and all PSSI configuration registers must be programmed correctly before setting the ENABLE bit to 1. The ENABLE bit and the DCMI ENABLE bit (bit 15 of DCMI_CR) must not be set to 1 at the same time.
    typedef bit_field_t<18, 0x7> PSSI_CR_DERDYCFG; // Data enable and ready configuration When the PSSI_RDY function is mapped to the PSSI_DE pin (settings 101 or 111), it is still the RDYPOL bit which determines its polarity. Similarly, when the PSSI_DE function is mapped to the PSSI_RDY pin (settings 110 or 111), it is still the DEPOL bit which determines its polarity.
    static constexpr uint32_t PSSI_CR_DMAEN = 0x40000000; // DMA enable bit
    static constexpr uint32_t PSSI_CR_OUTEN = 0x80000000; // Data direction selection bit

    static constexpr uint32_t PSSI_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PSSI_SR_RTT4B = 0x4; // FIFO is ready to transfer four bytes
    static constexpr uint32_t PSSI_SR_RTT1B = 0x8; // FIFO is ready to transfer one byte

    static constexpr uint32_t PSSI_RIS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PSSI_RIS_OVR_RIS = 0x2; // Data buffer overrun/underrun raw interrupt status This bit is cleared by writing a 1 to the OVR_ISC bit in PSSI_ICR.

    static constexpr uint32_t PSSI_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PSSI_IER_OVR_IE = 0x2; // Data buffer overrun/underrun interrupt enable

    static constexpr uint32_t PSSI_MIS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PSSI_MIS_OVR_MIS = 0x2; // Data buffer overrun/underrun masked interrupt status This bit is set to 1 only when PSSI_IER/OVR_IE and PSSI_RIS/OVR_RIS are both set to 1.

    static constexpr uint32_t PSSI_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PSSI_ICR_OVR_ISC = 0x2; // Data buffer overrun/underrun interrupt status clear Writing this bit to 1 clears the OVR_RIS bit in PSSI_RIS.


    static constexpr uint32_t PSSI_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PSSI_DR_BYTE0; // Data byte 0
    typedef bit_field_t<8, 0xff> PSSI_DR_BYTE1; // Data byte 1
    typedef bit_field_t<16, 0xff> PSSI_DR_BYTE2; // Data byte 2
    typedef bit_field_t<24, 0xff> PSSI_DR_BYTE3; // Data byte 3
};

template<>
struct peripheral_t<STM32H723, PSSI>
{
    static constexpr periph_t P = PSSI;
    using T = stm32h723_pssi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, PSSI>
{
    static constexpr periph_t P = PSSI;
    using T = stm32h723_pssi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, PSSI>
{
    static constexpr periph_t P = PSSI;
    using T = stm32h723_pssi_t;
    static T& V;
};

using pssi_t = peripheral_t<svd, PSSI>;

template<int INST> struct pssi_traits {};

template<> struct pssi_traits<0>
{
    using pssi = pssi_t;
    static constexpr signal_t D0 = PSSI_D0;
    static constexpr signal_t D1 = PSSI_D1;
    static constexpr signal_t D10 = PSSI_D10;
    static constexpr signal_t D11 = PSSI_D11;
    static constexpr signal_t D12 = PSSI_D12;
    static constexpr signal_t D13 = PSSI_D13;
    static constexpr signal_t D14 = PSSI_D14;
    static constexpr signal_t D15 = PSSI_D15;
    static constexpr signal_t D2 = PSSI_D2;
    static constexpr signal_t D3 = PSSI_D3;
    static constexpr signal_t D4 = PSSI_D4;
    static constexpr signal_t D5 = PSSI_D5;
    static constexpr signal_t D6 = PSSI_D6;
    static constexpr signal_t D7 = PSSI_D7;
    static constexpr signal_t D8 = PSSI_D8;
    static constexpr signal_t D9 = PSSI_D9;
    static constexpr signal_t DE = PSSI_DE;
    static constexpr signal_t PDCK = PSSI_PDCK;
    static constexpr signal_t RDY = PSSI_RDY;
};
