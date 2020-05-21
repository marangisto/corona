#pragma once

////
//
//      STM32F7 JPEG peripherals
//
////

////
//
//      JPEG codec
//
////

struct stm32f767_jpeg_t
{
    volatile uint32_t JPEG_CONFR0;    // [write-only] JPEG codec configuration register 0
    volatile uint32_t JPEG_CONFR1;    // [read-write] JPEG codec configuration register 1
    volatile uint32_t JPEG_CONFR2;    // [read-write] JPEG codec configuration register 2
    volatile uint32_t JPEG_CONFR3;    // [read-write] JPEG codec configuration register 3
    volatile uint32_t JPEG_CONFR4;    // [read-write] JPEG codec configuration register 4
    volatile uint32_t JPEG_CONFR5;    // [read-write] JPEG codec configuration register 5
    volatile uint32_t JPEG_CONFR6;    // [read-write] JPEG codec configuration register 6
    volatile uint32_t JPEG_CONFR7;    // [read-write] JPEG codec configuration register 7
    reserved_t<0x4> _0x30;
    volatile uint32_t JPEG_CR;        // JPEG control register
    volatile uint32_t JPEG_SR;        // [read-only] JPEG status register
    volatile uint32_t JPEG_CFR;       // [write-only] JPEG clear flag register
    reserved_t<0x1> _0x40;
    volatile uint32_t JPEG_DIR;       // [write-only] JPEG data input register
    volatile uint32_t JPEG_DOR;       // [read-only] JPEG data output register
    reserved_t<0x2> _0x50;
    volatile uint32_t QMEM0_0;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_1;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_2;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_3;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_4;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_5;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_6;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_7;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_8;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_9;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_10;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_11;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_12;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_13;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_14;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM0_15;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_0;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_1;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_2;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_3;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_4;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_5;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_6;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_7;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_8;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_9;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_10;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_11;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_12;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_13;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_14;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM1_15;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_0;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_1;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_2;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_3;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_4;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_5;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_6;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_7;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_8;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_9;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_10;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_11;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_12;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_13;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_14;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM2_15;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_0;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_1;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_2;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_3;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_4;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_5;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_6;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_7;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_8;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_9;        // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_10;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_11;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_12;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_13;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_14;       // [read-write] JPEG quantization tables
    volatile uint32_t QMEM3_15;       // [read-write] JPEG quantization tables
    volatile uint32_t HUFFMIN_0;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_1;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_2;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_3;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_4;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_5;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_6;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_7;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_8;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_9;      // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_10;     // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_11;     // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_12;     // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_13;     // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_14;     // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFMIN_15;     // [read-write] JPEG HuffMin tables
    volatile uint32_t HUFFBASE0;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE1;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE2;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE3;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE4;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE5;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE6;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE7;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE8;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE9;      // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE10;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE11;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE12;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE13;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE14;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE15;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE16;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE17;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE18;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE19;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE20;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE21;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE22;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE23;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE24;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE25;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE26;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE27;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE28;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE29;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE30;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFBASE31;     // [read-write] JPEG HuffSymb tables
    volatile uint32_t HUFFSYMB0;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB1;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB2;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB3;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB4;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB5;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB6;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB7;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB8;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB9;      // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB10;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB11;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB12;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB13;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB14;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB15;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB16;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB17;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB18;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB19;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB20;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB21;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB22;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB23;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB24;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB25;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB26;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB27;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB28;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB29;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB30;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB31;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB32;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB33;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB34;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB35;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB36;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB37;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB38;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB39;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB40;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB41;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB42;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB43;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB44;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB45;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB46;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB47;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB48;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB49;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB50;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB51;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB52;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB53;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB54;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB55;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB56;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB57;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB58;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB59;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB60;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB61;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB62;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB63;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB64;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB65;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB66;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB67;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB68;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB69;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB70;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB71;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB72;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB73;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB74;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB75;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB76;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB77;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB78;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB79;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB80;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB81;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB82;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB83;     // [read-write] JPEG HUFFSYMB tables
    volatile uint32_t DHTMEM0;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM2;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM3;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM4;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM5;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM6;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM7;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM8;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM9;        // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM10;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM11;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM12;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM13;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM14;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM15;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM16;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM17;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM18;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM19;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM20;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM21;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM22;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM23;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM24;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM25;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM26;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM27;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM28;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM29;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM30;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM31;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM32;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM33;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM34;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM35;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM36;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM37;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM38;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM39;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM40;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM41;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM42;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM43;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM44;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM45;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM46;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM47;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM48;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM49;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM50;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM51;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM52;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM53;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM54;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM55;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM56;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM57;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM58;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM59;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM60;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM61;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM62;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM63;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM64;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM65;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM66;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM67;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM68;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM69;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM70;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM71;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM72;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM73;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM74;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM75;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM76;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM77;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM78;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM79;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM80;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM81;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM82;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM83;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM84;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM85;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM86;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM87;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM88;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM89;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM90;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM91;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM92;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM93;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM94;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM95;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM96;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM97;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM98;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM99;       // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM100;      // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM101;      // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM102;      // [read-write] JPEG DHTMem tables
    volatile uint32_t DHTMEM103;      // [read-write] JPEG DHTMem tables
    reserved_t<0x1> _0x500;
    volatile uint32_t HUFFENC_AC0_0;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_1;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_2;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_3;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_4;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_5;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_6;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_7;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_8;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_9;  // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_10; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_11; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_12; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_13; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_14; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_15; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_16; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_17; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_18; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_19; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_20; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_21; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_22; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_23; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_24; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_25; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_26; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_27; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_28; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_29; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_30; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_31; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_32; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_33; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_34; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_35; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_36; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_37; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_38; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_39; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_40; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_41; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_42; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_43; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_44; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_45; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_46; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_47; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_48; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_49; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_50; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_51; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_52; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_53; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_54; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_55; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_56; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_57; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_58; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_59; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_60; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_61; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_62; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_63; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_64; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_65; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_66; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_67; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_68; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_69; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_70; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_71; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_72; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_73; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_74; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_75; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_76; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_77; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_78; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_79; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_80; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_81; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_82; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_83; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_84; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_85; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_86; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_87; // [read-write] JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC1_0;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_1;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_2;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_3;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_4;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_5;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_6;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_7;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_8;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_9;  // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_10; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_11; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_12; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_13; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_14; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_15; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_16; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_17; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_18; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_19; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_20; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_21; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_22; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_23; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_24; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_25; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_26; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_27; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_28; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_29; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_30; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_31; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_32; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_33; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_34; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_35; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_36; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_37; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_38; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_39; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_40; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_41; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_42; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_43; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_44; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_45; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_46; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_47; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_48; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_49; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_50; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_51; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_52; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_53; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_54; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_55; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_56; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_57; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_58; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_59; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_60; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_61; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_62; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_63; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_64; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_65; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_66; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_67; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_68; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_69; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_70; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_71; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_72; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_73; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_74; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_75; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_76; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_77; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_78; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_79; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_80; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_81; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_82; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_83; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_84; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_85; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_86; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_87; // [read-write] JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_DC0_0;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_1;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_2;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_3;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_4;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_5;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_6;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_7;  // [read-write] JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC1_0;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_1;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_2;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_3;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_4;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_5;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_6;  // [read-write] JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_7;  // [read-write] JPEG encoder, DC Huffman table 1

    static constexpr uint32_t JPEG_CONFR0_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CONFR0_START = 0x1; // Start

    static constexpr uint32_t JPEG_CONFR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR1_NF =           // Number of color components
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t JPEG_CONFR1_DE = 0x8;      // Decoding Enable
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR1_COLORSPACE =   // Color Space
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR1_NS =           // Number of components for Scan
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t JPEG_CONFR1_HDR = 0x100;   // Header Processing
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR1_YSIZE =        // Y Size
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t JPEG_CONFR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR2_NMCU =   // Number of MCU
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t JPEG_CONFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR3_XSIZE =   // X size
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t JPEG_CONFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CONFR4_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR4_HA = 0x2; // Huffman AC
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR4_QT =      // Quantization Table
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR4_NB =      // Number of Block
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR4_VSF =     // Vertical Sampling Factor
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR4_HSF =     // Horizontal Sampling Factor
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t JPEG_CONFR5_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CONFR5_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR5_HA = 0x2; // Huffman AC
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR5_QT =      // Quantization Table
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR5_NB =      // Number of Block
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR5_VSF =     // Vertical Sampling Factor
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR5_HSF =     // Horizontal Sampling Factor
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t JPEG_CONFR6_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CONFR6_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR6_HA = 0x2; // Huffman AC
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR6_QT =      // Quantization Table
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR6_NB =      // Number of Block
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR6_VSF =     // Vertical Sampling Factor
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR6_HSF =     // Horizontal Sampling Factor
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t JPEG_CONFR7_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CONFR7_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR7_HA = 0x2; // Huffman AC
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR7_QT =      // Quantization Table
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR7_NB =      // Number of Block
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR7_VSF =     // Vertical Sampling Factor
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JPEG_CONFR7_HSF =     // Horizontal Sampling Factor
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t JPEG_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CR_JCEN = 0x1;      // JPEG Core Enable
    static constexpr uint32_t JPEG_CR_IFTIE = 0x2;     // Input FIFO Threshold Interrupt Enable
    static constexpr uint32_t JPEG_CR_IFNFIE = 0x4;    // Input FIFO Not Full Interrupt Enable
    static constexpr uint32_t JPEG_CR_OFTIE = 0x8;     // Output FIFO Threshold Interrupt Enable
    static constexpr uint32_t JPEG_CR_OFNEIE = 0x10;   // Output FIFO Not Empty Interrupt Enable
    static constexpr uint32_t JPEG_CR_EOCIE = 0x20;    // End of Conversion Interrupt Enable
    static constexpr uint32_t JPEG_CR_HPDIE = 0x40;    // Header Parsing Done Interrupt Enable
    static constexpr uint32_t JPEG_CR_IDMAEN = 0x800;  // Input DMA Enable
    static constexpr uint32_t JPEG_CR_ODMAEN = 0x1000; // Output DMA Enable
    static constexpr uint32_t JPEG_CR_IFF = 0x2000;    // Input FIFO Flush
    static constexpr uint32_t JPEG_CR_OFF = 0x4000;    // Output FIFO Flush

    static constexpr uint32_t JPEG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_SR_IFTF = 0x2;   // Input FIFO Threshold Flag
    static constexpr uint32_t JPEG_SR_IFNFF = 0x4;  // Input FIFO Not Full Flag
    static constexpr uint32_t JPEG_SR_OFTF = 0x8;   // Output FIFO Threshold Flag
    static constexpr uint32_t JPEG_SR_OFNEF = 0x10; // Output FIFO Not Empty Flag
    static constexpr uint32_t JPEG_SR_EOCF = 0x20;  // End of Conversion Flag
    static constexpr uint32_t JPEG_SR_HPDF = 0x40;  // Header Parsing Done Flag
    static constexpr uint32_t JPEG_SR_COF = 0x80;   // Codec Operation Flag

    static constexpr uint32_t JPEG_CFR_RESET_VALUE = 0x0;
    static constexpr uint32_t JPEG_CFR_CEOCF = 0x20; // Clear End of Conversion Flag
    static constexpr uint32_t JPEG_CFR_CHPDF = 0x40; // Clear Header Parsing Done Flag

    static constexpr uint32_t JPEG_DIR_RESET_VALUE = 0x0;

    static constexpr uint32_t JPEG_DOR_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_0_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_1_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_2_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_3_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_4_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_5_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_6_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_7_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_8_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_9_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_10_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_11_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_12_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_13_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_14_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM0_15_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_0_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_1_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_2_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_3_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_4_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_5_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_6_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_7_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_8_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_9_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_10_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_11_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_12_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_13_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_14_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM1_15_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_0_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_1_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_2_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_3_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_4_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_5_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_6_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_7_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_8_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_9_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_10_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_11_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_12_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_13_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_14_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM2_15_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_0_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_1_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_2_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_3_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_4_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_5_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_6_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_7_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_8_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_9_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_10_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_11_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_12_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_13_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_14_RESET_VALUE = 0x0;

    static constexpr uint32_t QMEM3_15_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_0_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_1_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_2_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_3_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_4_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_5_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_6_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_7_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_8_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_9_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_10_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_11_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_12_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_13_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_14_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFMIN_15_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFBASE0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE0_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE0_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE1_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE1_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE2_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE2_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE3_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE3_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE4_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE4_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE5_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE5_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE6_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE6_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE7_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE7_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE8_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE8_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE9_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE9_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE10_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE10_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE11_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE11_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE12_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE12_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE13_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE13_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE14_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE14_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE15_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE15_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE16_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE16_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE17_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE17_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE18_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE18_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE19_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE19_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE20_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE20_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE21_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE21_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE22_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE22_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE23_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE23_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE24_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE24_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE25_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE25_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE26_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE26_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE27_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE27_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE28_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE28_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE29_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE29_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE30_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE30_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFBASE31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE31_HuffBase_RAM_0 =   // HuffBase RAM
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HUFFBASE31_HuffBase_RAM_1 =   // HuffBase RAM
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t HUFFSYMB0_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB1_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB2_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB3_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB4_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB5_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB6_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB7_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB8_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB9_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB10_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB11_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB12_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB13_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB14_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB15_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB16_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB17_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB18_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB19_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB20_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB21_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB22_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB23_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB24_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB25_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB26_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB27_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB28_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB29_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB30_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB31_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB32_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB33_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB34_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB35_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB36_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB37_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB38_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB39_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB40_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB41_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB42_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB43_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB44_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB45_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB46_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB47_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB48_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB49_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB50_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB51_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB52_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB53_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB54_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB55_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB56_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB57_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB58_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB59_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB60_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB61_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB62_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB63_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB64_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB65_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB66_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB67_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB68_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB69_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB70_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB71_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB72_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB73_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB74_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB75_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB76_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB77_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB78_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB79_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB80_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB81_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB82_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFSYMB83_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM0_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM2_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM3_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM4_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM5_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM6_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM7_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM8_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM9_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM10_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM11_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM12_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM13_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM14_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM15_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM16_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM17_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM18_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM19_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM20_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM21_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM22_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM23_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM24_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM25_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM26_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM27_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM28_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM29_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM30_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM31_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM32_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM33_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM34_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM35_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM36_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM37_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM38_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM39_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM40_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM41_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM42_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM43_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM44_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM45_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM46_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM47_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM48_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM49_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM50_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM51_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM52_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM53_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM54_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM55_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM56_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM57_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM58_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM59_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM60_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM61_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM62_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM63_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM64_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM65_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM66_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM67_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM68_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM69_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM70_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM71_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM72_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM73_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM74_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM75_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM76_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM77_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM78_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM79_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM80_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM81_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM82_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM83_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM84_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM85_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM86_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM87_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM88_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM89_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM90_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM91_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM92_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM93_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM94_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM95_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM96_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM97_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM98_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM99_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM100_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM101_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM102_RESET_VALUE = 0x0;

    static constexpr uint32_t DHTMEM103_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_0_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_1_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_2_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_3_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_4_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_5_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_6_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_7_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_8_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_9_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_10_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_11_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_12_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_13_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_14_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_15_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_16_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_17_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_18_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_19_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_20_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_21_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_22_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_23_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_24_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_25_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_26_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_27_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_28_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_29_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_30_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_31_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_32_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_33_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_34_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_35_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_36_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_37_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_38_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_39_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_40_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_41_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_42_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_43_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_44_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_45_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_46_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_47_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_48_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_49_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_50_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_51_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_52_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_53_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_54_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_55_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_56_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_57_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_58_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_59_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_60_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_61_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_62_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_63_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_64_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_65_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_66_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_67_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_68_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_69_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_70_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_71_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_72_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_73_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_74_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_75_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_76_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_77_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_78_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_79_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_80_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_81_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_82_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_83_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_84_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_85_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_86_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC0_87_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_0_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_1_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_2_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_3_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_4_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_5_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_6_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_7_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_8_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_9_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_10_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_11_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_12_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_13_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_14_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_15_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_16_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_17_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_18_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_19_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_20_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_21_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_22_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_23_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_24_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_25_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_26_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_27_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_28_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_29_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_30_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_31_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_32_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_33_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_34_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_35_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_36_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_37_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_38_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_39_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_40_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_41_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_42_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_43_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_44_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_45_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_46_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_47_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_48_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_49_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_50_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_51_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_52_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_53_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_54_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_55_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_56_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_57_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_58_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_59_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_60_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_61_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_62_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_63_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_64_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_65_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_66_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_67_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_68_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_69_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_70_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_71_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_72_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_73_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_74_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_75_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_76_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_77_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_78_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_79_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_80_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_81_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_82_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_83_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_84_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_85_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_86_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_AC1_87_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_0_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_1_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_2_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_3_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_4_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_5_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_6_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC0_7_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_0_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_1_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_2_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_3_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_4_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_5_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_6_RESET_VALUE = 0x0;

    static constexpr uint32_t HUFFENC_DC1_7_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F767, JPEG>
{
    typedef stm32f767_jpeg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, JPEG>
{
    typedef stm32f767_jpeg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, JPEG>
{
    typedef stm32f767_jpeg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, JPEG>
{
    typedef stm32f767_jpeg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, JPEG>
{
    typedef stm32f767_jpeg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, JPEG>
{
    typedef stm32f767_jpeg_t T;
    static T& V;
};

using jpeg_t = peripheral_t<mcu_svd, JPEG>;

