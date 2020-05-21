#pragma once

////
//
//      STM32L0 LCD peripherals
//
////

////
//
//      Liquid crystal display controller
//
////

struct stm32l0x3_lcd_t
{
    volatile uint32_t CR;         // [read-write] control register
    volatile uint32_t FCR;        // [read-write] frame control register
    volatile uint32_t SR;         // status register
    volatile uint32_t CLR;        // [write-only] clear register
    reserved_t<0x1> _0x14;
    volatile uint32_t RAM_COM0_0; // [read-write] display memory
    volatile uint32_t RAM_COM0_1; // [read-write] display memory
    volatile uint32_t RAM_COM1_0; // [read-write] display memory
    volatile uint32_t RAM_COM1_1; // [read-write] display memory
    volatile uint32_t RAM_COM2_0; // [read-write] display memory
    volatile uint32_t RAM_COM2_1; // [read-write] display memory
    volatile uint32_t RAM_COM3_0; // [read-write] display memory
    volatile uint32_t RAM_COM3_1; // [read-write] display memory
    volatile uint32_t RAM_COM4_0; // [read-write] display memory
    volatile uint32_t RAM_COM4_1; // [read-write] display memory
    volatile uint32_t RAM_COM5_0; // [read-write] display memory
    volatile uint32_t RAM_COM5_1; // [read-write] display memory
    volatile uint32_t RAM_COM6_0; // [read-write] display memory
    volatile uint32_t RAM_COM6_1; // [read-write] display memory
    volatile uint32_t RAM_COM7_0; // [read-write] display memory
    volatile uint32_t RAM_COM7_1; // [read-write] display memory

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_MUX_SEG = 0x80; // Mux segment enable
    template<uint32_t X>
    static constexpr uint32_t CR_BIAS =          // Bias selector
        bit_field_t<5, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_DUTY =          // Duty selection
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CR_VSEL = 0x2;     // Voltage source selection
    static constexpr uint32_t CR_LCDEN = 0x1;    // LCD controller enable

    static constexpr uint32_t FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FCR_PS =         // PS 16-bit prescaler
        bit_field_t<22, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCR_DIV =        // DIV clock divider
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCR_BLINK =      // Blink mode selection
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCR_BLINKF =     // Blink frequency selection
        bit_field_t<13, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCR_CC =         // Contrast control
        bit_field_t<10, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCR_DEAD =       // Dead time duration
        bit_field_t<7, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCR_PON =        // Pulse ON duration
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t FCR_UDDIE = 0x8; // Update display done interrupt enable
    static constexpr uint32_t FCR_SOFIE = 0x2; // Start of frame interrupt enable
    static constexpr uint32_t FCR_HD = 0x1;    // High drive enable

    static constexpr uint32_t SR_RESET_VALUE = 0x20;
    static constexpr uint32_t SR_FCRSF = 0x20; // LCD Frame Control Register Synchronization flag
    static constexpr uint32_t SR_RDY = 0x10;   // Ready flag
    static constexpr uint32_t SR_UDD = 0x8;    // Update Display Done
    static constexpr uint32_t SR_UDR = 0x4;    // Update display request
    static constexpr uint32_t SR_SOF = 0x2;    // Start of frame flag
    static constexpr uint32_t SR_ENS = 0x1;    // ENS

    static constexpr uint32_t CLR_RESET_VALUE = 0x0;
    static constexpr uint32_t CLR_UDDC = 0x8; // Update display done clear
    static constexpr uint32_t CLR_SOFC = 0x2; // Start of frame flag clear

    static constexpr uint32_t RAM_COM0_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM0_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM0_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM0_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM0_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM0_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM0_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM0_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM0_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM0_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM0_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM0_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM0_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM0_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM0_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM0_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM0_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM0_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM0_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM0_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM0_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM0_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM0_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM0_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM0_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM0_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM0_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM0_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM0_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM0_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM0_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM0_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM0_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM0_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM0_1_S51 = 0x80000; // S51
    static constexpr uint32_t RAM_COM0_1_S50 = 0x40000; // S50
    static constexpr uint32_t RAM_COM0_1_S49 = 0x20000; // S49
    static constexpr uint32_t RAM_COM0_1_S48 = 0x10000; // S48
    static constexpr uint32_t RAM_COM0_1_S47 = 0x8000;  // S47
    static constexpr uint32_t RAM_COM0_1_S46 = 0x4000;  // S46
    static constexpr uint32_t RAM_COM0_1_S45 = 0x2000;  // S45
    static constexpr uint32_t RAM_COM0_1_S44 = 0x1000;  // S44
    static constexpr uint32_t RAM_COM0_1_S43 = 0x800;   // S43
    static constexpr uint32_t RAM_COM0_1_S42 = 0x400;   // S42
    static constexpr uint32_t RAM_COM0_1_S41 = 0x200;   // S41
    static constexpr uint32_t RAM_COM0_1_S40 = 0x100;   // S40
    static constexpr uint32_t RAM_COM0_1_S39 = 0x80;    // S39
    static constexpr uint32_t RAM_COM0_1_S38 = 0x40;    // S38
    static constexpr uint32_t RAM_COM0_1_S37 = 0x20;    // S37
    static constexpr uint32_t RAM_COM0_1_S36 = 0x10;    // S36
    static constexpr uint32_t RAM_COM0_1_S35 = 0x8;     // S35
    static constexpr uint32_t RAM_COM0_1_S34 = 0x4;     // S34
    static constexpr uint32_t RAM_COM0_1_S33 = 0x2;     // S33
    static constexpr uint32_t RAM_COM0_1_S32 = 0x1;     // S32

    static constexpr uint32_t RAM_COM1_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM1_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM1_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM1_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM1_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM1_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM1_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM1_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM1_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM1_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM1_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM1_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM1_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM1_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM1_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM1_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM1_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM1_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM1_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM1_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM1_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM1_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM1_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM1_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM1_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM1_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM1_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM1_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM1_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM1_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM1_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM1_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM1_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM1_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM1_1_S51 = 0x80000; // S51
    static constexpr uint32_t RAM_COM1_1_S50 = 0x40000; // S50
    static constexpr uint32_t RAM_COM1_1_S49 = 0x20000; // S49
    static constexpr uint32_t RAM_COM1_1_S48 = 0x10000; // S48
    static constexpr uint32_t RAM_COM1_1_S47 = 0x8000;  // S47
    static constexpr uint32_t RAM_COM1_1_S46 = 0x4000;  // S46
    static constexpr uint32_t RAM_COM1_1_S45 = 0x2000;  // S45
    static constexpr uint32_t RAM_COM1_1_S44 = 0x1000;  // S44
    static constexpr uint32_t RAM_COM1_1_S43 = 0x800;   // S43
    static constexpr uint32_t RAM_COM1_1_S42 = 0x400;   // S42
    static constexpr uint32_t RAM_COM1_1_S41 = 0x200;   // S41
    static constexpr uint32_t RAM_COM1_1_S40 = 0x100;   // S40
    static constexpr uint32_t RAM_COM1_1_S39 = 0x80;    // S39
    static constexpr uint32_t RAM_COM1_1_S38 = 0x40;    // S38
    static constexpr uint32_t RAM_COM1_1_S37 = 0x20;    // S37
    static constexpr uint32_t RAM_COM1_1_S36 = 0x10;    // S36
    static constexpr uint32_t RAM_COM1_1_S35 = 0x8;     // S35
    static constexpr uint32_t RAM_COM1_1_S34 = 0x4;     // S34
    static constexpr uint32_t RAM_COM1_1_S33 = 0x2;     // S33
    static constexpr uint32_t RAM_COM1_1_S32 = 0x1;     // S32

    static constexpr uint32_t RAM_COM2_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM2_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM2_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM2_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM2_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM2_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM2_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM2_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM2_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM2_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM2_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM2_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM2_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM2_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM2_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM2_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM2_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM2_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM2_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM2_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM2_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM2_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM2_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM2_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM2_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM2_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM2_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM2_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM2_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM2_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM2_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM2_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM2_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM2_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM2_1_S51 = 0x80000; // S51
    static constexpr uint32_t RAM_COM2_1_S50 = 0x40000; // S50
    static constexpr uint32_t RAM_COM2_1_S49 = 0x20000; // S49
    static constexpr uint32_t RAM_COM2_1_S48 = 0x10000; // S48
    static constexpr uint32_t RAM_COM2_1_S47 = 0x8000;  // S47
    static constexpr uint32_t RAM_COM2_1_S46 = 0x4000;  // S46
    static constexpr uint32_t RAM_COM2_1_S45 = 0x2000;  // S45
    static constexpr uint32_t RAM_COM2_1_S44 = 0x1000;  // S44
    static constexpr uint32_t RAM_COM2_1_S43 = 0x800;   // S43
    static constexpr uint32_t RAM_COM2_1_S42 = 0x400;   // S42
    static constexpr uint32_t RAM_COM2_1_S41 = 0x200;   // S41
    static constexpr uint32_t RAM_COM2_1_S40 = 0x100;   // S40
    static constexpr uint32_t RAM_COM2_1_S39 = 0x80;    // S39
    static constexpr uint32_t RAM_COM2_1_S38 = 0x40;    // S38
    static constexpr uint32_t RAM_COM2_1_S37 = 0x20;    // S37
    static constexpr uint32_t RAM_COM2_1_S36 = 0x10;    // S36
    static constexpr uint32_t RAM_COM2_1_S35 = 0x8;     // S35
    static constexpr uint32_t RAM_COM2_1_S34 = 0x4;     // S34
    static constexpr uint32_t RAM_COM2_1_S33 = 0x2;     // S33
    static constexpr uint32_t RAM_COM2_1_S32 = 0x1;     // S32

    static constexpr uint32_t RAM_COM3_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM3_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM3_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM3_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM3_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM3_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM3_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM3_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM3_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM3_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM3_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM3_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM3_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM3_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM3_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM3_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM3_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM3_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM3_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM3_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM3_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM3_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM3_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM3_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM3_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM3_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM3_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM3_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM3_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM3_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM3_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM3_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM3_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM3_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM3_1_S51 = 0x80000; // S51
    static constexpr uint32_t RAM_COM3_1_S50 = 0x40000; // S50
    static constexpr uint32_t RAM_COM3_1_S49 = 0x20000; // S49
    static constexpr uint32_t RAM_COM3_1_S48 = 0x10000; // S48
    static constexpr uint32_t RAM_COM3_1_S47 = 0x8000;  // S47
    static constexpr uint32_t RAM_COM3_1_S46 = 0x4000;  // S46
    static constexpr uint32_t RAM_COM3_1_S45 = 0x2000;  // S45
    static constexpr uint32_t RAM_COM3_1_S44 = 0x1000;  // S44
    static constexpr uint32_t RAM_COM3_1_S43 = 0x800;   // S43
    static constexpr uint32_t RAM_COM3_1_S42 = 0x400;   // S42
    static constexpr uint32_t RAM_COM3_1_S41 = 0x200;   // S41
    static constexpr uint32_t RAM_COM3_1_S40 = 0x100;   // S40
    static constexpr uint32_t RAM_COM3_1_S39 = 0x80;    // S39
    static constexpr uint32_t RAM_COM3_1_S38 = 0x40;    // S38
    static constexpr uint32_t RAM_COM3_1_S37 = 0x20;    // S37
    static constexpr uint32_t RAM_COM3_1_S36 = 0x10;    // S36
    static constexpr uint32_t RAM_COM3_1_S35 = 0x8;     // S35
    static constexpr uint32_t RAM_COM3_1_S34 = 0x4;     // S34
    static constexpr uint32_t RAM_COM3_1_S33 = 0x2;     // S33
    static constexpr uint32_t RAM_COM3_1_S32 = 0x1;     // S32

    static constexpr uint32_t RAM_COM4_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM4_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM4_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM4_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM4_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM4_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM4_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM4_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM4_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM4_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM4_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM4_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM4_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM4_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM4_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM4_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM4_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM4_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM4_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM4_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM4_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM4_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM4_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM4_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM4_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM4_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM4_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM4_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM4_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM4_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM4_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM4_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM4_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM4_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM4_1_S47 = 0x8000; // S47
    static constexpr uint32_t RAM_COM4_1_S46 = 0x4000; // S46
    static constexpr uint32_t RAM_COM4_1_S45 = 0x2000; // S45
    static constexpr uint32_t RAM_COM4_1_S44 = 0x1000; // S44
    static constexpr uint32_t RAM_COM4_1_S43 = 0x800;  // S43
    static constexpr uint32_t RAM_COM4_1_S42 = 0x400;  // S42
    static constexpr uint32_t RAM_COM4_1_S41 = 0x200;  // S41
    static constexpr uint32_t RAM_COM4_1_S40 = 0x100;  // S40
    static constexpr uint32_t RAM_COM4_1_S39 = 0x80;   // S39
    static constexpr uint32_t RAM_COM4_1_S38 = 0x40;   // S38
    static constexpr uint32_t RAM_COM4_1_S37 = 0x20;   // S37
    static constexpr uint32_t RAM_COM4_1_S36 = 0x10;   // S36
    static constexpr uint32_t RAM_COM4_1_S35 = 0x8;    // S35
    static constexpr uint32_t RAM_COM4_1_S34 = 0x4;    // S34
    static constexpr uint32_t RAM_COM4_1_S33 = 0x2;    // S33
    static constexpr uint32_t RAM_COM4_1_S32 = 0x1;    // S32

    static constexpr uint32_t RAM_COM5_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM5_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM5_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM5_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM5_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM5_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM5_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM5_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM5_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM5_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM5_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM5_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM5_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM5_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM5_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM5_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM5_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM5_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM5_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM5_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM5_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM5_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM5_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM5_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM5_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM5_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM5_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM5_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM5_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM5_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM5_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM5_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM5_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM5_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM5_1_S47 = 0x8000; // S47
    static constexpr uint32_t RAM_COM5_1_S46 = 0x4000; // S46
    static constexpr uint32_t RAM_COM5_1_S45 = 0x2000; // S45
    static constexpr uint32_t RAM_COM5_1_S44 = 0x1000; // S44
    static constexpr uint32_t RAM_COM5_1_S43 = 0x800;  // S43
    static constexpr uint32_t RAM_COM5_1_S42 = 0x400;  // S42
    static constexpr uint32_t RAM_COM5_1_S41 = 0x200;  // S41
    static constexpr uint32_t RAM_COM5_1_S40 = 0x100;  // S40
    static constexpr uint32_t RAM_COM5_1_S39 = 0x80;   // S39
    static constexpr uint32_t RAM_COM5_1_S38 = 0x40;   // S38
    static constexpr uint32_t RAM_COM5_1_S37 = 0x20;   // S37
    static constexpr uint32_t RAM_COM5_1_S36 = 0x10;   // S36
    static constexpr uint32_t RAM_COM5_1_S35 = 0x8;    // S35
    static constexpr uint32_t RAM_COM5_1_S34 = 0x4;    // S34
    static constexpr uint32_t RAM_COM5_1_S33 = 0x2;    // S33
    static constexpr uint32_t RAM_COM5_1_S32 = 0x1;    // S32

    static constexpr uint32_t RAM_COM6_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM6_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM6_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM6_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM6_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM6_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM6_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM6_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM6_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM6_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM6_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM6_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM6_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM6_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM6_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM6_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM6_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM6_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM6_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM6_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM6_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM6_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM6_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM6_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM6_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM6_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM6_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM6_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM6_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM6_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM6_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM6_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM6_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM6_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM6_1_S47 = 0x8000; // S47
    static constexpr uint32_t RAM_COM6_1_S46 = 0x4000; // S46
    static constexpr uint32_t RAM_COM6_1_S45 = 0x2000; // S45
    static constexpr uint32_t RAM_COM6_1_S44 = 0x1000; // S44
    static constexpr uint32_t RAM_COM6_1_S43 = 0x800;  // S43
    static constexpr uint32_t RAM_COM6_1_S42 = 0x400;  // S42
    static constexpr uint32_t RAM_COM6_1_S41 = 0x200;  // S41
    static constexpr uint32_t RAM_COM6_1_S40 = 0x100;  // S40
    static constexpr uint32_t RAM_COM6_1_S39 = 0x80;   // S39
    static constexpr uint32_t RAM_COM6_1_S38 = 0x40;   // S38
    static constexpr uint32_t RAM_COM6_1_S37 = 0x20;   // S37
    static constexpr uint32_t RAM_COM6_1_S36 = 0x10;   // S36
    static constexpr uint32_t RAM_COM6_1_S35 = 0x8;    // S35
    static constexpr uint32_t RAM_COM6_1_S34 = 0x4;    // S34
    static constexpr uint32_t RAM_COM6_1_S33 = 0x2;    // S33
    static constexpr uint32_t RAM_COM6_1_S32 = 0x1;    // S32

    static constexpr uint32_t RAM_COM7_0_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM7_0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM7_0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM7_0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM7_0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM7_0_S27 = 0x8000000;  // S27
    static constexpr uint32_t RAM_COM7_0_S26 = 0x4000000;  // S26
    static constexpr uint32_t RAM_COM7_0_S25 = 0x2000000;  // S25
    static constexpr uint32_t RAM_COM7_0_S24 = 0x1000000;  // S24
    static constexpr uint32_t RAM_COM7_0_S23 = 0x800000;   // S23
    static constexpr uint32_t RAM_COM7_0_S22 = 0x400000;   // S22
    static constexpr uint32_t RAM_COM7_0_S21 = 0x200000;   // S21
    static constexpr uint32_t RAM_COM7_0_S20 = 0x100000;   // S20
    static constexpr uint32_t RAM_COM7_0_S19 = 0x80000;    // S19
    static constexpr uint32_t RAM_COM7_0_S18 = 0x40000;    // S18
    static constexpr uint32_t RAM_COM7_0_S17 = 0x20000;    // S17
    static constexpr uint32_t RAM_COM7_0_S16 = 0x10000;    // S16
    static constexpr uint32_t RAM_COM7_0_S15 = 0x8000;     // S15
    static constexpr uint32_t RAM_COM7_0_S14 = 0x4000;     // S14
    static constexpr uint32_t RAM_COM7_0_S13 = 0x2000;     // S13
    static constexpr uint32_t RAM_COM7_0_S12 = 0x1000;     // S12
    static constexpr uint32_t RAM_COM7_0_S11 = 0x800;      // S11
    static constexpr uint32_t RAM_COM7_0_S10 = 0x400;      // S10
    static constexpr uint32_t RAM_COM7_0_S09 = 0x200;      // S09
    static constexpr uint32_t RAM_COM7_0_S08 = 0x100;      // S08
    static constexpr uint32_t RAM_COM7_0_S07 = 0x80;       // S07
    static constexpr uint32_t RAM_COM7_0_S06 = 0x40;       // S06
    static constexpr uint32_t RAM_COM7_0_S05 = 0x20;       // S05
    static constexpr uint32_t RAM_COM7_0_S04 = 0x10;       // S04
    static constexpr uint32_t RAM_COM7_0_S03 = 0x8;        // S03
    static constexpr uint32_t RAM_COM7_0_S02 = 0x4;        // S02
    static constexpr uint32_t RAM_COM7_0_S01 = 0x2;        // S01
    static constexpr uint32_t RAM_COM7_0_S00 = 0x1;        // S00

    static constexpr uint32_t RAM_COM7_1_RESET_VALUE = 0x0;
    static constexpr uint32_t RAM_COM7_1_S47 = 0x8000; // S47
    static constexpr uint32_t RAM_COM7_1_S46 = 0x4000; // S46
    static constexpr uint32_t RAM_COM7_1_S45 = 0x2000; // S45
    static constexpr uint32_t RAM_COM7_1_S44 = 0x1000; // S44
    static constexpr uint32_t RAM_COM7_1_S43 = 0x800;  // S43
    static constexpr uint32_t RAM_COM7_1_S42 = 0x400;  // S42
    static constexpr uint32_t RAM_COM7_1_S41 = 0x200;  // S41
    static constexpr uint32_t RAM_COM7_1_S40 = 0x100;  // S40
    static constexpr uint32_t RAM_COM7_1_S39 = 0x80;   // S39
    static constexpr uint32_t RAM_COM7_1_S38 = 0x40;   // S38
    static constexpr uint32_t RAM_COM7_1_S37 = 0x20;   // S37
    static constexpr uint32_t RAM_COM7_1_S36 = 0x10;   // S36
    static constexpr uint32_t RAM_COM7_1_S35 = 0x8;    // S35
    static constexpr uint32_t RAM_COM7_1_S34 = 0x4;    // S34
    static constexpr uint32_t RAM_COM7_1_S33 = 0x2;    // S33
    static constexpr uint32_t RAM_COM7_1_S32 = 0x1;    // S32
};


template<>
struct peripheral_t<STM32L0x3, LCD>
{
    typedef stm32l0x3_lcd_t T;
    static T& V;
};

using lcd_t = peripheral_t<mcu_svd, LCD>;

