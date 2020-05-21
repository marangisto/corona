#pragma once

////
//
//      STM32MP1 HSEM_IPXACT peripherals
//
////

////
//
//      HSEM
//
////

struct stm32mp15xxx_hsem_t
{
    volatile uint32_t HSEM_R0;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R1;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R2;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R3;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R4;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R5;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R6;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R7;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R8;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R9;      // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R10;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R11;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R12;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R13;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R14;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R15;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R16;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R17;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R18;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R19;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R20;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R21;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R22;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R23;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R24;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R25;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R26;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R27;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R28;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R29;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R30;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_R31;     // [read-write] The HSEM_Rx shall be used to perform a 2-step Write lock and Read back. Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR0;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR1;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR2;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR3;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR4;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR5;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR6;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR7;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR8;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR9;    // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR10;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR11;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR12;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR13;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR14;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR15;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR16;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR17;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR18;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR19;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR20;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR21;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR22;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR23;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR24;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR25;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR26;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR27;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR28;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR29;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR30;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_RLR31;   // [read-only] Accesses the same physical bits as HSEM_Rx. The HSEM_RLRx shall be used to perform a 1-step Read lock. Only Read accesses with authorized AHB bus master IDs are granted. Read accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_C1IER;   // [read-write] HSEM i1terrupt enable register
    volatile uint32_t HSEM_C1ICR;   // [read-write] HSEM i1terrupt clear register
    volatile uint32_t HSEM_C1ISR;   // [read-only] HSEM i1terrupt status register
    volatile uint32_t HSEM_C1MISR;  // [read-only] HSEM i1terrupt status register
    volatile uint32_t HSEM_C2IER;   // [read-write] HSEM i2terrupt enable register
    volatile uint32_t HSEM_C2ICR;   // [read-write] HSEM i2terrupt clear register
    volatile uint32_t HSEM_C2ISR;   // [read-only] HSEM i2terrupt status register
    volatile uint32_t HSEM_C2MISR;  // [read-only] HSEM i2terrupt status register
    reserved_t<0x8> _0x140;
    volatile uint32_t HSEM_CR;      // [write-only] Only Write accesses with authorized AHB bus master IDs are granted. Write accesses with unauthorized AHB bus master IDs are discarded.
    volatile uint32_t HSEM_KEYR;    // [read-write] HSEM interrupt clear register
    reserved_t<0xa9> _0x3ec;
    volatile uint32_t HSEM_HWCFGR2; // [read-only] HSEM hardware configuration register 2
    volatile uint32_t HSEM_HWCFGR1; // [read-only] HSEM hardware configuration register 1
    volatile uint32_t HSEM_VERR;    // [read-only] HSEM IP version register
    volatile uint32_t HSEM_IPIDR;   // [read-only] HSEM IP identification register
    volatile uint32_t HSEM_SIDR;    // [read-only] HSEM size identification register

    static constexpr uint32_t HSEM_R0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R0_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R0_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R0_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R1_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R1_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R1_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R2_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R2_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R2_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R3_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R3_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R3_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R4_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R4_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R4_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R5_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R5_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R5_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R6_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R6_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R6_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R7_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R7_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R7_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R8_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R8_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R8_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R9_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R9_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R9_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R10_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R10_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R10_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R11_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R11_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R11_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R12_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R12_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R12_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R13_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R13_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R13_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R14_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R14_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R14_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R15_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R15_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R15_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R16_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R16_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R16_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R17_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R17_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R17_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R18_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R18_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R18_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R19_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R19_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R19_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R20_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R20_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R20_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R21_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R21_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R21_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R22_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R22_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R22_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R23_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R23_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R23_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R24_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R24_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R24_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R25_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R25_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R25_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R26_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R26_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R26_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R27_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R27_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R27_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R28_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R28_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R28_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R29_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R29_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R29_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R30_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R30_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R30_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_R31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_R31_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_R31_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_R31_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR0_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR0_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR0_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR1_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR1_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR1_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR2_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR2_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR2_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR3_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR3_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR3_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR4_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR4_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR4_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR5_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR5_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR5_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR6_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR6_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR6_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR7_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR7_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR7_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR8_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR8_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR8_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR9_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR9_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR9_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR10_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR10_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR10_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR11_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR11_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR11_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR12_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR12_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR12_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR13_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR13_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR13_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR14_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR14_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR14_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR15_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR15_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR15_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR16_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR16_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR16_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR17_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR17_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR17_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR18_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR18_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR18_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR19_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR19_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR19_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR20_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR20_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR20_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR21_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR21_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR21_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR22_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR22_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR22_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR23_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR23_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR23_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR24_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR24_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR24_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR25_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR25_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR25_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR26_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR26_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR26_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR27_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR27_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR27_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR28_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR28_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR28_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR29_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR29_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR29_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR30_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR30_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR30_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_RLR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR31_PROCID =           // PROCID
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_RLR31_COREID =           // COREID
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HSEM_RLR31_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t HSEM_C1IER_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C1ICR_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C1ISR_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C1MISR_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C2IER_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C2ICR_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C2ISR_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_C2MISR_RESET_VALUE = 0x0;

    static constexpr uint32_t HSEM_CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_CR_COREID =   // COREID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_CR_KEY =      // KEY
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t HSEM_KEYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HSEM_KEYR_KEY =   // KEY
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t HSEM_HWCFGR2_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t HSEM_HWCFGR2_MASTERID1 =   // MASTERID1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_HWCFGR2_MASTERID2 =   // MASTERID2
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_HWCFGR2_MASTERID3 =   // MASTERID3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_HWCFGR2_MASTERID4 =   // MASTERID4
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t HSEM_HWCFGR1_RESET_VALUE = 0x220;
    template<uint32_t X>
    static constexpr uint32_t HSEM_HWCFGR1_NBSEM =   // NBSEM
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_HWCFGR1_NBINT =   // NBINT
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t HSEM_VERR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t HSEM_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HSEM_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t HSEM_IPIDR_RESET_VALUE = 0x100072;

    static constexpr uint32_t HSEM_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, HSEM>
{
    typedef stm32mp15xxx_hsem_t T;
    static T& V;
};

using hsem_t = peripheral_t<mcu_svd, HSEM>;

