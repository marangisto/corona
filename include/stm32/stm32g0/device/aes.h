#pragma once

////
//
//      STM32G0 AES peripherals
//
///

// AES: Advanced encryption standard hardware accelerator 1

struct stm32g041_aes_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DINR; // data input register
    volatile uint32_t DOUTR; // data output register
    volatile uint32_t KEYR0; // key register 0
    volatile uint32_t KEYR1; // key register 1
    volatile uint32_t KEYR2; // key register 2
    volatile uint32_t KEYR3; // key register 3
    volatile uint32_t IVR0; // initialization vector register 0
    volatile uint32_t IVR1; // initialization vector register 1
    volatile uint32_t IVR2; // initialization vector register 2
    volatile uint32_t IVR3; // initialization vector register 3
    volatile uint32_t KEYR4; // key register 4
    volatile uint32_t KEYR5; // key register 5
    volatile uint32_t KEYR6; // key register 6
    volatile uint32_t KEYR7; // key register 7
    volatile uint32_t SUSP0R; // AES suspend register 0
    volatile uint32_t SUSP1R; // AES suspend register 1
    volatile uint32_t SUSP2R; // AES suspend register 2
    volatile uint32_t SUSP3R; // AES suspend register 3
    volatile uint32_t SUSP4R; // AES suspend register 4
    volatile uint32_t SUSP5R; // AES suspend register 5
    volatile uint32_t SUSP6R; // AES suspend register 6
    volatile uint32_t SUSP7R; // AES suspend register 7

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR_NPBLB; // Number of padding bytes in last block of payload
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    static constexpr uint32_t CR_CHMOD2 = 0x10000; // AES chaining mode Bit2
    typedef bit_field_t<13, 0x3> CR_GCMPH; // Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation Complete Flag Clear
    typedef bit_field_t<5, 0x3> CR_CHMOD10; // AES chaining mode Bit1 Bit0
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection (for data in and data out to/from the cryptographic block)
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // Busy flag
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_AES_DINR; // Data Input Register

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_AES_DOUTR; // Data output register

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR0_AES_KEYR0; // Data Output Register (LSB key [31:0])

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_AES_KEYR1; // AES key register (key [63:32])

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR2_AES_KEYR2; // AES key register (key [95:64])

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_AES_KEYR3; // AES key register (MSB key [127:96])

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_AES_IVR0; // initialization vector register (LSB IVR [31:0])

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_AES_IVR1; // Initialization Vector Register (IVR [63:32])

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_AES_IVR2; // Initialization Vector Register (IVR [95:64])

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_AES_IVR3; // Initialization Vector Register (MSB IVR [127:96])

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR4_AES_KEYR4; // AES key register (MSB key [159:128])

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_AES_KEYR5; // AES key register (MSB key [191:160])

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_AES_KEYR6; // AES key register (MSB key [223:192])

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_AES_KEYR7; // AES key register (MSB key [255:224])

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_AES_SUSP0R; // AES suspend register 0

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_AES_SUSP1R; // AES suspend register 1

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_AES_SUSP2R; // AES suspend register 2

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_AES_SUSP3R; // AES suspend register 3

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_AES_SUSP4R; // AES suspend register 4

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_AES_SUSP5R; // AES suspend register 5

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_AES_SUSP6R; // AES suspend register 6

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_AES_SUSP7R; // AES suspend register 7
};

// AES: Advanced encryption standard hardware accelerator 1

struct stm32g081_aes_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DINR; // data input register
    volatile uint32_t DOUTR; // data output register
    volatile uint32_t KEYR0; // key register 0
    volatile uint32_t KEYR1; // key register 1
    volatile uint32_t KEYR2; // key register 2
    volatile uint32_t KEYR3; // key register 3
    volatile uint32_t IVR0; // initialization vector register 0
    volatile uint32_t IVR1; // initialization vector register 1
    volatile uint32_t IVR2; // initialization vector register 2
    volatile uint32_t IVR3; // initialization vector register 3
    volatile uint32_t KEYR4; // key register 4
    volatile uint32_t KEYR5; // key register 5
    volatile uint32_t KEYR6; // key register 6
    volatile uint32_t KEYR7; // key register 7
    volatile uint32_t SUSP0R; // AES suspend register 0
    volatile uint32_t SUSP1R; // AES suspend register 1
    volatile uint32_t SUSP2R; // AES suspend register 2
    volatile uint32_t SUSP3R; // AES suspend register 3
    volatile uint32_t SUSP4R; // AES suspend register 4
    volatile uint32_t SUSP5R; // AES suspend register 5
    volatile uint32_t SUSP6R; // AES suspend register 6
    volatile uint32_t SUSP7R; // AES suspend register 7
    reserved_t<0xe4> _0x60;
    volatile uint32_t HWCFR; // AES hardware configuration register
    volatile uint32_t VERR; // AES version register
    volatile uint32_t IPIDR; // AES identification register
    volatile uint32_t SIDR; // AES size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR_NPBLB; // Number of padding bytes in last block of payload
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    static constexpr uint32_t CR_CHMOD2 = 0x10000; // AES chaining mode Bit2
    typedef bit_field_t<13, 0x3> CR_GCMPH; // Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation Complete Flag Clear
    typedef bit_field_t<5, 0x3> CR_CHMOD10; // AES chaining mode Bit1 Bit0
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection (for data in and data out to/from the cryptographic block)
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // Busy flag
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_AES_DINR; // Data Input Register

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_AES_DOUTR; // Data output register

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR0_AES_KEYR0; // Data Output Register (LSB key [31:0])

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_AES_KEYR1; // AES key register (key [63:32])

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR2_AES_KEYR2; // AES key register (key [95:64])

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_AES_KEYR3; // AES key register (MSB key [127:96])

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_AES_IVR0; // initialization vector register (LSB IVR [31:0])

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_AES_IVR1; // Initialization Vector Register (IVR [63:32])

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_AES_IVR2; // Initialization Vector Register (IVR [95:64])

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_AES_IVR3; // Initialization Vector Register (MSB IVR [127:96])

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR4_AES_KEYR4; // AES key register (MSB key [159:128])

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_AES_KEYR5; // AES key register (MSB key [191:160])

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_AES_KEYR6; // AES key register (MSB key [223:192])

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_AES_KEYR7; // AES key register (MSB key [255:224])

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_AES_SUSP0R; // AES suspend register 0

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_AES_SUSP1R; // AES suspend register 1

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_AES_SUSP2R; // AES suspend register 2

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_AES_SUSP3R; // AES suspend register 3

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_AES_SUSP4R; // AES suspend register 4

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_AES_SUSP5R; // AES suspend register 5

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_AES_SUSP6R; // AES suspend register 6

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_AES_SUSP7R; // AES suspend register 7


    static constexpr uint32_t HWCFR_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<12, 0xf> HWCFR_CFG4; // HW Generic 4
    typedef bit_field_t<8, 0xf> HWCFR_CFG3; // HW Generic 3
    typedef bit_field_t<4, 0xf> HWCFR_CFG2; // HW Generic 2
    typedef bit_field_t<0, 0xf> HWCFR_CFG1; // HW Generic 1

    static constexpr uint32_t VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major revision
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor revision

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x170023; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_ID; // Identification code

    static constexpr uint32_t SIDR_RESET_VALUE = 0x170023; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_ID; // Size Identification code
};

// AES: Advanced Encryption Standard

struct stm32g0c1_aes_t
{
    volatile uint32_t CR; // AES control register
    volatile uint32_t SR; // AES status register
    volatile uint32_t DINR; // AES data input register
    volatile uint32_t DOUTR; // AES data output register
    volatile uint32_t KEYR0; // AES key register 0
    volatile uint32_t KEYR1; // AES key register 1
    volatile uint32_t KEYR2; // AES key register 2
    volatile uint32_t KEYR3; // AES key register 3
    volatile uint32_t IVR0; // AES initialization vector register 0
    volatile uint32_t IVR1; // AES initialization vector register 1
    volatile uint32_t IVR2; // AES initialization vector register 2
    volatile uint32_t IVR3; // AES initialization vector register 3
    volatile uint32_t KEYR4; // AES key register 4
    volatile uint32_t KEYR5; // AES key register 5
    volatile uint32_t KEYR6; // AES key register 6
    volatile uint32_t KEYR7; // AES key register 7
    volatile uint32_t SUSP0R; // AES suspend registers
    volatile uint32_t SUSP1R; // AES suspend registers
    volatile uint32_t SUSP2R; // AES suspend registers
    volatile uint32_t SUSP3R; // AES suspend registers
    volatile uint32_t SUSP4R; // AES suspend registers
    volatile uint32_t SUSP5R; // AES suspend registers
    volatile uint32_t SUSP6R; // AES suspend registers
    volatile uint32_t SUSP7R; // AES suspend registers

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_EN = 0x1; // AES enable This bit enables/disables the AES peripheral: At any moment, clearing then setting the bit re-initializes the AES peripheral. This bit is automatically cleared by hardware upon the completion of the key preparation (Mode 2) and upon the completion of GCM/GMAC/CCM initial phase.
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection This bitfield defines the format of data written in the AES_DINR register or read from the AES_DOUTR register, through selecting the mode of data swapping: For more details, refer to . Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access.
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode This bitfield selects the AES operating mode: Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access. Any attempt to selecting Mode 4 while either ECB or CBC chaining mode is not selected, defaults to effective selection of Mode 3. It is not possible to select a Mode 3 following a Mode 4.
    typedef bit_field_t<5, 0x3> CR_CHMOD1; // Chaining mode selection, bit [2] Refer to the bits [5:6] of the register for the description of the CHMOD[2:0] bitfield CHMOD[1:0]: Chaining mode selection, bits [1:0] This bitfield, together with the bit CHMOD[2] forming CHMOD[2:0], selects the AES chaining mode: others: Reserved Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access.
    static constexpr uint32_t CR_CCFC = 0x80; // Computation complete flag clear Upon written to 1, this bit clears the computation complete flag (CCF) in the AES_SR register: Reading the flag always returns zero.
    static constexpr uint32_t CR_ERRC = 0x100; // Error flag clear Upon written to 1, this bit clears the RDERR and WRERR error flags in the AES_SR register: Reading the flag always returns zero.
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF interrupt enable This bit enables or disables (masks) the AES interrupt generation when CCF (computation complete flag) is set:
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable This bit enables or disables (masks) the AES interrupt generation when RDERR and/or WRERR is set:
    static constexpr uint32_t CR_DMAINEN = 0x800; // DMA input enable This bit enables/disables data transferring with DMA, in the input phase: When the bit is set, DMA requests are automatically generated by AES during the input data phase. This feature is only effective when Mode 1 or Mode 3 is selected through the MODE[1:0] bitfield. It is not effective for Mode 2 (key derivation). Usage of DMA with Mode 4 (single decryption) is not recommended.
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // DMA output enable This bit enables/disables data transferring with DMA, in the output phase: When the bit is set, DMA requests are automatically generated by AES during the output data phase. This feature is only effective when Mode 1 or Mode 3 is selected through the MODE[1:0] bitfield. It is not effective for Mode 2 (key derivation). Usage of DMA with Mode 4 (single decryption) is not recommended.
    typedef bit_field_t<13, 0x3> CR_GCMPH; // GCM or CCM phase selection This bitfield selects the phase of GCM, GMAC or CCM algorithm: The bitfield has no effect if other than GCM, GMAC or CCM algorithms are selected (through the ALGOMODE bitfield).
    static constexpr uint32_t CR_CHMOD2 = 0x10000; // Chaining mode selection, bit [2] Refer to the bits [5:6] of the register for the description of the CHMOD[2:0] bitfield CHMOD[1:0]: Chaining mode selection, bits [1:0] This bitfield, together with the bit CHMOD[2] forming CHMOD[2:0], selects the AES chaining mode: others: Reserved Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access.
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection This bitfield defines the length of the key used in the AES cryptographic core, in bits: Attempts to write the bit are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access.
    typedef bit_field_t<20, 0xf> CR_NPBLB; // Number of padding bytes in last block The bitfield sets the number of padding bytes in last block of payload: ...

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CCF = 0x1; // Computation completed flag This flag indicates whether the computation is completed: The flag is set by hardware upon the completion of the computation. It is cleared by software, upon setting the CCFC bit of the AES_CR register. Upon the flag setting, an interrupt is generated if enabled through the CCFIE bit of the AES_CR register. The flag is significant only when the DMAOUTEN bit is 0. It may stay high when DMA_EN is 1.
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag This flag indicates the detection of an unexpected read operation from the AES_DOUTR register (during computation or data input phase): The flag is set by hardware. It is cleared by software upon setting the ERRC bit of the AES_CR register. Upon the flag setting, an interrupt is generated if enabled through the ERRIE bit of the AES_CR register. The flag setting has no impact on the AES operation. Unexpected read returns zero.
    static constexpr uint32_t SR_WRERR = 0x4; // Write error This flag indicates the detection of an unexpected write operation to the AES_DINR register (during computation or data output phase): The flag is set by hardware. It is cleared by software upon setting the ERRC bit of the AES_CR register. Upon the flag setting, an interrupt is generated if enabled through the ERRIE bit of the AES_CR register. The flag setting has no impact on the AES operation. Unexpected write is ignored.
    static constexpr uint32_t SR_BUSY = 0x8; // Busy This flag indicates whether AES is idle or busy during GCM payload encryption phase: When the flag indicates idle, the current GCM encryption processing may be suspended to process a higher-priority message. In other chaining modes, or in GCM phases other than payload encryption, the flag must be ignored for the suspend process.

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_DIN; // Input data word A four-fold sequential write to this bitfield during the input phase results in writing a complete 128-bit block of input data to the AES peripheral. From the first to the fourth write, the corresponding data weights are [127:96], [95:64], [63:32], and [31:0]. Upon each write, the data from the 32-bit input buffer are handled by the data swap block according to the DATATYPE[1:0] bitfield, then written into the AES core 128-bit input buffer. The data signification of the input data block depends on the AES operating mode: - Mode 1 (encryption): plaintext - Mode 2 (key derivation): the bitfield is not used (AES_KEYRx registers used for input) - Mode 3 (decryption) and Mode 4 (key derivation then single decryption): ciphertext The data swap operation is described in page499.

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_DOUT; // Output data word This read-only bitfield fetches a 32-bit output buffer. A four-fold sequential read of this bitfield, upon the computation completion (CCF set), virtually reads a complete 128-bit block of output data from the AES peripheral. Before reaching the output buffer, the data produced by the AES core are handled by the data swap block according to the DATATYPE[1:0] bitfield. Data weights from the first to the fourth read operation are: [127:96], [95:64], [63:32], and [31:0]. The data signification of the output data block depends on the AES operating mode: - Mode 1 (encryption): ciphertext - Mode 2 (key derivation): the bitfield is not used (AES_KEYRx registers used for output) - Mode 3 (decryption) and Mode 4 (key derivation then single decryption): plaintext The data swap operation is described in page499.

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR0_KEY; // Cryptographic key, bits [31:0] This bitfield contains the bits [31:0] of the AES encryption or decryption key, depending on the operating mode: - In Mode 1 (encryption), Mode 2 (key derivation) and Mode 4 (key derivation then single decryption): the value to write into the bitfield is the encryption key. - In Mode 3 (decryption): the value to write into the bitfield is the encryption key to be derived before being used for decryption. After writing the encryption key into the bitfield, its reading before enabling AES returns the same value. Its reading after enabling AES and after the CCF flag is set returns the decryption key derived from the encryption key. Note: In mode 4 (key derivation then single decryption) the bitfield always contains the encryption key. The AES_KEYRx registers may be written only when KEYSIZE value is correct and when the AES peripheral is disabled (EN bit of the AES_CR register cleared). Note that, if, the key is directly loaded to AES_KEYRx registers (hence writes to key register is ignored and KEIF is set). Refer to for more details.

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_KEY; // Cryptographic key, bits [63:32] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR2_KEY; // Cryptographic key, bits [95:64] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_KEY; // Cryptographic key, bits [127:96] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_IVI; // Initialization vector input, bits [31:0] Refer to for description of the IVI[127:0] bitfield. The initialization vector is only used in chaining modes other than ECB. The AES_IVRx registers may be written only when the AES peripheral is disabled

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_IVI; // Initialization vector input, bits [63:32] Refer to the AES_IVR0 register for description of the IVI[128:0] bitfield.

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_IVI; // Initialization vector input, bits [95:64] Refer to the AES_IVR0 register for description of the IVI[128:0] bitfield.

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_IVI; // Initialization vector input, bits [127:96] Refer to the AES_IVR0 register for description of the IVI[128:0] bitfield.

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR4_KEY; // Cryptographic key, bits [159:128] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_KEY; // Cryptographic key, bits [191:160] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_KEY; // Cryptographic key, bits [223:192] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_KEY; // Cryptographic key, bits [255:224] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield.

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_SUSP; // AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers.
};

template<>
struct peripheral_t<STM32G041, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32g041_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32g081_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32g0c1_aes_t;
    static T& V;
};

using aes_t = peripheral_t<svd, AES>;

template<int INST> struct aes_traits {};

template<> struct aes_traits<0>
{
    using aes = aes_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_AESEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_AESEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_AESSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_AESSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_AESRST;
    }
};
