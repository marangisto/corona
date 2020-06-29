#pragma once

////
//
//      STM32F7 JPEG peripherals
//
///

// JPEG: JPEG codec

struct stm32f767_jpeg_t
{
    volatile uint32_t JPEG_CONFR0; // JPEG codec configuration register 0
    volatile uint32_t JPEG_CONFR1; // JPEG codec configuration register 1
    volatile uint32_t JPEG_CONFR2; // JPEG codec configuration register 2
    volatile uint32_t JPEG_CONFR3; // JPEG codec configuration register 3
    volatile uint32_t JPEG_CONFR4; // JPEG codec configuration register 4
    volatile uint32_t JPEG_CONFR5; // JPEG codec configuration register 5
    volatile uint32_t JPEG_CONFR6; // JPEG codec configuration register 6
    volatile uint32_t JPEG_CONFR7; // JPEG codec configuration register 7
    reserved_t<0x4> _0x20;
    volatile uint32_t JPEG_CR; // JPEG control register
    volatile uint32_t JPEG_SR; // JPEG status register
    volatile uint32_t JPEG_CFR; // JPEG clear flag register
    reserved_t<0x1> _0x3c;
    volatile uint32_t JPEG_DIR; // JPEG data input register
    volatile uint32_t JPEG_DOR; // JPEG data output register
    reserved_t<0x2> _0x48;
    volatile uint32_t QMEM0_0; // JPEG quantization tables
    volatile uint32_t QMEM0_1; // JPEG quantization tables
    volatile uint32_t QMEM0_2; // JPEG quantization tables
    volatile uint32_t QMEM0_3; // JPEG quantization tables
    volatile uint32_t QMEM0_4; // JPEG quantization tables
    volatile uint32_t QMEM0_5; // JPEG quantization tables
    volatile uint32_t QMEM0_6; // JPEG quantization tables
    volatile uint32_t QMEM0_7; // JPEG quantization tables
    volatile uint32_t QMEM0_8; // JPEG quantization tables
    volatile uint32_t QMEM0_9; // JPEG quantization tables
    volatile uint32_t QMEM0_10; // JPEG quantization tables
    volatile uint32_t QMEM0_11; // JPEG quantization tables
    volatile uint32_t QMEM0_12; // JPEG quantization tables
    volatile uint32_t QMEM0_13; // JPEG quantization tables
    volatile uint32_t QMEM0_14; // JPEG quantization tables
    volatile uint32_t QMEM0_15; // JPEG quantization tables
    volatile uint32_t QMEM1_0; // JPEG quantization tables
    volatile uint32_t QMEM1_1; // JPEG quantization tables
    volatile uint32_t QMEM1_2; // JPEG quantization tables
    volatile uint32_t QMEM1_3; // JPEG quantization tables
    volatile uint32_t QMEM1_4; // JPEG quantization tables
    volatile uint32_t QMEM1_5; // JPEG quantization tables
    volatile uint32_t QMEM1_6; // JPEG quantization tables
    volatile uint32_t QMEM1_7; // JPEG quantization tables
    volatile uint32_t QMEM1_8; // JPEG quantization tables
    volatile uint32_t QMEM1_9; // JPEG quantization tables
    volatile uint32_t QMEM1_10; // JPEG quantization tables
    volatile uint32_t QMEM1_11; // JPEG quantization tables
    volatile uint32_t QMEM1_12; // JPEG quantization tables
    volatile uint32_t QMEM1_13; // JPEG quantization tables
    volatile uint32_t QMEM1_14; // JPEG quantization tables
    volatile uint32_t QMEM1_15; // JPEG quantization tables
    volatile uint32_t QMEM2_0; // JPEG quantization tables
    volatile uint32_t QMEM2_1; // JPEG quantization tables
    volatile uint32_t QMEM2_2; // JPEG quantization tables
    volatile uint32_t QMEM2_3; // JPEG quantization tables
    volatile uint32_t QMEM2_4; // JPEG quantization tables
    volatile uint32_t QMEM2_5; // JPEG quantization tables
    volatile uint32_t QMEM2_6; // JPEG quantization tables
    volatile uint32_t QMEM2_7; // JPEG quantization tables
    volatile uint32_t QMEM2_8; // JPEG quantization tables
    volatile uint32_t QMEM2_9; // JPEG quantization tables
    volatile uint32_t QMEM2_10; // JPEG quantization tables
    volatile uint32_t QMEM2_11; // JPEG quantization tables
    volatile uint32_t QMEM2_12; // JPEG quantization tables
    volatile uint32_t QMEM2_13; // JPEG quantization tables
    volatile uint32_t QMEM2_14; // JPEG quantization tables
    volatile uint32_t QMEM2_15; // JPEG quantization tables
    volatile uint32_t QMEM3_0; // JPEG quantization tables
    volatile uint32_t QMEM3_1; // JPEG quantization tables
    volatile uint32_t QMEM3_2; // JPEG quantization tables
    volatile uint32_t QMEM3_3; // JPEG quantization tables
    volatile uint32_t QMEM3_4; // JPEG quantization tables
    volatile uint32_t QMEM3_5; // JPEG quantization tables
    volatile uint32_t QMEM3_6; // JPEG quantization tables
    volatile uint32_t QMEM3_7; // JPEG quantization tables
    volatile uint32_t QMEM3_8; // JPEG quantization tables
    volatile uint32_t QMEM3_9; // JPEG quantization tables
    volatile uint32_t QMEM3_10; // JPEG quantization tables
    volatile uint32_t QMEM3_11; // JPEG quantization tables
    volatile uint32_t QMEM3_12; // JPEG quantization tables
    volatile uint32_t QMEM3_13; // JPEG quantization tables
    volatile uint32_t QMEM3_14; // JPEG quantization tables
    volatile uint32_t QMEM3_15; // JPEG quantization tables
    volatile uint32_t HUFFMIN_0; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_1; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_2; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_3; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_4; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_5; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_6; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_7; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_8; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_9; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_10; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_11; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_12; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_13; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_14; // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_15; // JPEG HuffMin tables
    volatile uint32_t HUFFBASE0; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE1; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE2; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE3; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE4; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE5; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE6; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE7; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE8; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE9; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE10; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE11; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE12; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE13; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE14; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE15; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE16; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE17; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE18; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE19; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE20; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE21; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE22; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE23; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE24; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE25; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE26; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE27; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE28; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE29; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE30; // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE31; // JPEG HuffSymb tables
    volatile uint32_t HUFFSYMB0; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB1; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB2; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB3; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB4; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB5; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB6; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB7; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB8; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB9; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB10; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB11; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB12; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB13; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB14; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB15; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB16; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB17; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB18; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB19; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB20; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB21; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB22; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB23; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB24; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB25; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB26; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB27; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB28; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB29; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB30; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB31; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB32; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB33; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB34; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB35; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB36; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB37; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB38; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB39; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB40; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB41; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB42; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB43; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB44; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB45; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB46; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB47; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB48; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB49; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB50; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB51; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB52; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB53; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB54; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB55; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB56; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB57; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB58; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB59; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB60; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB61; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB62; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB63; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB64; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB65; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB66; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB67; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB68; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB69; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB70; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB71; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB72; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB73; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB74; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB75; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB76; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB77; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB78; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB79; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB80; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB81; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB82; // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB83; // JPEG HUFFSYMB tables
    volatile uint32_t DHTMEM0; // JPEG DHTMem tables
    volatile uint32_t DHTMEM2; // JPEG DHTMem tables
    volatile uint32_t DHTMEM3; // JPEG DHTMem tables
    volatile uint32_t DHTMEM4; // JPEG DHTMem tables
    volatile uint32_t DHTMEM5; // JPEG DHTMem tables
    volatile uint32_t DHTMEM6; // JPEG DHTMem tables
    volatile uint32_t DHTMEM7; // JPEG DHTMem tables
    volatile uint32_t DHTMEM8; // JPEG DHTMem tables
    volatile uint32_t DHTMEM9; // JPEG DHTMem tables
    volatile uint32_t DHTMEM10; // JPEG DHTMem tables
    volatile uint32_t DHTMEM11; // JPEG DHTMem tables
    volatile uint32_t DHTMEM12; // JPEG DHTMem tables
    volatile uint32_t DHTMEM13; // JPEG DHTMem tables
    volatile uint32_t DHTMEM14; // JPEG DHTMem tables
    volatile uint32_t DHTMEM15; // JPEG DHTMem tables
    volatile uint32_t DHTMEM16; // JPEG DHTMem tables
    volatile uint32_t DHTMEM17; // JPEG DHTMem tables
    volatile uint32_t DHTMEM18; // JPEG DHTMem tables
    volatile uint32_t DHTMEM19; // JPEG DHTMem tables
    volatile uint32_t DHTMEM20; // JPEG DHTMem tables
    volatile uint32_t DHTMEM21; // JPEG DHTMem tables
    volatile uint32_t DHTMEM22; // JPEG DHTMem tables
    volatile uint32_t DHTMEM23; // JPEG DHTMem tables
    volatile uint32_t DHTMEM24; // JPEG DHTMem tables
    volatile uint32_t DHTMEM25; // JPEG DHTMem tables
    volatile uint32_t DHTMEM26; // JPEG DHTMem tables
    volatile uint32_t DHTMEM27; // JPEG DHTMem tables
    volatile uint32_t DHTMEM28; // JPEG DHTMem tables
    volatile uint32_t DHTMEM29; // JPEG DHTMem tables
    volatile uint32_t DHTMEM30; // JPEG DHTMem tables
    volatile uint32_t DHTMEM31; // JPEG DHTMem tables
    volatile uint32_t DHTMEM32; // JPEG DHTMem tables
    volatile uint32_t DHTMEM33; // JPEG DHTMem tables
    volatile uint32_t DHTMEM34; // JPEG DHTMem tables
    volatile uint32_t DHTMEM35; // JPEG DHTMem tables
    volatile uint32_t DHTMEM36; // JPEG DHTMem tables
    volatile uint32_t DHTMEM37; // JPEG DHTMem tables
    volatile uint32_t DHTMEM38; // JPEG DHTMem tables
    volatile uint32_t DHTMEM39; // JPEG DHTMem tables
    volatile uint32_t DHTMEM40; // JPEG DHTMem tables
    volatile uint32_t DHTMEM41; // JPEG DHTMem tables
    volatile uint32_t DHTMEM42; // JPEG DHTMem tables
    volatile uint32_t DHTMEM43; // JPEG DHTMem tables
    volatile uint32_t DHTMEM44; // JPEG DHTMem tables
    volatile uint32_t DHTMEM45; // JPEG DHTMem tables
    volatile uint32_t DHTMEM46; // JPEG DHTMem tables
    volatile uint32_t DHTMEM47; // JPEG DHTMem tables
    volatile uint32_t DHTMEM48; // JPEG DHTMem tables
    volatile uint32_t DHTMEM49; // JPEG DHTMem tables
    volatile uint32_t DHTMEM50; // JPEG DHTMem tables
    volatile uint32_t DHTMEM51; // JPEG DHTMem tables
    volatile uint32_t DHTMEM52; // JPEG DHTMem tables
    volatile uint32_t DHTMEM53; // JPEG DHTMem tables
    volatile uint32_t DHTMEM54; // JPEG DHTMem tables
    volatile uint32_t DHTMEM55; // JPEG DHTMem tables
    volatile uint32_t DHTMEM56; // JPEG DHTMem tables
    volatile uint32_t DHTMEM57; // JPEG DHTMem tables
    volatile uint32_t DHTMEM58; // JPEG DHTMem tables
    volatile uint32_t DHTMEM59; // JPEG DHTMem tables
    volatile uint32_t DHTMEM60; // JPEG DHTMem tables
    volatile uint32_t DHTMEM61; // JPEG DHTMem tables
    volatile uint32_t DHTMEM62; // JPEG DHTMem tables
    volatile uint32_t DHTMEM63; // JPEG DHTMem tables
    volatile uint32_t DHTMEM64; // JPEG DHTMem tables
    volatile uint32_t DHTMEM65; // JPEG DHTMem tables
    volatile uint32_t DHTMEM66; // JPEG DHTMem tables
    volatile uint32_t DHTMEM67; // JPEG DHTMem tables
    volatile uint32_t DHTMEM68; // JPEG DHTMem tables
    volatile uint32_t DHTMEM69; // JPEG DHTMem tables
    volatile uint32_t DHTMEM70; // JPEG DHTMem tables
    volatile uint32_t DHTMEM71; // JPEG DHTMem tables
    volatile uint32_t DHTMEM72; // JPEG DHTMem tables
    volatile uint32_t DHTMEM73; // JPEG DHTMem tables
    volatile uint32_t DHTMEM74; // JPEG DHTMem tables
    volatile uint32_t DHTMEM75; // JPEG DHTMem tables
    volatile uint32_t DHTMEM76; // JPEG DHTMem tables
    volatile uint32_t DHTMEM77; // JPEG DHTMem tables
    volatile uint32_t DHTMEM78; // JPEG DHTMem tables
    volatile uint32_t DHTMEM79; // JPEG DHTMem tables
    volatile uint32_t DHTMEM80; // JPEG DHTMem tables
    volatile uint32_t DHTMEM81; // JPEG DHTMem tables
    volatile uint32_t DHTMEM82; // JPEG DHTMem tables
    volatile uint32_t DHTMEM83; // JPEG DHTMem tables
    volatile uint32_t DHTMEM84; // JPEG DHTMem tables
    volatile uint32_t DHTMEM85; // JPEG DHTMem tables
    volatile uint32_t DHTMEM86; // JPEG DHTMem tables
    volatile uint32_t DHTMEM87; // JPEG DHTMem tables
    volatile uint32_t DHTMEM88; // JPEG DHTMem tables
    volatile uint32_t DHTMEM89; // JPEG DHTMem tables
    volatile uint32_t DHTMEM90; // JPEG DHTMem tables
    volatile uint32_t DHTMEM91; // JPEG DHTMem tables
    volatile uint32_t DHTMEM92; // JPEG DHTMem tables
    volatile uint32_t DHTMEM93; // JPEG DHTMem tables
    volatile uint32_t DHTMEM94; // JPEG DHTMem tables
    volatile uint32_t DHTMEM95; // JPEG DHTMem tables
    volatile uint32_t DHTMEM96; // JPEG DHTMem tables
    volatile uint32_t DHTMEM97; // JPEG DHTMem tables
    volatile uint32_t DHTMEM98; // JPEG DHTMem tables
    volatile uint32_t DHTMEM99; // JPEG DHTMem tables
    volatile uint32_t DHTMEM100; // JPEG DHTMem tables
    volatile uint32_t DHTMEM101; // JPEG DHTMem tables
    volatile uint32_t DHTMEM102; // JPEG DHTMem tables
    volatile uint32_t DHTMEM103; // JPEG DHTMem tables
    reserved_t<0x1> _0x4fc;
    volatile uint32_t HUFFENC_AC0_0; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_1; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_2; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_3; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_4; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_5; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_6; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_7; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_8; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_9; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_10; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_11; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_12; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_13; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_14; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_15; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_16; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_17; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_18; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_19; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_20; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_21; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_22; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_23; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_24; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_25; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_26; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_27; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_28; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_29; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_30; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_31; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_32; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_33; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_34; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_35; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_36; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_37; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_38; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_39; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_40; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_41; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_42; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_43; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_44; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_45; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_46; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_47; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_48; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_49; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_50; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_51; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_52; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_53; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_54; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_55; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_56; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_57; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_58; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_59; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_60; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_61; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_62; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_63; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_64; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_65; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_66; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_67; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_68; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_69; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_70; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_71; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_72; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_73; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_74; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_75; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_76; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_77; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_78; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_79; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_80; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_81; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_82; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_83; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_84; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_85; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_86; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_87; // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC1_0; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_1; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_2; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_3; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_4; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_5; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_6; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_7; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_8; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_9; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_10; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_11; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_12; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_13; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_14; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_15; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_16; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_17; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_18; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_19; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_20; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_21; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_22; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_23; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_24; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_25; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_26; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_27; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_28; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_29; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_30; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_31; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_32; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_33; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_34; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_35; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_36; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_37; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_38; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_39; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_40; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_41; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_42; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_43; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_44; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_45; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_46; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_47; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_48; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_49; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_50; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_51; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_52; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_53; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_54; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_55; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_56; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_57; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_58; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_59; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_60; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_61; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_62; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_63; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_64; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_65; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_66; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_67; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_68; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_69; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_70; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_71; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_72; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_73; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_74; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_75; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_76; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_77; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_78; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_79; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_80; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_81; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_82; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_83; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_84; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_85; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_86; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_87; // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_DC0_0; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_1; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_2; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_3; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_4; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_5; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_6; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_7; // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC1_0; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_1; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_2; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_3; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_4; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_5; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_6; // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_7; // JPEG encoder, DC Huffman table 1

    static constexpr uint32_t JPEG_CONFR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFR0_START = 0x1; // Start

    static constexpr uint32_t JPEG_CONFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> JPEG_CONFR1_NF; // Number of color components
    static constexpr uint32_t JPEG_CONFR1_DE = 0x8; // Decoding Enable
    typedef bit_field_t<4, 0x3> JPEG_CONFR1_COLORSPACE; // Color Space
    typedef bit_field_t<6, 0x3> JPEG_CONFR1_NS; // Number of components for Scan
    static constexpr uint32_t JPEG_CONFR1_HDR = 0x100; // Header Processing
    typedef bit_field_t<16, 0xffff> JPEG_CONFR1_YSIZE; // Y Size

    static constexpr uint32_t JPEG_CONFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> JPEG_CONFR2_NMCU; // Number of MCU

    static constexpr uint32_t JPEG_CONFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> JPEG_CONFR3_XSIZE; // X size

    static constexpr uint32_t JPEG_CONFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFR4_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR4_HA = 0x2; // Huffman AC
    typedef bit_field_t<2, 0x3> JPEG_CONFR4_QT; // Quantization Table
    typedef bit_field_t<4, 0xf> JPEG_CONFR4_NB; // Number of Block
    typedef bit_field_t<8, 0xf> JPEG_CONFR4_VSF; // Vertical Sampling Factor
    typedef bit_field_t<12, 0xf> JPEG_CONFR4_HSF; // Horizontal Sampling Factor

    static constexpr uint32_t JPEG_CONFR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFR5_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR5_HA = 0x2; // Huffman AC
    typedef bit_field_t<2, 0x3> JPEG_CONFR5_QT; // Quantization Table
    typedef bit_field_t<4, 0xf> JPEG_CONFR5_NB; // Number of Block
    typedef bit_field_t<8, 0xf> JPEG_CONFR5_VSF; // Vertical Sampling Factor
    typedef bit_field_t<12, 0xf> JPEG_CONFR5_HSF; // Horizontal Sampling Factor

    static constexpr uint32_t JPEG_CONFR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFR6_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR6_HA = 0x2; // Huffman AC
    typedef bit_field_t<2, 0x3> JPEG_CONFR6_QT; // Quantization Table
    typedef bit_field_t<4, 0xf> JPEG_CONFR6_NB; // Number of Block
    typedef bit_field_t<8, 0xf> JPEG_CONFR6_VSF; // Vertical Sampling Factor
    typedef bit_field_t<12, 0xf> JPEG_CONFR6_HSF; // Horizontal Sampling Factor

    static constexpr uint32_t JPEG_CONFR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFR7_HD = 0x1; // Huffman DC
    static constexpr uint32_t JPEG_CONFR7_HA = 0x2; // Huffman AC
    typedef bit_field_t<2, 0x3> JPEG_CONFR7_QT; // Quantization Table
    typedef bit_field_t<4, 0xf> JPEG_CONFR7_NB; // Number of Block
    typedef bit_field_t<8, 0xf> JPEG_CONFR7_VSF; // Vertical Sampling Factor
    typedef bit_field_t<12, 0xf> JPEG_CONFR7_HSF; // Horizontal Sampling Factor


    static constexpr uint32_t JPEG_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CR_JCEN = 0x1; // JPEG Core Enable
    static constexpr uint32_t JPEG_CR_IFTIE = 0x2; // Input FIFO Threshold Interrupt Enable
    static constexpr uint32_t JPEG_CR_IFNFIE = 0x4; // Input FIFO Not Full Interrupt Enable
    static constexpr uint32_t JPEG_CR_OFTIE = 0x8; // Output FIFO Threshold Interrupt Enable
    static constexpr uint32_t JPEG_CR_OFNEIE = 0x10; // Output FIFO Not Empty Interrupt Enable
    static constexpr uint32_t JPEG_CR_EOCIE = 0x20; // End of Conversion Interrupt Enable
    static constexpr uint32_t JPEG_CR_HPDIE = 0x40; // Header Parsing Done Interrupt Enable
    static constexpr uint32_t JPEG_CR_IDMAEN = 0x800; // Input DMA Enable
    static constexpr uint32_t JPEG_CR_ODMAEN = 0x1000; // Output DMA Enable
    static constexpr uint32_t JPEG_CR_IFF = 0x2000; // Input FIFO Flush
    static constexpr uint32_t JPEG_CR_OFF = 0x4000; // Output FIFO Flush

    static constexpr uint32_t JPEG_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_SR_IFTF = 0x2; // Input FIFO Threshold Flag
    static constexpr uint32_t JPEG_SR_IFNFF = 0x4; // Input FIFO Not Full Flag
    static constexpr uint32_t JPEG_SR_OFTF = 0x8; // Output FIFO Threshold Flag
    static constexpr uint32_t JPEG_SR_OFNEF = 0x10; // Output FIFO Not Empty Flag
    static constexpr uint32_t JPEG_SR_EOCF = 0x20; // End of Conversion Flag
    static constexpr uint32_t JPEG_SR_HPDF = 0x40; // Header Parsing Done Flag
    static constexpr uint32_t JPEG_SR_COF = 0x80; // Codec Operation Flag

    static constexpr uint32_t JPEG_CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CFR_CEOCF = 0x20; // Clear End of Conversion Flag
    static constexpr uint32_t JPEG_CFR_CHPDF = 0x40; // Clear Header Parsing Done Flag


    static constexpr uint32_t JPEG_DIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JPEG_DIR_DATAIN; // Data Input FIFO

    static constexpr uint32_t JPEG_DOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JPEG_DOR_DATAOUT; // Data Output FIFO


    static constexpr uint32_t QMEM0_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_0_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_1_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_2_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_3_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_4_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_5_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_6_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_7_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_8_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_9_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_10_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_11_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_12_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_13_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_14_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM0_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM0_15_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_0_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_1_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_2_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_3_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_4_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_5_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_6_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_7_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_8_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_9_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_10_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_11_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_12_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_13_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_14_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM1_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM1_15_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_0_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_1_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_2_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_3_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_4_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_5_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_6_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_7_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_8_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_9_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_10_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_11_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_12_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_13_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_14_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM2_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM2_15_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_0_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_1_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_2_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_3_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_4_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_5_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_6_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_7_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_8_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_9_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_10_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_11_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_12_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_13_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_14_QMEM_RAM; // QMem RAM

    static constexpr uint32_t QMEM3_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QMEM3_15_QMEM_RAM; // QMem RAM

    static constexpr uint32_t HUFFMIN_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_0_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_1_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_2_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_3_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_4_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_5_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_6_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_7_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_8_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_9_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_10_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_11_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_12_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_13_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_14_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFMIN_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFMIN_15_HUFFMIN_RAM; // HuffMin RAM

    static constexpr uint32_t HUFFBASE0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE0_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE0_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE1_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE1_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE2_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE2_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE3_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE3_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE4_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE4_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE5_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE5_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE6_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE6_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE7_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE7_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE8_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE8_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE9_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE9_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE10_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE10_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE11_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE11_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE12_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE12_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE13_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE13_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE14_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE14_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE15_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE15_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE16_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE16_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE17_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE17_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE18_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE18_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE19_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE19_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE20_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE20_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE21_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE21_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE22_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE22_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE23_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE23_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE24_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE24_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE25_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE25_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE26_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE26_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE27_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE27_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE28_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE28_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE29_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE29_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE30_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE30_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFBASE31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> HUFFBASE31_HUFFBASE_RAM_0; // HuffBase RAM
    typedef bit_field_t<16, 0x1ff> HUFFBASE31_HUFFBASE_RAM_1; // HuffBase RAM

    static constexpr uint32_t HUFFSYMB0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB0_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB1_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB2_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB3_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB4_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB5_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB6_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB7_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB8_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB9_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB10_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB11_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB12_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB13_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB14_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB15_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB16_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB17_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB18_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB19_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB20_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB21_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB22_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB23_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB24_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB25_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB26_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB27_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB28_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB29_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB30_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB31_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB32_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB33_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB34_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB35_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB36_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB37_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB38_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB39_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB40_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB41_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB41_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB42_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB42_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB43_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB43_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB44_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB44_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB45_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB45_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB46_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB46_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB47_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB47_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB48_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB48_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB49_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB49_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB50_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB50_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB51_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB51_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB52_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB52_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB53_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB53_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB54_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB54_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB55_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB55_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB56_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB56_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB57_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB57_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB58_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB58_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB59_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB59_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB60_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB60_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB61_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB61_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB62_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB62_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB63_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB63_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB64_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB64_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB65_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB65_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB66_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB66_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB67_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB67_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB68_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB68_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB69_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB69_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB70_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB70_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB71_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB71_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB72_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB72_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB73_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB73_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB74_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB74_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB75_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB75_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB76_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB76_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB77_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB77_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB78_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB78_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB79_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB79_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB80_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB80_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB81_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB81_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB82_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB82_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t HUFFSYMB83_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFSYMB83_HUFFSYMB_RAM; // DHTSymb RAM

    static constexpr uint32_t DHTMEM0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM0_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM2_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM3_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM4_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM5_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM6_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM7_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM8_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM9_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM10_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM11_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM12_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM13_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM14_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM15_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM16_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM17_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM18_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM19_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM20_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM21_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM22_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM23_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM24_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM25_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM26_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM27_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM28_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM29_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM30_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM31_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM32_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM33_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM34_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM35_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM36_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM37_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM38_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM39_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM40_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM41_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM41_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM42_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM42_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM43_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM43_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM44_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM44_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM45_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM45_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM46_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM46_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM47_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM47_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM48_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM48_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM49_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM49_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM50_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM50_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM51_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM51_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM52_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM52_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM53_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM53_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM54_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM54_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM55_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM55_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM56_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM56_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM57_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM57_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM58_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM58_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM59_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM59_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM60_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM60_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM61_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM61_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM62_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM62_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM63_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM63_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM64_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM64_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM65_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM65_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM66_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM66_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM67_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM67_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM68_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM68_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM69_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM69_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM70_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM70_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM71_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM71_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM72_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM72_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM73_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM73_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM74_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM74_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM75_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM75_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM76_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM76_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM77_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM77_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM78_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM78_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM79_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM79_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM80_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM80_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM81_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM81_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM82_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM82_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM83_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM83_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM84_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM84_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM85_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM85_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM86_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM86_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM87_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM87_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM88_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM88_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM89_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM89_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM90_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM90_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM91_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM91_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM92_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM92_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM93_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM93_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM94_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM94_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM95_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM95_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM96_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM96_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM97_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM97_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM98_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM98_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM99_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM99_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM100_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM100_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM101_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM101_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM102_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM102_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t DHTMEM103_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DHTMEM103_DHTMEM_RAM; // DHTMem RAM


    static constexpr uint32_t HUFFENC_AC0_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_0_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_1_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_2_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_3_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_4_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_5_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_6_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_7_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_8_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_9_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_10_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_11_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_12_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_13_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_14_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_15_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_16_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_17_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_18_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_19_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_20_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_21_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_22_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_23_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_24_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_25_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_26_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_27_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_28_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_29_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_30_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_31_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_32_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_33_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_34_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_35_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_36_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_37_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_38_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_39_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_40_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_41_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_41_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_42_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_42_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_43_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_43_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_44_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_44_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_45_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_45_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_46_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_46_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_47_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_47_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_48_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_48_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_49_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_49_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_50_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_50_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_51_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_51_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_52_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_52_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_53_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_53_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_54_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_54_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_55_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_55_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_56_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_56_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_57_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_57_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_58_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_58_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_59_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_59_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_60_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_60_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_61_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_61_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_62_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_62_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_63_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_63_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_64_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_64_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_65_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_65_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_66_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_66_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_67_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_67_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_68_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_68_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_69_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_69_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_70_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_70_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_71_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_71_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_72_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_72_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_73_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_73_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_74_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_74_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_75_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_75_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_76_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_76_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_77_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_77_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_78_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_78_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_79_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_79_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_80_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_80_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_81_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_81_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_82_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_82_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_83_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_83_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_84_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_84_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_85_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_85_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_86_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_86_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC0_87_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC0_87_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_0_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_1_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_2_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_3_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_4_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_5_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_6_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_7_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_8_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_9_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_10_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_11_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_12_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_13_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_14_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_15_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_16_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_17_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_18_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_19_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_20_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_21_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_22_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_23_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_24_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_25_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_26_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_27_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_28_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_29_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_30_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_31_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_32_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_33_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_34_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_35_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_36_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_37_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_38_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_39_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_40_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_41_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_41_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_42_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_42_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_43_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_43_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_44_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_44_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_45_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_45_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_46_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_46_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_47_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_47_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_48_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_48_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_49_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_49_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_50_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_50_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_51_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_51_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_52_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_52_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_53_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_53_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_54_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_54_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_55_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_55_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_56_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_56_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_57_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_57_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_58_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_58_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_59_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_59_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_60_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_60_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_61_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_61_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_62_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_62_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_63_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_63_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_64_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_64_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_65_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_65_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_66_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_66_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_67_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_67_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_68_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_68_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_69_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_69_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_70_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_70_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_71_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_71_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_72_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_72_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_73_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_73_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_74_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_74_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_75_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_75_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_76_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_76_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_77_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_77_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_78_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_78_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_79_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_79_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_80_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_80_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_81_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_81_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_82_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_82_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_83_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_83_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_84_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_84_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_85_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_85_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_86_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_86_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_AC1_87_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_AC1_87_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_0_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_1_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_2_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_3_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_4_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_5_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_6_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC0_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC0_7_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_0_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_1_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_2_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_3_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_4_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_5_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_6_DHTMEM_RAM; // DHTMem RAM

    static constexpr uint32_t HUFFENC_DC1_7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HUFFENC_DC1_7_DHTMEM_RAM; // DHTMem RAM
};

template<>
struct peripheral_t<STM32F767, JPEG>
{
    using T = stm32f767_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, JPEG>
{
    using T = stm32f767_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, JPEG>
{
    using T = stm32f767_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, JPEG>
{
    using T = stm32f767_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, JPEG>
{
    using T = stm32f767_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, JPEG>
{
    using T = stm32f767_jpeg_t;
    static T& V;
};

using jpeg_t = peripheral_t<svd, JPEG>;

template<int INST> struct jpeg_traits {};
