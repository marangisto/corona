#pragma once

////
//
//      STM32F7 SPDIF_RX peripherals
//
///

// SPDIF_RX: Receiver Interface

struct stm32f745_spdif_rx_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t IMR; // Interrupt mask register
    volatile uint32_t SR; // Status register
    volatile uint32_t IFCR; // Interrupt Flag Clear register
    volatile uint32_t DR; // Data input register
    volatile uint32_t CSR; // Channel Status register
    volatile uint32_t DIR; // Debug Information register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CR_SPDIFEN; // Peripheral Block Enable
    static constexpr uint32_t CR_RXDMAEN = 0x4; // Receiver DMA ENable for data flow
    static constexpr uint32_t CR_RXSTEO = 0x8; // STerEO Mode
    typedef bit_field_t<4, 0x3> CR_DRFMT; // RX Data format
    static constexpr uint32_t CR_PMSK = 0x40; // Mask Parity error bit
    static constexpr uint32_t CR_VMSK = 0x80; // Mask of Validity bit
    static constexpr uint32_t CR_CUMSK = 0x100; // Mask of channel status and user bits
    static constexpr uint32_t CR_PTMSK = 0x200; // Mask of Preamble Type bits
    static constexpr uint32_t CR_CBDMAEN = 0x400; // Control Buffer DMA ENable for control flow
    static constexpr uint32_t CR_CHSEL = 0x800; // Channel Selection
    typedef bit_field_t<12, 0x3> CR_NBTR; // Maximum allowed re-tries during synchronization phase
    static constexpr uint32_t CR_WFA = 0x4000; // Wait For Activity
    typedef bit_field_t<16, 0x7> CR_INSEL; // input selection

    static constexpr uint32_t IMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR_RXNEIE = 0x1; // RXNE interrupt enable
    static constexpr uint32_t IMR_CSRNEIE = 0x2; // Control Buffer Ready Interrupt Enable
    static constexpr uint32_t IMR_PERRIE = 0x4; // Parity error interrupt enable
    static constexpr uint32_t IMR_OVRIE = 0x8; // Overrun error Interrupt Enable
    static constexpr uint32_t IMR_SBLKIE = 0x10; // Synchronization Block Detected Interrupt Enable
    static constexpr uint32_t IMR_SYNCDIE = 0x20; // Synchronization Done
    static constexpr uint32_t IMR_IFEIE = 0x40; // Serial Interface Error Interrupt Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_RXNE = 0x1; // Read data register not empty
    static constexpr uint32_t SR_CSRNE = 0x2; // Control Buffer register is not empty
    static constexpr uint32_t SR_PERR = 0x4; // Parity error
    static constexpr uint32_t SR_OVR = 0x8; // Overrun error
    static constexpr uint32_t SR_SBD = 0x10; // Synchronization Block Detected
    static constexpr uint32_t SR_SYNCD = 0x20; // Synchronization Done
    static constexpr uint32_t SR_FERR = 0x40; // Framing error
    static constexpr uint32_t SR_SERR = 0x80; // Synchronization error
    static constexpr uint32_t SR_TERR = 0x100; // Time-out error
    typedef bit_field_t<16, 0x7fff> SR_WIDTH5; // Duration of 5 symbols counted with SPDIF_CLK

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_PERRCF = 0x4; // Clears the Parity error flag
    static constexpr uint32_t IFCR_OVRCF = 0x8; // Clears the Overrun error flag
    static constexpr uint32_t IFCR_SBDCF = 0x10; // Clears the Synchronization Block Detected flag
    static constexpr uint32_t IFCR_SYNCDCF = 0x20; // Clears the Synchronization Done flag

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> DR_DR; // Parity Error bit
    static constexpr uint32_t DR_PE = 0x1000000; // Parity Error bit
    static constexpr uint32_t DR_V = 0x2000000; // Validity bit
    static constexpr uint32_t DR_U = 0x4000000; // User bit
    static constexpr uint32_t DR_C = 0x8000000; // Channel Status bit
    typedef bit_field_t<28, 0x3> DR_PT; // Preamble Type

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CSR_USR; // User data information
    typedef bit_field_t<16, 0xff> CSR_CS; // Channel A status information
    static constexpr uint32_t CSR_SOB = 0x1000000; // Start Of Block

    static constexpr uint32_t DIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> DIR_THI; // Threshold HIGH
    typedef bit_field_t<16, 0x1fff> DIR_TLO; // Threshold LOW
};

template<>
struct peripheral_t<STM32F745, SPDIF_RX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, SPDIF_RX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, SPDIF_RX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, SPDIF_RX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, SPDIF_RX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, SPDIFRX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, SPDIFRX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, SPDIFRX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, SPDIFRX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, SPDIFRX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, SPDIFRX>
{
    using T = stm32f745_spdif_rx_t;
    static T& V;
};

using spdifrx_t = peripheral_t<svd, SPDIFRX>;
using spdif_rx_t = peripheral_t<svd, SPDIF_RX>;

template<int INST> struct spdif_rx_traits {};

template<> struct spdif_rx_traits<0>
{
    using spdif_rx = spdifrx_t;
    static constexpr signal_t IN0 = SPDIFRX_IN0;
    static constexpr signal_t IN1 = SPDIFRX_IN1;
    static constexpr signal_t IN2 = SPDIFRX_IN2;
    static constexpr signal_t IN3 = SPDIFRX_IN3;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_SPDIFRXEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_SPDIFRXEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_SPDIFRXRST;
    }
};
