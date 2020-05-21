#pragma once

////
//
//      STM32H7 EXTI peripherals
//
////

////
//
//      External interrupt/event controller
//
////

struct stm32h742x_exti_t
{
    volatile uint32_t RTSR1;   // [read-write] EXTI rising trigger selection register
    volatile uint32_t FTSR1;   // [read-write] EXTI falling trigger selection register
    volatile uint32_t SWIER1;  // [read-write] EXTI software interrupt event register
    volatile uint32_t D3PMR1;  // [read-write] EXTI D3 pending mask register
    volatile uint32_t D3PCR1L; // [read-write] EXTI D3 pending clear selection register low
    volatile uint32_t D3PCR1H; // [read-write] EXTI D3 pending clear selection register high
    reserved_t<0x2> _0x20;
    volatile uint32_t RTSR2;   // [read-write] EXTI rising trigger selection register
    volatile uint32_t FTSR2;   // [read-write] EXTI falling trigger selection register
    volatile uint32_t SWIER2;  // [read-write] EXTI software interrupt event register
    volatile uint32_t D3PMR2;  // [read-write] EXTI D3 pending mask register
    volatile uint32_t D3PCR2L; // [read-write] EXTI D3 pending clear selection register low
    volatile uint32_t D3PCR2H; // [read-write] EXTI D3 pending clear selection register high
    reserved_t<0x2> _0x40;
    volatile uint32_t RTSR3;   // [read-write] EXTI rising trigger selection register
    volatile uint32_t FTSR3;   // [read-write] EXTI falling trigger selection register
    volatile uint32_t SWIER3;  // [read-write] EXTI software interrupt event register
    volatile uint32_t D3PMR3;  // [read-write] EXTI D3 pending mask register
    reserved_t<0x1> _0x54;
    volatile uint32_t D3PCR3H; // [read-write] EXTI D3 pending clear selection register high
    reserved_t<0xa> _0x80;
    volatile uint32_t CPUIMR1; // [read-write] EXTI interrupt mask register
    volatile uint32_t CPUEMR1; // [read-write] EXTI event mask register
    volatile uint32_t CPUPR1;  // [read-write] EXTI pending register
    reserved_t<0x1> _0x90;
    volatile uint32_t CPUIMR2; // [read-write] EXTI interrupt mask register
    volatile uint32_t CPUEMR2; // [read-write] EXTI event mask register
    volatile uint32_t CPUPR2;  // [read-only] EXTI pending register
    reserved_t<0x1> _0xa0;
    volatile uint32_t CPUIMR3; // [read-only] EXTI interrupt mask register
    volatile uint32_t CPUEMR3; // [read-only] EXTI event mask register
    volatile uint32_t CPUPR3;  // [read-only] EXTI pending register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR1_TR0 = 0x1;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR1 = 0x2;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR2 = 0x4;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR3 = 0x8;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR4 = 0x10;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR5 = 0x20;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR6 = 0x40;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR7 = 0x80;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR8 = 0x100;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR9 = 0x200;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR10 = 0x400;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR11 = 0x800;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR12 = 0x1000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR13 = 0x2000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR14 = 0x4000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR15 = 0x8000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR16 = 0x10000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR17 = 0x20000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR18 = 0x40000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR19 = 0x80000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR20 = 0x100000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR21 = 0x200000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR1_TR0 = 0x1;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR1 = 0x2;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR2 = 0x4;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR3 = 0x8;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR4 = 0x10;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR5 = 0x20;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR6 = 0x40;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR7 = 0x80;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR8 = 0x100;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR9 = 0x200;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR10 = 0x400;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR11 = 0x800;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR12 = 0x1000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR13 = 0x2000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR14 = 0x4000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR15 = 0x8000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR16 = 0x10000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR17 = 0x20000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR18 = 0x40000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR19 = 0x80000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR20 = 0x100000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR21 = 0x200000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER1_SWIER0 = 0x1;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER1 = 0x2;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER2 = 0x4;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER3 = 0x8;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER4 = 0x10;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER5 = 0x20;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER6 = 0x40;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER7 = 0x80;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER8 = 0x100;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER9 = 0x200;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER10 = 0x400;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER11 = 0x800;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER12 = 0x1000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER13 = 0x2000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER14 = 0x4000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER15 = 0x8000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER16 = 0x10000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER17 = 0x20000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER18 = 0x40000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER19 = 0x80000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER20 = 0x100000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER21 = 0x200000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t D3PMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t D3PMR1_MR0 = 0x1;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR1 = 0x2;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR2 = 0x4;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR3 = 0x8;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR4 = 0x10;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR5 = 0x20;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR6 = 0x40;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR7 = 0x80;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR8 = 0x100;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR9 = 0x200;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR10 = 0x400;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR11 = 0x800;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR12 = 0x1000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR13 = 0x2000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR14 = 0x4000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR15 = 0x8000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR19 = 0x80000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR20 = 0x100000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR21 = 0x200000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t D3PMR1_MR25 = 0x2000000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t D3PCR1L_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS0 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS1 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS2 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS3 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS4 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS5 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS6 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS7 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS8 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS9 =    // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS10 =   // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS11 =   // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS12 =   // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS13 =   // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS14 =   // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1L_PCS15 =   // D3 Pending request clear input signal selection on Event input x = truncate (n/2)
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t D3PCR1H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t D3PCR1H_PCS19 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1H_PCS20 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1H_PCS21 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR1H_PCS25 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR2_TR49 = 0x20000; // Rising trigger event configuration bit of Configurable Event input x+32
    static constexpr uint32_t RTSR2_TR51 = 0x80000; // Rising trigger event configuration bit of Configurable Event input x+32

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR2_TR49 = 0x20000; // Falling trigger event configuration bit of Configurable Event input x+32
    static constexpr uint32_t FTSR2_TR51 = 0x80000; // Falling trigger event configuration bit of Configurable Event input x+32

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER2_SWIER49 = 0x20000; // Software interrupt on line x+32
    static constexpr uint32_t SWIER2_SWIER51 = 0x80000; // Software interrupt on line x+32

    static constexpr uint32_t D3PMR2_RESET_VALUE = 0x0;
    static constexpr uint32_t D3PMR2_MR34 = 0x4;      // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR35 = 0x8;      // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR41 = 0x200;    // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR48 = 0x10000;  // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR49 = 0x20000;  // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR50 = 0x40000;  // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR51 = 0x80000;  // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR52 = 0x100000; // D3 Pending Mask on Event input x+32
    static constexpr uint32_t D3PMR2_MR53 = 0x200000; // D3 Pending Mask on Event input x+32

    static constexpr uint32_t D3PCR2L_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t D3PCR2L_PCS35 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2L_PCS34 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2L_PCS41 =   // D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2)
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t D3PCR2H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t D3PCR2H_PCS48 =   // Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2H_PCS49 =   // Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2H_PCS50 =   // Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2H_PCS51 =   // Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2H_PCS52 =   // Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t D3PCR2H_PCS53 =   // Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
        bit_field_t<10, 0x3>::value<X>();

    static constexpr uint32_t RTSR3_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR3_TR82 = 0x40000;  // Rising trigger event configuration bit of Configurable Event input x+64
    static constexpr uint32_t RTSR3_TR84 = 0x100000; // Rising trigger event configuration bit of Configurable Event input x+64
    static constexpr uint32_t RTSR3_TR85 = 0x200000; // Rising trigger event configuration bit of Configurable Event input x+64
    static constexpr uint32_t RTSR3_TR86 = 0x400000; // Rising trigger event configuration bit of Configurable Event input x+64

    static constexpr uint32_t FTSR3_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR3_TR82 = 0x40000;  // Falling trigger event configuration bit of Configurable Event input x+64
    static constexpr uint32_t FTSR3_TR84 = 0x100000; // Falling trigger event configuration bit of Configurable Event input x+64
    static constexpr uint32_t FTSR3_TR85 = 0x200000; // Falling trigger event configuration bit of Configurable Event input x+64
    static constexpr uint32_t FTSR3_TR86 = 0x400000; // Falling trigger event configuration bit of Configurable Event input x+64

    static constexpr uint32_t SWIER3_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER3_SWIER82 = 0x40000;  // Software interrupt on line x+64
    static constexpr uint32_t SWIER3_SWIER84 = 0x100000; // Software interrupt on line x+64
    static constexpr uint32_t SWIER3_SWIER85 = 0x200000; // Software interrupt on line x+64
    static constexpr uint32_t SWIER3_SWIER86 = 0x400000; // Software interrupt on line x+64

    static constexpr uint32_t D3PMR3_RESET_VALUE = 0x0;
    static constexpr uint32_t D3PMR3_MR88 = 0x1000000; // D3 Pending Mask on Event input x+64

    static constexpr uint32_t D3PCR3H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t D3PCR3H_PCS88 =   // D3 Pending request clear input signal selection on Event input x= truncate N+160/2
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t CPUIMR1_RESET_VALUE = 0xffc00000;
    static constexpr uint32_t CPUIMR1_MR0 = 0x1;         // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR1 = 0x2;         // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR2 = 0x4;         // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR3 = 0x8;         // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR4 = 0x10;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR5 = 0x20;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR6 = 0x40;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR7 = 0x80;        // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR8 = 0x100;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR9 = 0x200;       // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR10 = 0x400;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR11 = 0x800;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR12 = 0x1000;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR13 = 0x2000;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR14 = 0x4000;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR15 = 0x8000;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR16 = 0x10000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR17 = 0x20000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR18 = 0x40000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR19 = 0x80000;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR20 = 0x100000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR21 = 0x200000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR22 = 0x400000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR23 = 0x800000;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR24 = 0x1000000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR25 = 0x2000000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR26 = 0x4000000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR27 = 0x8000000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR28 = 0x10000000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR29 = 0x20000000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR30 = 0x40000000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t CPUIMR1_MR31 = 0x80000000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t CPUEMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUEMR1_MR0 = 0x1;         // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR1 = 0x2;         // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR2 = 0x4;         // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR3 = 0x8;         // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR4 = 0x10;        // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR5 = 0x20;        // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR6 = 0x40;        // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR7 = 0x80;        // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR8 = 0x100;       // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR9 = 0x200;       // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR10 = 0x400;      // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR11 = 0x800;      // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR12 = 0x1000;     // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR13 = 0x2000;     // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR14 = 0x4000;     // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR15 = 0x8000;     // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR16 = 0x10000;    // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR17 = 0x20000;    // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR18 = 0x40000;    // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR19 = 0x80000;    // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR20 = 0x100000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR21 = 0x200000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR22 = 0x400000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR23 = 0x800000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR24 = 0x1000000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR25 = 0x2000000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR26 = 0x4000000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR27 = 0x8000000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR28 = 0x10000000; // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR29 = 0x20000000; // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR30 = 0x40000000; // CPU Event mask on Event input x
    static constexpr uint32_t CPUEMR1_MR31 = 0x80000000; // CPU Event mask on Event input x

    static constexpr uint32_t CPUPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUPR1_PR0 = 0x1;       // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR1 = 0x2;       // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR2 = 0x4;       // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR3 = 0x8;       // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR4 = 0x10;      // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR5 = 0x20;      // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR6 = 0x40;      // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR7 = 0x80;      // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR8 = 0x100;     // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR9 = 0x200;     // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR10 = 0x400;    // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR11 = 0x800;    // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR12 = 0x1000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR13 = 0x2000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR14 = 0x4000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR15 = 0x8000;   // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR16 = 0x10000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR17 = 0x20000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR18 = 0x40000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR19 = 0x80000;  // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR20 = 0x100000; // CPU Event mask on Event input x
    static constexpr uint32_t CPUPR1_PR21 = 0x200000; // CPU Event mask on Event input x

    static constexpr uint32_t CPUIMR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUIMR2_MR0 = 0x1;         // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR1 = 0x2;         // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR2 = 0x4;         // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR3 = 0x8;         // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR4 = 0x10;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR5 = 0x20;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR6 = 0x40;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR7 = 0x80;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR8 = 0x100;       // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR9 = 0x200;       // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR10 = 0x400;      // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR11 = 0x800;      // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR12 = 0x1000;     // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR14 = 0x4000;     // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR15 = 0x8000;     // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR16 = 0x10000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR17 = 0x20000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR18 = 0x40000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR19 = 0x80000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR20 = 0x100000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR21 = 0x200000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR22 = 0x400000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR23 = 0x800000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR24 = 0x1000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR25 = 0x2000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR26 = 0x4000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR27 = 0x8000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR28 = 0x10000000; // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR29 = 0x20000000; // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR30 = 0x40000000; // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUIMR2_MR31 = 0x80000000; // CPU Interrupt Mask on Direct Event input x+32

    static constexpr uint32_t CPUEMR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUEMR2_MR32 = 0x1;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR33 = 0x2;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR34 = 0x4;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR35 = 0x8;        // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR36 = 0x10;       // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR37 = 0x20;       // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR38 = 0x40;       // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR39 = 0x80;       // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR40 = 0x100;      // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR41 = 0x200;      // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR42 = 0x400;      // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR43 = 0x800;      // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR44 = 0x1000;     // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR46 = 0x4000;     // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR47 = 0x8000;     // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR48 = 0x10000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR49 = 0x20000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR50 = 0x40000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR51 = 0x80000;    // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR52 = 0x100000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR53 = 0x200000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR54 = 0x400000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR55 = 0x800000;   // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR56 = 0x1000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR57 = 0x2000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR58 = 0x4000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR59 = 0x8000000;  // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR60 = 0x10000000; // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR61 = 0x20000000; // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR62 = 0x40000000; // CPU Interrupt Mask on Direct Event input x+32
    static constexpr uint32_t CPUEMR2_MR63 = 0x80000000; // CPU Interrupt Mask on Direct Event input x+32

    static constexpr uint32_t CPUPR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUPR2_PR49 = 0x20000; // Configurable event inputs x+32 Pending bit
    static constexpr uint32_t CPUPR2_PR51 = 0x80000; // Configurable event inputs x+32 Pending bit

    static constexpr uint32_t CPUIMR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUIMR3_MR64 = 0x1;       // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR65 = 0x2;       // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR66 = 0x4;       // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR67 = 0x8;       // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR68 = 0x10;      // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR69 = 0x20;      // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR70 = 0x40;      // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR71 = 0x80;      // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR72 = 0x100;     // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR73 = 0x200;     // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR74 = 0x400;     // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR75 = 0x800;     // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR76 = 0x1000;    // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR77 = 0x2000;    // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR78 = 0x4000;    // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR79 = 0x8000;    // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR80 = 0x10000;   // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR82 = 0x40000;   // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR84 = 0x100000;  // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR85 = 0x200000;  // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR86 = 0x400000;  // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR87 = 0x800000;  // CPU Interrupt Mask on Direct Event input x+64
    static constexpr uint32_t CPUIMR3_MR88 = 0x1000000; // CPU Interrupt Mask on Direct Event input x+64

    static constexpr uint32_t CPUEMR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUEMR3_MR64 = 0x1;       // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR65 = 0x2;       // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR66 = 0x4;       // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR67 = 0x8;       // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR68 = 0x10;      // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR69 = 0x20;      // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR70 = 0x40;      // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR71 = 0x80;      // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR72 = 0x100;     // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR73 = 0x200;     // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR74 = 0x400;     // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR75 = 0x800;     // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR76 = 0x1000;    // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR77 = 0x2000;    // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR78 = 0x4000;    // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR79 = 0x8000;    // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR80 = 0x10000;   // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR82 = 0x40000;   // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR84 = 0x100000;  // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR85 = 0x200000;  // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR86 = 0x400000;  // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR87 = 0x800000;  // CPU Event mask on Event input x+64
    static constexpr uint32_t CPUEMR3_MR88 = 0x1000000; // CPU Event mask on Event input x+64

    static constexpr uint32_t CPUPR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUPR3_PR82 = 0x40000;  // Configurable event inputs x+64 Pending bit
    static constexpr uint32_t CPUPR3_PR84 = 0x100000; // Configurable event inputs x+64 Pending bit
    static constexpr uint32_t CPUPR3_PR85 = 0x200000; // Configurable event inputs x+64 Pending bit
    static constexpr uint32_t CPUPR3_PR86 = 0x400000; // Configurable event inputs x+64 Pending bit
};


template<>
struct peripheral_t<STM32H742x, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, EXTI>
{
    typedef stm32h742x_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

