#pragma once

////
//
//      STM32WB LCD peripherals
//
///

// LCD: Liquid crystal display controller

struct stm32wb55_cm4_lcd_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t FCR; // frame control register
    volatile uint32_t SR; // status register
    volatile uint32_t CLR; // clear register
    reserved_t<0x1> _0x10;
    volatile uint32_t RAM_COM0; // display memory
    reserved_t<0x1> _0x18;
    volatile uint32_t RAM_COM1; // display memory
    reserved_t<0x1> _0x20;
    volatile uint32_t RAM_COM2; // display memory
    reserved_t<0x1> _0x28;
    volatile uint32_t RAM_COM3; // display memory
    reserved_t<0x1> _0x30;
    volatile uint32_t RAM_COM4; // display memory
    reserved_t<0x1> _0x38;
    volatile uint32_t RAM_COM5; // display memory
    reserved_t<0x1> _0x40;
    volatile uint32_t RAM_COM6; // display memory
    reserved_t<0x1> _0x48;
    volatile uint32_t RAM_COM7; // display memory

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<5, 0x3> CR_BIAS; // Bias selector
    typedef bit_field_t<2, 0x7> CR_DUTY; // Duty selection
    static constexpr uint32_t CR_VSEL = 0x2; // Voltage source selection
    static constexpr uint32_t CR_LCDEN = 0x1; // LCD controller enable
    static constexpr uint32_t CR_MUX_SEG = 0x80; // Mux segment enable
    static constexpr uint32_t CR_BUFEN = 0x100; // Voltage output buffer enable

    static constexpr uint32_t FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0xf> FCR_PS; // PS 16-bit prescaler
    typedef bit_field_t<18, 0xf> FCR_DIV; // DIV clock divider
    typedef bit_field_t<16, 0x3> FCR_BLINK; // Blink mode selection
    typedef bit_field_t<13, 0x7> FCR_BLINKF; // Blink frequency selection
    typedef bit_field_t<10, 0x7> FCR_CC; // Contrast control
    typedef bit_field_t<7, 0x7> FCR_DEAD; // Dead time duration
    typedef bit_field_t<4, 0x7> FCR_PON; // Pulse ON duration
    static constexpr uint32_t FCR_UDDIE = 0x8; // Update display done interrupt enable
    static constexpr uint32_t FCR_SOFIE = 0x2; // Start of frame interrupt enable
    static constexpr uint32_t FCR_HD = 0x1; // High drive enable

    static constexpr uint32_t SR_RESET_VALUE = 0x20; // Reset value
    static constexpr uint32_t SR_FCRSF = 0x20; // LCD Frame Control Register Synchronization flag
    static constexpr uint32_t SR_RDY = 0x10; // Ready flag
    static constexpr uint32_t SR_UDD = 0x8; // Update Display Done
    static constexpr uint32_t SR_UDR = 0x4; // Update display request
    static constexpr uint32_t SR_SOF = 0x2; // Start of frame flag
    static constexpr uint32_t SR_ENS = 0x1; // ENS

    static constexpr uint32_t CLR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLR_UDDC = 0x8; // Update display done clear
    static constexpr uint32_t CLR_SOFC = 0x2; // Start of frame flag clear


    static constexpr uint32_t RAM_COM0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM0_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM0_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM0_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM0_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM0_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM0_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM0_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM0_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM0_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM0_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM0_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM0_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM0_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM0_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM0_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM0_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM0_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM0_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM0_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM0_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM0_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM0_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM0_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM0_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM0_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM0_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM0_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM0_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM0_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM0_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM0_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM0_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM1_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM1_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM1_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM1_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM1_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM1_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM1_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM1_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM1_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM1_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM1_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM1_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM1_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM1_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM1_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM1_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM1_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM1_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM1_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM1_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM1_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM1_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM1_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM1_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM1_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM1_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM1_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM1_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM1_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM1_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM1_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM1_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM2_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM2_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM2_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM2_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM2_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM2_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM2_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM2_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM2_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM2_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM2_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM2_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM2_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM2_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM2_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM2_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM2_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM2_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM2_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM2_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM2_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM2_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM2_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM2_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM2_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM2_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM2_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM2_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM2_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM2_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM2_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM2_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM3_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM3_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM3_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM3_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM3_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM3_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM3_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM3_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM3_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM3_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM3_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM3_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM3_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM3_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM3_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM3_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM3_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM3_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM3_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM3_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM3_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM3_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM3_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM3_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM3_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM3_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM3_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM3_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM3_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM3_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM3_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM3_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM4_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM4_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM4_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM4_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM4_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM4_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM4_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM4_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM4_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM4_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM4_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM4_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM4_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM4_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM4_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM4_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM4_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM4_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM4_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM4_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM4_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM4_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM4_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM4_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM4_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM4_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM4_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM4_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM4_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM4_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM4_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM4_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM5_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM5_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM5_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM5_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM5_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM5_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM5_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM5_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM5_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM5_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM5_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM5_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM5_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM5_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM5_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM5_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM5_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM5_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM5_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM5_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM5_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM5_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM5_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM5_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM5_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM5_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM5_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM5_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM5_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM5_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM5_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM5_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM6_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM6_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM6_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM6_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM6_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM6_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM6_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM6_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM6_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM6_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM6_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM6_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM6_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM6_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM6_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM6_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM6_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM6_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM6_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM6_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM6_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM6_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM6_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM6_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM6_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM6_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM6_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM6_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM6_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM6_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM6_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM6_S00 = 0x1; // S00


    static constexpr uint32_t RAM_COM7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM_COM7_S31 = 0x80000000; // S31
    static constexpr uint32_t RAM_COM7_S30 = 0x40000000; // S30
    static constexpr uint32_t RAM_COM7_S29 = 0x20000000; // S29
    static constexpr uint32_t RAM_COM7_S28 = 0x10000000; // S28
    static constexpr uint32_t RAM_COM7_S27 = 0x8000000; // S27
    static constexpr uint32_t RAM_COM7_S26 = 0x4000000; // S26
    static constexpr uint32_t RAM_COM7_S25 = 0x2000000; // S25
    static constexpr uint32_t RAM_COM7_S24 = 0x1000000; // S24
    static constexpr uint32_t RAM_COM7_S23 = 0x800000; // S23
    static constexpr uint32_t RAM_COM7_S22 = 0x400000; // S22
    static constexpr uint32_t RAM_COM7_S21 = 0x200000; // S21
    static constexpr uint32_t RAM_COM7_S20 = 0x100000; // S20
    static constexpr uint32_t RAM_COM7_S19 = 0x80000; // S19
    static constexpr uint32_t RAM_COM7_S18 = 0x40000; // S18
    static constexpr uint32_t RAM_COM7_S17 = 0x20000; // S17
    static constexpr uint32_t RAM_COM7_S16 = 0x10000; // S16
    static constexpr uint32_t RAM_COM7_S15 = 0x8000; // S15
    static constexpr uint32_t RAM_COM7_S14 = 0x4000; // S14
    static constexpr uint32_t RAM_COM7_S13 = 0x2000; // S13
    static constexpr uint32_t RAM_COM7_S12 = 0x1000; // S12
    static constexpr uint32_t RAM_COM7_S11 = 0x800; // S11
    static constexpr uint32_t RAM_COM7_S10 = 0x400; // S10
    static constexpr uint32_t RAM_COM7_S09 = 0x200; // S09
    static constexpr uint32_t RAM_COM7_S08 = 0x100; // S08
    static constexpr uint32_t RAM_COM7_S07 = 0x80; // S07
    static constexpr uint32_t RAM_COM7_S06 = 0x40; // S06
    static constexpr uint32_t RAM_COM7_S05 = 0x20; // S05
    static constexpr uint32_t RAM_COM7_S04 = 0x10; // S04
    static constexpr uint32_t RAM_COM7_S03 = 0x8; // S03
    static constexpr uint32_t RAM_COM7_S02 = 0x4; // S02
    static constexpr uint32_t RAM_COM7_S01 = 0x2; // S01
    static constexpr uint32_t RAM_COM7_S00 = 0x1; // S00
};

template<>
struct peripheral_t<STM32WB55_CM4, LCD>
{
    static constexpr periph_t P = LCD;
    using T = stm32wb55_cm4_lcd_t;
    static T& V;
};

using lcd_t = peripheral_t<svd, LCD>;

template<int INST> struct lcd_traits {};

template<> struct lcd_traits<0>
{
    using lcd = lcd_t;
    static constexpr signal_t COM0 = LCD_COM0;
    static constexpr signal_t COM1 = LCD_COM1;
    static constexpr signal_t COM2 = LCD_COM2;
    static constexpr signal_t COM3 = LCD_COM3;
    static constexpr signal_t COM4 = LCD_COM4;
    static constexpr signal_t COM5 = LCD_COM5;
    static constexpr signal_t COM6 = LCD_COM6;
    static constexpr signal_t COM7 = LCD_COM7;
    static constexpr signal_t SEG0 = LCD_SEG0;
    static constexpr signal_t SEG1 = LCD_SEG1;
    static constexpr signal_t SEG10 = LCD_SEG10;
    static constexpr signal_t SEG11 = LCD_SEG11;
    static constexpr signal_t SEG12 = LCD_SEG12;
    static constexpr signal_t SEG13 = LCD_SEG13;
    static constexpr signal_t SEG14 = LCD_SEG14;
    static constexpr signal_t SEG15 = LCD_SEG15;
    static constexpr signal_t SEG16 = LCD_SEG16;
    static constexpr signal_t SEG17 = LCD_SEG17;
    static constexpr signal_t SEG18 = LCD_SEG18;
    static constexpr signal_t SEG19 = LCD_SEG19;
    static constexpr signal_t SEG2 = LCD_SEG2;
    static constexpr signal_t SEG20 = LCD_SEG20;
    static constexpr signal_t SEG21 = LCD_SEG21;
    static constexpr signal_t SEG22 = LCD_SEG22;
    static constexpr signal_t SEG23 = LCD_SEG23;
    static constexpr signal_t SEG24 = LCD_SEG24;
    static constexpr signal_t SEG25 = LCD_SEG25;
    static constexpr signal_t SEG26 = LCD_SEG26;
    static constexpr signal_t SEG27 = LCD_SEG27;
    static constexpr signal_t SEG28 = LCD_SEG28;
    static constexpr signal_t SEG29 = LCD_SEG29;
    static constexpr signal_t SEG3 = LCD_SEG3;
    static constexpr signal_t SEG30 = LCD_SEG30;
    static constexpr signal_t SEG31 = LCD_SEG31;
    static constexpr signal_t SEG32 = LCD_SEG32;
    static constexpr signal_t SEG33 = LCD_SEG33;
    static constexpr signal_t SEG34 = LCD_SEG34;
    static constexpr signal_t SEG35 = LCD_SEG35;
    static constexpr signal_t SEG36 = LCD_SEG36;
    static constexpr signal_t SEG37 = LCD_SEG37;
    static constexpr signal_t SEG38 = LCD_SEG38;
    static constexpr signal_t SEG39 = LCD_SEG39;
    static constexpr signal_t SEG4 = LCD_SEG4;
    static constexpr signal_t SEG40 = LCD_SEG40;
    static constexpr signal_t SEG41 = LCD_SEG41;
    static constexpr signal_t SEG42 = LCD_SEG42;
    static constexpr signal_t SEG43 = LCD_SEG43;
    static constexpr signal_t SEG5 = LCD_SEG5;
    static constexpr signal_t SEG6 = LCD_SEG6;
    static constexpr signal_t SEG7 = LCD_SEG7;
    static constexpr signal_t SEG8 = LCD_SEG8;
    static constexpr signal_t SEG9 = LCD_SEG9;
    static constexpr signal_t VLCD = LCD_VLCD;
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_LCDEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LCDEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LCDSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LCDSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LCDRST;
    }
};
