#pragma once

////
//
//      STM32F7 FPU peripherals
//
///

// FPU: Floting point unit

struct stm32f722_fpu_t
{
    volatile uint32_t FPCCR; // Floating-point context control register
    volatile uint32_t FPCAR; // Floating-point context address register
    volatile uint32_t FPSCR; // Floating-point status control register

    static constexpr uint32_t FPCCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FPCCR_LSPACT = 0x1; // LSPACT
    static constexpr uint32_t FPCCR_USER = 0x2; // USER
    static constexpr uint32_t FPCCR_THREAD = 0x8; // THREAD
    static constexpr uint32_t FPCCR_HFRDY = 0x10; // HFRDY
    static constexpr uint32_t FPCCR_MMRDY = 0x20; // MMRDY
    static constexpr uint32_t FPCCR_BFRDY = 0x40; // BFRDY
    static constexpr uint32_t FPCCR_MONRDY = 0x100; // MONRDY
    static constexpr uint32_t FPCCR_LSPEN = 0x40000000; // LSPEN
    static constexpr uint32_t FPCCR_ASPEN = 0x80000000; // ASPEN

    static constexpr uint32_t FPCAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fffffff> FPCAR_ADDRESS; // Location of unpopulated floating-point

    static constexpr uint32_t FPSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FPSCR_IOC = 0x1; // Invalid operation cumulative exception bit
    static constexpr uint32_t FPSCR_DZC = 0x2; // Division by zero cumulative exception bit.
    static constexpr uint32_t FPSCR_OFC = 0x4; // Overflow cumulative exception bit
    static constexpr uint32_t FPSCR_UFC = 0x8; // Underflow cumulative exception bit
    static constexpr uint32_t FPSCR_IXC = 0x10; // Inexact cumulative exception bit
    static constexpr uint32_t FPSCR_IDC = 0x80; // Input denormal cumulative exception bit.
    typedef bit_field_t<22, 0x3> FPSCR_RMODE; // Rounding Mode control field
    static constexpr uint32_t FPSCR_FZ = 0x1000000; // Flush-to-zero mode control bit:
    static constexpr uint32_t FPSCR_DN = 0x2000000; // Default NaN mode control bit
    static constexpr uint32_t FPSCR_AHP = 0x4000000; // Alternative half-precision control bit
    static constexpr uint32_t FPSCR_V = 0x10000000; // Overflow condition code flag
    static constexpr uint32_t FPSCR_C = 0x20000000; // Carry condition code flag
    static constexpr uint32_t FPSCR_Z = 0x40000000; // Zero condition code flag
    static constexpr uint32_t FPSCR_N = 0x80000000; // Negative condition code flag
};

// FPU_CPACR: Floating point unit CPACR

struct stm32f722_fpu_cpacr_t
{
    volatile uint32_t CPACR; // Coprocessor access control register

    static constexpr uint32_t CPACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CPACR_CP; // CP
};

template<>
struct peripheral_t<STM32F722, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, FPU>
{
    using T = stm32f722_fpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, FPU_CPACR>
{
    using T = stm32f722_fpu_cpacr_t;
    static T& V;
};

using fpu_t = peripheral_t<svd, FPU>;
using fpu_cpacr_t = peripheral_t<svd, FPU_CPACR>;

template<int INST> struct fpu_traits {};
