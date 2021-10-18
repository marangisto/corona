#pragma once

////
//
//      STM32H7 OTFDEC peripherals
//
///

// OTFDEC1: OTFDEC address block description

struct stm32h725_otfdec1_t
{
    reserved_t<0x8> _0x0;
    volatile uint32_t OTFDEC_R1CFGR; // OTFDEC region 1 configuration register
    volatile uint32_t OTFDEC_R1STARTADDR; // OTFDEC region 1 start address register
    volatile uint32_t OTFDEC_R1ENDADDR; // OTFDEC region 1 end address register
    volatile uint32_t OTFDEC_R1NONCER0; // OTFDEC region 1 nonce register 0
    volatile uint32_t OTFDEC_R1NONCER1; // OTFDEC region 1 nonce register 1
    volatile uint32_t OTFDEC_R1KEYR0; // OTFDEC region 1 key register 0
    volatile uint32_t OTFDEC_R1KEYR1; // OTFDEC region 1 key register 1
    volatile uint32_t OTFDEC_R1KEYR2; // OTFDEC region 1 key register 2
    volatile uint32_t OTFDEC_R1KEYR3; // OTFDEC region 1 key register 3
    reserved_t<0x3> _0x44;
    volatile uint32_t OTFDEC_R2CFGR; // OTFDEC region 2 configuration register
    volatile uint32_t OTFDEC_R2STARTADDR; // OTFDEC region 2 start address register
    volatile uint32_t OTFDEC_R2ENDADDR; // OTFDEC region 2 end address register
    volatile uint32_t OTFDEC_R2NONCER0; // OTFDEC region 2 nonce register 0
    volatile uint32_t OTFDEC_R2NONCER1; // OTFDEC region 2 nonce register 1
    volatile uint32_t OTFDEC_R2KEYR0; // OTFDEC region 2 key register 0
    volatile uint32_t OTFDEC_R2KEYR1; // OTFDEC region 2 key register 1
    volatile uint32_t OTFDEC_R2KEYR2; // OTFDEC region 2 key register 2
    volatile uint32_t OTFDEC_R2KEYR3; // OTFDEC region 2 key register 3
    reserved_t<0x3> _0x74;
    volatile uint32_t OTFDEC_R3CFGR; // OTFDEC region 3 configuration register
    volatile uint32_t OTFDEC_R3STARTADDR; // OTFDEC region 3 start address register
    volatile uint32_t OTFDEC_R3ENDADDR; // OTFDEC region 3 end address register
    volatile uint32_t OTFDEC_R3NONCER0; // OTFDEC region 3 nonce register 0
    volatile uint32_t OTFDEC_R3NONCER1; // OTFDEC region 3 nonce register 1
    volatile uint32_t OTFDEC_R3KEYR0; // OTFDEC region 3 key register 0
    volatile uint32_t OTFDEC_R3KEYR1; // OTFDEC region 3 key register 1
    volatile uint32_t OTFDEC_R3KEYR2; // OTFDEC region 3 key register 2
    volatile uint32_t OTFDEC_R3KEYR3; // OTFDEC region 3 key register 3
    reserved_t<0x3> _0xa4;
    volatile uint32_t OTFDEC_R4CFGR; // OTFDEC region 4 configuration register
    volatile uint32_t OTFDEC_R4STARTADDR; // OTFDEC region 4 start address register
    volatile uint32_t OTFDEC_R4ENDADDR; // OTFDEC region 4 end address register
    volatile uint32_t OTFDEC_R4NONCER0; // OTFDEC region 4 nonce register 0
    volatile uint32_t OTFDEC_R4NONCER1; // OTFDEC region 4 nonce register 1
    volatile uint32_t OTFDEC_R4KEYR0; // OTFDEC region 4 key register 0
    volatile uint32_t OTFDEC_R4KEYR1; // OTFDEC region 4 key register 1
    volatile uint32_t OTFDEC_R4KEYR2; // OTFDEC region 4 key register 2
    volatile uint32_t OTFDEC_R4KEYR3; // OTFDEC region 4 key register 3
    reserved_t<0x8b> _0xd4;
    volatile uint32_t OTFDEC_ISR; // OTFDEC interrupt status register
    volatile uint32_t OTFDEC_ICR; // OTFDEC interrupt clear register
    volatile uint32_t OTFDEC_IER; // OTFDEC interrupt enable register


    static constexpr uint32_t OTFDEC_R1CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_R1CFGR_REG_EN = 0x1; // region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted.
    static constexpr uint32_t OTFDEC_R1CFGR_CONFIGLOCK = 0x2; // region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to 0 if OTFDEC is reset. Setting this bit forces KEYLOCK bit to 1.
    static constexpr uint32_t OTFDEC_R1CFGR_KEYLOCK = 0x4; // region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to 0 if the OTFDEC is reset.
    typedef bit_field_t<4, 0x3> OTFDEC_R1CFGR_MODE; // operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the regions key and associated CRC are zeroed.
    typedef bit_field_t<8, 0xff> OTFDEC_R1CFGR_KEYCRC; // region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written.
    typedef bit_field_t<16, 0xffff> OTFDEC_R1CFGR_REGX_VERSION; // region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register.

    static constexpr uint32_t OTFDEC_R1STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1STARTADDR_REGX_START_ADDR; // Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero.

    static constexpr uint32_t OTFDEC_R1ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1ENDADDR_REGX_END_ADDR; // Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones.

    static constexpr uint32_t OTFDEC_R1NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1NONCER0_REGX_NONCE; // Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded.

    static constexpr uint32_t OTFDEC_R1NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1NONCER1_REGX_NONCE; // Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield.

    static constexpr uint32_t OTFDEC_R1KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1KEYR0_REGX_KEY; // Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased.

    static constexpr uint32_t OTFDEC_R1KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1KEYR1_REGX_KEY; // Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R1KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1KEYR2_REGX_KEY; // Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R1KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R1KEYR3_REGX_KEY; // Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.


    static constexpr uint32_t OTFDEC_R2CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_R2CFGR_REG_EN = 0x1; // region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted.
    static constexpr uint32_t OTFDEC_R2CFGR_CONFIGLOCK = 0x2; // region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to 0 if OTFDEC is reset. Setting this bit forces KEYLOCK bit to 1.
    static constexpr uint32_t OTFDEC_R2CFGR_KEYLOCK = 0x4; // region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to 0 if the OTFDEC is reset.
    typedef bit_field_t<4, 0x3> OTFDEC_R2CFGR_MODE; // operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the regions key and associated CRC are zeroed.
    typedef bit_field_t<8, 0xff> OTFDEC_R2CFGR_KEYCRC; // region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written.
    typedef bit_field_t<16, 0xffff> OTFDEC_R2CFGR_REGX_VERSION; // region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register.

    static constexpr uint32_t OTFDEC_R2STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2STARTADDR_REGX_START_ADDR; // Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero.

    static constexpr uint32_t OTFDEC_R2ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2ENDADDR_REGX_END_ADDR; // Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones.

    static constexpr uint32_t OTFDEC_R2NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2NONCER0_REGX_NONCE; // Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded.

    static constexpr uint32_t OTFDEC_R2NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2NONCER1_REGX_NONCE; // Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield.

    static constexpr uint32_t OTFDEC_R2KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2KEYR0_REGX_KEY; // Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased.

    static constexpr uint32_t OTFDEC_R2KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2KEYR1_REGX_KEY; // Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R2KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2KEYR2_REGX_KEY; // Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R2KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R2KEYR3_REGX_KEY; // Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.


    static constexpr uint32_t OTFDEC_R3CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_R3CFGR_REG_EN = 0x1; // region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted.
    static constexpr uint32_t OTFDEC_R3CFGR_CONFIGLOCK = 0x2; // region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to 0 if OTFDEC is reset. Setting this bit forces KEYLOCK bit to 1.
    static constexpr uint32_t OTFDEC_R3CFGR_KEYLOCK = 0x4; // region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to 0 if the OTFDEC is reset.
    typedef bit_field_t<4, 0x3> OTFDEC_R3CFGR_MODE; // operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the regions key and associated CRC are zeroed.
    typedef bit_field_t<8, 0xff> OTFDEC_R3CFGR_KEYCRC; // region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written.
    typedef bit_field_t<16, 0xffff> OTFDEC_R3CFGR_REGX_VERSION; // region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register.

    static constexpr uint32_t OTFDEC_R3STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3STARTADDR_REGX_START_ADDR; // Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero.

    static constexpr uint32_t OTFDEC_R3ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3ENDADDR_REGX_END_ADDR; // Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones.

    static constexpr uint32_t OTFDEC_R3NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3NONCER0_REGX_NONCE; // Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded.

    static constexpr uint32_t OTFDEC_R3NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3NONCER1_REGX_NONCE; // Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield.

    static constexpr uint32_t OTFDEC_R3KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3KEYR0_REGX_KEY; // Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased.

    static constexpr uint32_t OTFDEC_R3KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3KEYR1_REGX_KEY; // Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R3KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3KEYR2_REGX_KEY; // Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R3KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R3KEYR3_REGX_KEY; // Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.


    static constexpr uint32_t OTFDEC_R4CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_R4CFGR_REG_EN = 0x1; // region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted.
    static constexpr uint32_t OTFDEC_R4CFGR_CONFIGLOCK = 0x2; // region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to 0 if OTFDEC is reset. Setting this bit forces KEYLOCK bit to 1.
    static constexpr uint32_t OTFDEC_R4CFGR_KEYLOCK = 0x4; // region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to 0 if the OTFDEC is reset.
    typedef bit_field_t<4, 0x3> OTFDEC_R4CFGR_MODE; // operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the regions key and associated CRC are zeroed.
    typedef bit_field_t<8, 0xff> OTFDEC_R4CFGR_KEYCRC; // region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written.
    typedef bit_field_t<16, 0xffff> OTFDEC_R4CFGR_REGX_VERSION; // region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register.

    static constexpr uint32_t OTFDEC_R4STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4STARTADDR_REGX_START_ADDR; // Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero.

    static constexpr uint32_t OTFDEC_R4ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4ENDADDR_REGX_END_ADDR; // Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones.

    static constexpr uint32_t OTFDEC_R4NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4NONCER0_REGX_NONCE; // Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded.

    static constexpr uint32_t OTFDEC_R4NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4NONCER1_REGX_NONCE; // Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield.

    static constexpr uint32_t OTFDEC_R4KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4KEYR0_REGX_KEY; // Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased.

    static constexpr uint32_t OTFDEC_R4KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4KEYR1_REGX_KEY; // Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R4KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4KEYR2_REGX_KEY; // Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.

    static constexpr uint32_t OTFDEC_R4KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTFDEC_R4KEYR3_REGX_KEY; // Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield.


    static constexpr uint32_t OTFDEC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_ISR_SEIF = 0x1; // Security Error Interrupt Flag status This bit is set by hardware and read only by application. Bit is set when at least one security error has been detected (illegal access to keys, illegal write on locked configuration). Bit is cleared when application sets in OTFDEC_ICR the corresponding bit to 1.
    static constexpr uint32_t OTFDEC_ISR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag status This bit is set by hardware and read only by application. Bit is set when a read access and not an instruction fetch is detected on any encrypted region with MODE bits set to 00 or 11. It is also set when an instruction fetch and not a read access is detected on any encrypted region with MODE bits set to 01. Bit is cleared when application sets in OTFDEC_ICR the corresponding bit to 1.
    static constexpr uint32_t OTFDEC_ISR_KEIF = 0x4; // Key Error Interrupt Flag status This bit is set by hardware and read only by application. Bit is set when a read access occurs on any encrypted region following the reset of the key registers by an abort event (tamper detection, unauthorized debugger connection, untrusted boot, RDP level regression). Bit is cleared when application sets in OTFDEC_ICR the corresponding bit to 1. After KEIF is set any subsequent read to any enabled encrypted region returns a zeroed value. This state remains until OTFDEC keys are initialized again.

    static constexpr uint32_t OTFDEC_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_ICR_SEIF = 0x1; // Security Error Interrupt Flag clear This bit is written by application, and always reads as 0.
    static constexpr uint32_t OTFDEC_ICR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag clear This bit is written by application, and always reads as 0.
    static constexpr uint32_t OTFDEC_ICR_KEIF = 0x4; // Key Error Interrupt Flag clear This bit is written by application, and always reads as 0. Note: Clearing KEIF does not solve the source of the problem (bad key registers). To be able to read or execute again any encrypted region, OTFDEC key registers must properly initialized, again.

    static constexpr uint32_t OTFDEC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTFDEC_IER_SEIE = 0x1; // Security Error Interrupt Enable This bit is read and written by application. It controls the OTFDEC interrupt generation when SEIF flag status is set.
    static constexpr uint32_t OTFDEC_IER_XONEIE = 0x2; // Execute-only execute-Never Error Interrupt Enable This bit is read and written by application. It controls the OTFDEC interrupt generation when XONEIF flag status is set.
    static constexpr uint32_t OTFDEC_IER_KEIE = 0x4; // Key Error Interrupt Enable This bit is read and written by application. It controls the OTFDEC interrupt generation when KEIF flag status is set.
};

// OTFDEC1: On-The-Fly Decryption engine

struct stm32h7b0x_otfdec1_t
{
    volatile uint32_t CR; // OTFDEC control register
    reserved_t<0x7> _0x4;
    volatile uint32_t R1CFGR; // OTFDEC region x configuration register
    volatile uint32_t R1STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R1ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R1NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R1NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R1KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R1KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R1KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R1KEYR3; // OTFDEC region x key register 3
    reserved_t<0x3> _0x44;
    volatile uint32_t R2CFGR; // OTFDEC region x configuration register
    volatile uint32_t R2STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R2ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R2NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R2NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R2KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R2KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R2KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R2KEYR3; // OTFDEC region x key register 3
    reserved_t<0x3> _0x74;
    volatile uint32_t R3CFGR; // OTFDEC region x configuration register
    volatile uint32_t R3STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R3ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R4ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R3NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R3KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R3KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R3KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R3KEYR3; // OTFDEC region x key register 3
    reserved_t<0x3> _0xa4;
    volatile uint32_t R4CFGR; // OTFDEC region x configuration register
    volatile uint32_t R4STARTADDR; // OTFDEC region x start address register
    reserved_t<0x1> _0xb8;
    volatile uint32_t R4NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R4NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R4KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R4KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R4KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R4KEYR3; // OTFDEC region x key register 3
    reserved_t<0x8b> _0xd4;
    volatile uint32_t ISR; // OTFDEC interrupt status register
    volatile uint32_t ICR; // OTFDEC interrupt clear register
    volatile uint32_t IER; // OTFDEC interrupt enable register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ENC = 0x1; // Encryption mode bit


    static constexpr uint32_t R1CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R1CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R1CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R1CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R1CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R1CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R1CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R1STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R1ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R1NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R1NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1NONCER1_REGX_NONCE; // Region nonce

    static constexpr uint32_t R1KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R1KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R1KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR2_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R1KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t R2CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R2CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R2CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R2CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R2CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R2CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R2CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R2STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R2ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R2NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R2NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2NONCER1_REGX_NONCE; // Region nonce, bits [63:32]REGx_NONCE[63:32]

    static constexpr uint32_t R2KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R2KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R2KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR2_REGX_KEY_; // REGx_KEY

    static constexpr uint32_t R2KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t R3CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R3CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R3CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R3CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R3CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R3CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R3CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R3STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R3ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R4ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4ENDADDR_REGX_END_ADDR; // Region AXI end address
    typedef bit_field_t<0, 0xffffffff> R4ENDADDR_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R3NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3NONCER1_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R3KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R3KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R3KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR2_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R3KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t R4CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R4CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R4CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R4CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R4CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R4CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R4CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R4STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4STARTADDR_REGX_START_ADDR; // Region AXI start address


    static constexpr uint32_t R4NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R4NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4NONCER1_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R4KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R4KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R4KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR2_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R4KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_SEIF = 0x1; // Security Error Interrupt Flag status
    static constexpr uint32_t ISR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag status
    static constexpr uint32_t ISR_KEIF = 0x4; // Key Error Interrupt Flag status

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_SEIF = 0x1; // SEIF
    static constexpr uint32_t ICR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag clear
    static constexpr uint32_t ICR_KEIF = 0x4; // KEIF

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_SEIE = 0x1; // Security Error Interrupt Enable
    static constexpr uint32_t IER_XONEIE = 0x2; // XONEIE
    static constexpr uint32_t IER_KEIE = 0x4; // KEIE
};

template<>
struct peripheral_t<STM32H725, OTFDEC1>
{
    static constexpr periph_t P = OTFDEC1;
    using T = stm32h725_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, OTFDEC2>
{
    static constexpr periph_t P = OTFDEC2;
    using T = stm32h725_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, OTFDEC1>
{
    static constexpr periph_t P = OTFDEC1;
    using T = stm32h725_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, OTFDEC2>
{
    static constexpr periph_t P = OTFDEC2;
    using T = stm32h725_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OTFDEC1>
{
    static constexpr periph_t P = OTFDEC1;
    using T = stm32h7b0x_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OTFDEC2>
{
    static constexpr periph_t P = OTFDEC2;
    using T = stm32h7b0x_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OTFDEC1>
{
    static constexpr periph_t P = OTFDEC1;
    using T = stm32h7b0x_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OTFDEC2>
{
    static constexpr periph_t P = OTFDEC2;
    using T = stm32h7b0x_otfdec1_t;
    static T& V;
};

using otfdec1_t = peripheral_t<svd, OTFDEC1>;
using otfdec2_t = peripheral_t<svd, OTFDEC2>;
