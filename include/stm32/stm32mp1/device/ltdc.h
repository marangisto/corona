#pragma once

////
//
//      STM32MP1 LTDC peripherals
//
////

////
//
//      LTDC
//
////

struct stm32mp15xxx_ltdc_t
{
    volatile uint32_t LTDC_IDR;      // [read-only] LTDC identification register
    volatile uint32_t LTDC_LCR;      // [read-only] LDTC layer count register
    volatile uint32_t LTDC_SSCR;     // [read-write] This register defines the number of horizontal synchronization pixels minus 1 and the number of vertical synchronization lines minus 1. Refer to Figure274 and Section36.4: LTDC programmable parameters for an example of configuration.
    volatile uint32_t LTDC_BPCR;     // [read-write] This register defines the accumulated number of horizontal synchronization and back porch pixels minus 1 (HSYNCwidth+HBP-1) and the accumulated number of vertical synchronization and back porch lines minus 1 (VSYNCheight+VBP-1). Refer to Figure274 and Section36.4: LTDC programmable parameters for an example of configuration.
    volatile uint32_t LTDC_AWCR;     // [read-write] This register defines the accumulated number of horizontal synchronization, back porch and active pixels minus 1 (HSYNC width+HBP+activewidth-1) and the accumulated number of vertical synchronization, back porch lines and active lines minus 1 (VSYNCheight+BVBP+activeheight-1). Refer to Figure274 and Section36.4: LTDC programmable parameters for an example of configuration.
    volatile uint32_t LTDC_TWCR;     // [read-write] This register defines the accumulated number of horizontal synchronization, back porch, active and front porch pixels minus 1 (HSYNCwidth+HBP+activewidth+HFP-1) and the accumulated number of vertical synchronization, back porch lines, active and front lines minus 1 (VSYNCheight+BVBP+activeheight+VFP-1). Refer to Figure274 and Section36.4: LTDC programmable parameters for an example of configuration.
    volatile uint32_t LTDC_GCR;      // This register defines the global configuration of the LCD-TFT controller.
    volatile uint32_t LTDC_GC1R;     // [read-only] LTDC global configuration 1 register
    volatile uint32_t LTDC_GC2R;     // [read-only] LTDC global configuration 2 register
    volatile uint32_t LTDC_SRCR;     // [read-write] This register allows to reload either immediately or during the vertical blanking period, the shadow registers values to the active registers. The shadow registers are all Layer1 and Layer2 registers except the LTDC_L1CLUTWR and the LTDC_L2CLUTWR.
    reserved_t<0x1> _0x2c;
    volatile uint32_t LTDC_BCCR;     // [read-write] This register defines the background color (RGB888).
    reserved_t<0x1> _0x34;
    volatile uint32_t LTDC_IER;      // [read-write] This register determines which status flags generate an interrupt request by setting the corresponding bit to 1.
    volatile uint32_t LTDC_ISR;      // [read-only] This register returns the interrupt status flag.
    volatile uint32_t LTDC_ICR;      // [write-only] LTDC Interrupt Clear Register
    volatile uint32_t LTDC_LIPCR;    // [read-write] This register defines the position of the line interrupt. The line value to be programmed depends on the timings parameters. Refer to Figure274.
    volatile uint32_t LTDC_CPSR;     // [read-only] LTDC current position status register
    volatile uint32_t LTDC_CDSR;     // [read-only] This register returns the status of the current display phase which is controlled by the HSYNC, VSYNC, and horizontal/vertical DE signals. Example: if the current display phase is the vertical synchronization, the VSYNCS bit is set (active high). If the current display phase is the horizontal synchronization, the HSYNCS bit is active high.
    reserved_t<0xe> _0x84;
    volatile uint32_t LTDC_L1CR;     // [read-write] LTDC layer 1 control register
    volatile uint32_t LTDC_L1WHPCR;  // [read-write] This register defines the horizontal position (first and last pixel) of the layer 1 or 2 window. The first visible pixel of a line is the programmed value of AHBP[11:0] bits + 1 in the LTDC_BPCR register. The last visible pixel of a line is the programmed value of AAW[11:0] bits in the LTDC_AWCR register.
    volatile uint32_t LTDC_L1WVPCR;  // [read-write] This register defines the vertical position (first and last line) of the layer1 or 2 window. The first visible line of a frame is the programmed value of AVBP[11:0] bits + 1 in the register LTDC_BPCR register. The last visible line of a frame is the programmed value of AAH[11:0] bits in the LTDC_AWCR register.
    volatile uint32_t LTDC_L1CKCR;   // [read-write] This register defines the color key value (RGB), that is used by the color keying.
    volatile uint32_t LTDC_L1PFCR;   // [read-write] This register defines the pixel format that is used for the stored data in the frame buffer of a layer. The pixel data is read from the frame buffer and then transformed to the internal format 8888 (ARGB).
    volatile uint32_t LTDC_L1CACR;   // [read-write] This register defines the constant alpha value (divided by 255 by hardware), that is used in the alpha blending. Refer to LTDC_LxBFCR register.
    volatile uint32_t LTDC_L1DCCR;   // [read-write] This register defines the default color of a layer in the format ARGB. The default color is used outside the defined layer window or when a layer is disabled. The reset value of 0x00000000 defines a transparent black color.
    volatile uint32_t LTDC_L1BFCR;   // [read-write] This register defines the blending factors F1 and F2. The general blending formula is: BC = BF1 x C + BF2 x Cs BC = blended color BF1 = blend factor 1 C = current layer color BF2 = blend factor 2 Cs = subjacent layers blended color
    reserved_t<0x2> _0xac;
    volatile uint32_t LTDC_L1CFBAR;  // [read-write] This register defines the color frame buffer start address which has to point to the address where the pixel data of the top left pixel of a layer is stored in the frame buffer.
    volatile uint32_t LTDC_L1CFBLR;  // [read-write] This register defines the color frame buffer line length and pitch.
    volatile uint32_t LTDC_L1CFBLNR; // [read-write] This register defines the number of lines in the color frame buffer.
    reserved_t<0x3> _0xc4;
    volatile uint32_t LTDC_L1CLUTWR; // [write-only] This register defines the CLUT address and the RGB value.
    reserved_t<0xf> _0x104;
    volatile uint32_t LTDC_L2CR;     // [read-write] LTDC layer 2 control register
    volatile uint32_t LTDC_L2WHPCR;  // [read-write] This register defines the horizontal position (first and last pixel) of the layer 1 or 2 window. The first visible pixel of a line is the programmed value of AHBP[11:0] bits + 1 in the LTDC_BPCR register. The last visible pixel of a line is the programmed value of AAW[11:0] bits in the LTDC_AWCR register.
    volatile uint32_t LTDC_L2WVPCR;  // [read-write] This register defines the vertical position (first and last line) of the layer1 or 2 window. The first visible line of a frame is the programmed value of AVBP[11:0] bits + 1 in the register LTDC_BPCR register. The last visible line of a frame is the programmed value of AAH[11:0] bits in the LTDC_AWCR register.
    volatile uint32_t LTDC_L2CKCR;   // [read-write] This register defines the color key value (RGB), that is used by the color keying.
    volatile uint32_t LTDC_L2PFCR;   // [read-write] This register defines the pixel format that is used for the stored data in the frame buffer of a layer. The pixel data is read from the frame buffer and then transformed to the internal format 8888 (ARGB).
    volatile uint32_t LTDC_L2CACR;   // [read-write] This register defines the constant alpha value (divided by 255 by hardware), that is used in the alpha blending. Refer to LTDC_LxBFCR register.
    volatile uint32_t LTDC_L2DCCR;   // [read-write] This register defines the default color of a layer in the format ARGB. The default color is used outside the defined layer window or when a layer is disabled. The reset value of 0x00000000 defines a transparent black color.
    volatile uint32_t LTDC_L2BFCR;   // [read-write] This register defines the blending factors F1 and F2. The general blending formula is: BC = BF1 x C + BF2 x Cs BC = blended color BF1 = blend factor 1 C = current layer color BF2 = blend factor 2 Cs = subjacent layers blended color
    reserved_t<0x2> _0x12c;
    volatile uint32_t LTDC_L2CFBAR;  // [read-write] This register defines the color frame buffer start address which has to point to the address where the pixel data of the top left pixel of a layer is stored in the frame buffer.
    volatile uint32_t LTDC_L2CFBLR;  // [read-write] This register defines the color frame buffer line length and pitch.
    volatile uint32_t LTDC_L2CFBLNR; // [read-write] This register defines the number of lines in the color frame buffer.
    reserved_t<0x3> _0x144;
    volatile uint32_t LTDC_L2CLUTWR; // [write-only] This register defines the CLUT address and the RGB value.

    static constexpr uint32_t LTDC_IDR_RESET_VALUE = 0x10300;
    template<uint32_t X>
    static constexpr uint32_t LTDC_IDR_REV =      // REV
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_IDR_MINVER =   // MINVER
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_IDR_MAJVER =   // MAJVER
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LTDC_LCR_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t LTDC_LCR_LNBR =   // LNBR
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t LTDC_SSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_SSCR_VSH =   // VSH
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_SSCR_HSW =   // HSW
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_BPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_BPCR_AVBP =   // AVBP
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_BPCR_AHBP =   // AHBP
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_AWCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_AWCR_AAH =   // AAH
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_AWCR_AAW =   // AAW
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_TWCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_TWCR_TOTALH =   // TOTALH
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_TWCR_TOTALW =   // TOTALW
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_GCR_RESET_VALUE = 0x2220;
    static constexpr uint32_t LTDC_GCR_LTDCEN = 0x1;       // LTDCEN
    template<uint32_t X>
    static constexpr uint32_t LTDC_GCR_DBW =               // DBW
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_GCR_DGW =               // DGW
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_GCR_DRW =               // DRW
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t LTDC_GCR_DEN = 0x10000;      // DEN
    static constexpr uint32_t LTDC_GCR_PCPOL = 0x10000000; // PCPOL
    static constexpr uint32_t LTDC_GCR_DEPOL = 0x20000000; // DEPOL
    static constexpr uint32_t LTDC_GCR_VSPOL = 0x40000000; // VSPOL
    static constexpr uint32_t LTDC_GCR_HSPOL = 0x80000000; // HSPOL

    static constexpr uint32_t LTDC_GC1R_RESET_VALUE = 0x6be2d888;
    template<uint32_t X>
    static constexpr uint32_t LTDC_GC1R_WBCH =              // WBCH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_GC1R_WGCH =              // WGCH
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_GC1R_WRCH =              // WRCH
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t LTDC_GC1R_PRBEN = 0x1000;     // PRBEN
    template<uint32_t X>
    static constexpr uint32_t LTDC_GC1R_DT =                // DT
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_GC1R_GCT =               // GCT
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t LTDC_GC1R_SHREN = 0x200000;   // SHREN
    static constexpr uint32_t LTDC_GC1R_BCP = 0x400000;     // BCP
    static constexpr uint32_t LTDC_GC1R_BBEN = 0x800000;    // BBEN
    static constexpr uint32_t LTDC_GC1R_LNIP = 0x1000000;   // LNIP
    static constexpr uint32_t LTDC_GC1R_TP = 0x2000000;     // TP
    static constexpr uint32_t LTDC_GC1R_IPP = 0x4000000;    // IPP
    static constexpr uint32_t LTDC_GC1R_SPP = 0x8000000;    // SPP
    static constexpr uint32_t LTDC_GC1R_DWP = 0x10000000;   // DWP
    static constexpr uint32_t LTDC_GC1R_STREN = 0x20000000; // STREN
    static constexpr uint32_t LTDC_GC1R_BMEN = 0x80000000;  // BMEN

    static constexpr uint32_t LTDC_GC2R_RESET_VALUE = 0x30;
    static constexpr uint32_t LTDC_GC2R_EDCEN = 0x1;  // EDCEN
    static constexpr uint32_t LTDC_GC2R_STSAEN = 0x2; // STSAEN
    static constexpr uint32_t LTDC_GC2R_DVAEN = 0x4;  // DVAEN
    static constexpr uint32_t LTDC_GC2R_DPAEN = 0x8;  // DPAEN
    template<uint32_t X>
    static constexpr uint32_t LTDC_GC2R_BW =          // BW
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t LTDC_GC2R_EDCA = 0x80;  // EDCA

    static constexpr uint32_t LTDC_SRCR_RESET_VALUE = 0x0;
    static constexpr uint32_t LTDC_SRCR_IMR = 0x1; // IMR
    static constexpr uint32_t LTDC_SRCR_VBR = 0x2; // VBR

    static constexpr uint32_t LTDC_BCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_BCCR_BCBLUE =    // BCBLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_BCCR_BCGREEN =   // BCGREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_BCCR_BCRED =     // BCRED
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LTDC_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t LTDC_IER_LIE = 0x1;    // LIE
    static constexpr uint32_t LTDC_IER_FUIE = 0x2;   // FUIE
    static constexpr uint32_t LTDC_IER_TERRIE = 0x4; // TERRIE
    static constexpr uint32_t LTDC_IER_RRIE = 0x8;   // RRIE

    static constexpr uint32_t LTDC_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t LTDC_ISR_LIF = 0x1;    // LIF
    static constexpr uint32_t LTDC_ISR_FUIF = 0x2;   // FUIF
    static constexpr uint32_t LTDC_ISR_TERRIF = 0x4; // TERRIF
    static constexpr uint32_t LTDC_ISR_RRIF = 0x8;   // RRIF

    static constexpr uint32_t LTDC_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t LTDC_ICR_CLIF = 0x1;    // CLIF
    static constexpr uint32_t LTDC_ICR_CFUIF = 0x2;   // CFUIF
    static constexpr uint32_t LTDC_ICR_CTERRIF = 0x4; // CTERRIF
    static constexpr uint32_t LTDC_ICR_CRRIF = 0x8;   // CRRIF

    static constexpr uint32_t LTDC_LIPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_LIPCR_LIPOS =   // LIPOS
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_CPSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_CPSR_CYPOS =   // CYPOS
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_CPSR_CXPOS =   // CXPOS
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t LTDC_CDSR_RESET_VALUE = 0xf;
    static constexpr uint32_t LTDC_CDSR_VDES = 0x1;   // VDES
    static constexpr uint32_t LTDC_CDSR_HDES = 0x2;   // HDES
    static constexpr uint32_t LTDC_CDSR_VSYNCS = 0x4; // VSYNCS
    static constexpr uint32_t LTDC_CDSR_HSYNCS = 0x8; // HSYNCS

    static constexpr uint32_t LTDC_L1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t LTDC_L1CR_LEN = 0x1;     // LEN
    static constexpr uint32_t LTDC_L1CR_COLKEN = 0x2;  // COLKEN
    static constexpr uint32_t LTDC_L1CR_CLUTEN = 0x10; // CLUTEN

    static constexpr uint32_t LTDC_L1WHPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1WHPCR_WHSTPOS =   // WHSTPOS
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1WHPCR_WHSPPOS =   // WHSPPOS
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_L1WVPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1WVPCR_WVSTPOS =   // WVSTPOS
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1WVPCR_WVSPPOS =   // WVSPPOS
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_L1CKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CKCR_CKBLUE =    // CKBLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CKCR_CKGREEN =   // CKGREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CKCR_CKRED =     // CKRED
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L1PFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1PFCR_PF =   // PF
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t LTDC_L1CACR_RESET_VALUE = 0xff;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CACR_CONSTA =   // CONSTA
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L1DCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1DCCR_DCBLUE =    // DCBLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1DCCR_DCGREEN =   // DCGREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1DCCR_DCRED =     // DCRED
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1DCCR_DCALPHA =   // DCALPHA
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L1BFCR_RESET_VALUE = 0x607;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1BFCR_BF2 =   // BF2
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1BFCR_BF1 =   // BF1
        bit_field_t<8, 0x7>::value<X>();

    static constexpr uint32_t LTDC_L1CFBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t LTDC_L1CFBLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CFBLR_CFBLL =   // CFBLL
        bit_field_t<0, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CFBLR_CFBP =    // CFBP
        bit_field_t<16, 0x3fff>::value<X>();

    static constexpr uint32_t LTDC_L1CFBLNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CFBLNR_CFBLNBR =   // CFBLNBR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_L1CLUTWR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CLUTWR_BLUE =      // BLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CLUTWR_GREEN =     // GREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CLUTWR_RED =       // RED
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L1CLUTWR_CLUTADD =   // CLUTADD
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t LTDC_L2CR_LEN = 0x1;     // LEN
    static constexpr uint32_t LTDC_L2CR_COLKEN = 0x2;  // COLKEN
    static constexpr uint32_t LTDC_L2CR_CLUTEN = 0x10; // CLUTEN

    static constexpr uint32_t LTDC_L2WHPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2WHPCR_WHSTPOS =   // WHSTPOS
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2WHPCR_WHSPPOS =   // WHSPPOS
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_L2WVPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2WVPCR_WVSTPOS =   // WVSTPOS
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2WVPCR_WVSPPOS =   // WVSPPOS
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_L2CKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CKCR_CKBLUE =    // CKBLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CKCR_CKGREEN =   // CKGREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CKCR_CKRED =     // CKRED
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L2PFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2PFCR_PF =   // PF
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t LTDC_L2CACR_RESET_VALUE = 0xff;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CACR_CONSTA =   // CONSTA
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L2DCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2DCCR_DCBLUE =    // DCBLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2DCCR_DCGREEN =   // DCGREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2DCCR_DCRED =     // DCRED
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2DCCR_DCALPHA =   // DCALPHA
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t LTDC_L2BFCR_RESET_VALUE = 0x607;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2BFCR_BF2 =   // BF2
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2BFCR_BF1 =   // BF1
        bit_field_t<8, 0x7>::value<X>();

    static constexpr uint32_t LTDC_L2CFBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t LTDC_L2CFBLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CFBLR_CFBLL =   // CFBLL
        bit_field_t<0, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CFBLR_CFBP =    // CFBP
        bit_field_t<16, 0x3fff>::value<X>();

    static constexpr uint32_t LTDC_L2CFBLNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CFBLNR_CFBLNBR =   // CFBLNBR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t LTDC_L2CLUTWR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CLUTWR_BLUE =      // BLUE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CLUTWR_GREEN =     // GREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CLUTWR_RED =       // RED
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LTDC_L2CLUTWR_CLUTADD =   // CLUTADD
        bit_field_t<24, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, LTDC>
{
    typedef stm32mp15xxx_ltdc_t T;
    static T& V;
};

using ltdc_t = peripheral_t<mcu_svd, LTDC>;

