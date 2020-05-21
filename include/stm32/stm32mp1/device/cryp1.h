#pragma once

////
//
//      STM32MP1 CRYP1 peripherals
//
////

////
//
//      CRYP1
//
////

struct stm32mp15xxx_cryp1_t
{
    volatile uint32_t CRYP_CR;         // CRYP control register
    volatile uint32_t CRYP_SR;         // [read-only] CRYP status register
    volatile uint32_t CRYP_DIN;        // [read-write] The CRYP_DIN register is the data input register. It is 32-bit wide. It is used to enter into the input FIFO up to four 64-bit blocks (TDES) or two 128-bit blocks (AES) of plaintext (when encrypting) or ciphertext (when decrypting), one 32-bit word at a time. To fit different data sizes, the data can be swapped after processing by configuring the DATATYPE bits in the CRYP_CR register. Refer to Section39.3.16: CRYP data registers and data swapping for more details. When CRYP_DIN register is written to the data are pushed into the input FIFO. If CRYPEN = 1, when at least two 32-bit words in the DES/TDES mode have been pushed into the input FIFO (four words in the AES mode), and when at least two words are free in the output FIFO (four words in the AES mode), the CRYP engine starts an encrypting or decrypting process. When CRYP_DIN register is read: If CRYPEN = 0, the FIFO is popped, and then the data present in the Input FIFO are returned, from the oldest one (first reading) to the newest one (last reading). The IFEM flag must be checked before each read operation to make sure that the FIFO is not empty. if CRYPEN = 1, an undefined value is returned. After the CRYP_DIN register has been read once or several times, the FIFO must be flushed by setting the FFLUSH bit prior to processing new data.
    volatile uint32_t CRYP_DOUT;       // [read-only] The CRYP_DOUT register is the data output register. It is read-only and 32-bit wide. It is used to retrieve from the output FIFO up to four 64-bit blocks (TDES) or two 128-bit blocks (AES) of plaintext (when encrypting) or ciphertext (when decrypting), one 32-bit word at a time. To fit different data sizes, the data can be swapped after processing by configuring the DATATYPE bits in the CRYP_CR register. Refer to Section39.3.16: CRYP data registers and data swapping for more details. When CRYP_DOUT register is read, the last data entered into the output FIFO (pointed to by the read pointer) is returned.
    volatile uint32_t CRYP_DMACR;      // [read-write] CRYP DMA control register
    volatile uint32_t CRYP_IMSCR;      // [read-write] The CRYP_IMSCR register is the interrupt mask set or clear register. It is a read/write register. When a read operation is performed, this register gives the current value of the mask applied to the relevant interrupt. Writing 1 to the particular bit sets the mask, thus enabling the interrupt to be read. Writing 0 to this bit clears the corresponding mask. All the bits are cleared to 0 when the peripheral is reset.
    volatile uint32_t CRYP_RISR;       // [read-only] The CRYP_RISR register is the raw interrupt status register. It is a read-only register. When a read operation is performed, this register gives the current raw status of the corresponding interrupt, i.e. the interrupt information without taking CRYP_IMSCR mask into account. Write operations have no effect.
    volatile uint32_t CRYP_MISR;       // [read-only] The CRYP_MISR register is the masked interrupt status register. It is a read-only register. When a read operation is performed, this register gives the current masked status of the corresponding interrupt, i.e. the interrupt information taking CRYP_IMSCR mask into account. Write operations have no effect.
    volatile uint32_t CRYP_K0LR;       // [write-only] CRYP key registers contain the cryptographic keys. In DES/TDES mode, the keys are 64-bit binary values (number from left to right, that is the leftmost bit is bit 1) and named K1, K2 and K3 (K0 is not used). Each key consists of 56 information bits and 8 parity bits. In AES mode, the key is considered as a single 128, 192 or 256 bits long sequence K0K1K2...K127/191/255. The AES key is entered into the registers as follows: for AES-128: K0..K127 corresponds to b127..b0 (b255..b128 are not used), for AES-192: K0..K191 corresponds to b191..b0 (b255..b192 are not used), for AES-256: K0..K255 corresponds to b255..b0. In all cases key bit K0 is the leftmost bit in CRYP inner memory and register bit b0 is the rightmost bit in corresponding CRYP_KxLR key register. For more information refer to Section39.3.17: CRYP key registers. Write accesses to these registers are disregarded when the cryptographic processor is busy (bit BUSY = 1 in the CRYP_SR register)
    volatile uint32_t CRYP_K0RR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_K1LR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_K1RR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_K2LR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_K2RR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_K3LR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_K3RR;       // [write-only] Refer to Section39.6.9: CRYP key register 0L (CRYP_K0LR) for details.
    volatile uint32_t CRYP_IV0LR;      // [read-write] The CRYP_IV0...1(L/R)R are the left-word and right-word registers for the initialization vector (64 bits for DES/TDES and 128 bits for AES). For more information refer to Section39.3.18: CRYP initialization vector registers. IV0 is the leftmost bit whereas IV63 (DES, TDES) or IV127 (AES) are the rightmost bits of the initialization vector. IV1(L/R)R is used only in the AES. Only CRYP_IV0(L/R) is used in DES/TDES. Write access to these registers are disregarded when the cryptographic processor is busy (bit BUSY = 1 in the CRYP_SR register).
    volatile uint32_t CRYP_IV0RR;      // [read-write] Refer to Section39.6.17: CRYP initialization vector register 0L (CRYP_IV0LR) for details.
    volatile uint32_t CRYP_IV1LR;      // [read-write] Refer to Section39.6.17: CRYP initialization vector register 0L (CRYP_IV0LR) for details.
    volatile uint32_t CRYP_IV1RR;      // [read-write] Refer to Section39.6.17: CRYP initialization vector register 0L (CRYP_IV0LR) for details.
    volatile uint32_t CRYP_CSGCMCCM0R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM1R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM2R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM3R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM4R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM5R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM6R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCMCCM7R; // [read-write] These registers contain the complete internal register states of the CRYP processor when the GCM/GMAC or CCM algorithm is selected. They are useful when a context swap has to be performed because a high-priority task needs the cryptographic processor while it is already in use by another task. When such an event occurs, the CRYP_CSGCMCCM0..7R and CRYP_CSGCM0..7R (in GCM/GMAC mode) or CRYP_CSGCMCCM0..7R (in CCM mode) registers have to be read and the values retrieved have to be saved in the system memory space. The cryptographic processor can then be used by the preemptive task. Then when the cryptographic computation is complete, the saved context can be read from memory and written back into the corresponding context swap registers.
    volatile uint32_t CRYP_CSGCM0R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM1R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM2R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM3R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM4R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM5R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM6R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    volatile uint32_t CRYP_CSGCM7R;    // [read-write] Please refer to Section39.6.21: CRYP context swap GCM-CCM registers (CRYP_CSGCMCCMxR) for details.
    reserved_t<0xd8> _0x3f0;
    volatile uint32_t CRYP_HWCFGR;     // [read-only] CRYP hardware configuration register
    volatile uint32_t CRYP_VERR;       // [read-only] CRYP HW Version Register
    volatile uint32_t CRYP_IPIDR;      // [read-only] CRYP Identification
    volatile uint32_t CRYP_MID;        // [read-only] CRYP HW Magic ID

    static constexpr uint32_t CRYP_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_CR_ALGODIR = 0x4;       // ALGODIR
    template<uint32_t X>
    static constexpr uint32_t CRYP_CR_ALGOMODE =           // ALGOMODE
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CRYP_CR_DATATYPE =           // DATATYPE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CRYP_CR_KEYSIZE =            // KEYSIZE
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CRYP_CR_FFLUSH = 0x4000;     // FFLUSH
    static constexpr uint32_t CRYP_CR_CRYPEN = 0x8000;     // CRYPEN
    template<uint32_t X>
    static constexpr uint32_t CRYP_CR_GCM_CCMPH =          // GCM_CCMPH
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t CRYP_CR_ALGOMODE3 = 0x80000; // ALGOMODE3
    template<uint32_t X>
    static constexpr uint32_t CRYP_CR_NPBLB =              // NPBLB
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t CRYP_SR_RESET_VALUE = 0x3;
    static constexpr uint32_t CRYP_SR_IFEM = 0x1;  // IFEM
    static constexpr uint32_t CRYP_SR_IFNF = 0x2;  // IFNF
    static constexpr uint32_t CRYP_SR_OFNE = 0x4;  // OFNE
    static constexpr uint32_t CRYP_SR_OFFU = 0x8;  // OFFU
    static constexpr uint32_t CRYP_SR_BUSY = 0x10; // BUSY

    static constexpr uint32_t CRYP_DIN_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_DOUT_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_DMACR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_DMACR_DIEN = 0x1; // DIEN
    static constexpr uint32_t CRYP_DMACR_DOEN = 0x2; // DOEN

    static constexpr uint32_t CRYP_IMSCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_IMSCR_INIM = 0x1;  // INIM
    static constexpr uint32_t CRYP_IMSCR_OUTIM = 0x2; // OUTIM

    static constexpr uint32_t CRYP_RISR_RESET_VALUE = 0x1;
    static constexpr uint32_t CRYP_RISR_INRIS = 0x1;  // INRIS
    static constexpr uint32_t CRYP_RISR_OUTRIS = 0x2; // OUTRIS

    static constexpr uint32_t CRYP_MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_MISR_INMIS = 0x1;  // INMIS
    static constexpr uint32_t CRYP_MISR_OUTMIS = 0x2; // OUTMIS

    static constexpr uint32_t CRYP_K0LR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K0RR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K1LR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K1RR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K2LR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K2RR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K3LR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_K3RR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_IV0LR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_IV0LR_IV31 = 0x1;       // IV31
    static constexpr uint32_t CRYP_IV0LR_IV30 = 0x2;       // IV30
    static constexpr uint32_t CRYP_IV0LR_IV29 = 0x4;       // IV29
    static constexpr uint32_t CRYP_IV0LR_IV28 = 0x8;       // IV28
    static constexpr uint32_t CRYP_IV0LR_IV27 = 0x10;      // IV27
    static constexpr uint32_t CRYP_IV0LR_IV26 = 0x20;      // IV26
    static constexpr uint32_t CRYP_IV0LR_IV25 = 0x40;      // IV25
    static constexpr uint32_t CRYP_IV0LR_IV24 = 0x80;      // IV24
    static constexpr uint32_t CRYP_IV0LR_IV23 = 0x100;     // IV23
    static constexpr uint32_t CRYP_IV0LR_IV22 = 0x200;     // IV22
    static constexpr uint32_t CRYP_IV0LR_IV21 = 0x400;     // IV21
    static constexpr uint32_t CRYP_IV0LR_IV20 = 0x800;     // IV20
    static constexpr uint32_t CRYP_IV0LR_IV19 = 0x1000;    // IV19
    static constexpr uint32_t CRYP_IV0LR_IV18 = 0x2000;    // IV18
    static constexpr uint32_t CRYP_IV0LR_IV17 = 0x4000;    // IV17
    static constexpr uint32_t CRYP_IV0LR_IV16 = 0x8000;    // IV16
    static constexpr uint32_t CRYP_IV0LR_IV15 = 0x10000;   // IV15
    static constexpr uint32_t CRYP_IV0LR_IV14 = 0x20000;   // IV14
    static constexpr uint32_t CRYP_IV0LR_IV13 = 0x40000;   // IV13
    static constexpr uint32_t CRYP_IV0LR_IV12 = 0x80000;   // IV12
    static constexpr uint32_t CRYP_IV0LR_IV11 = 0x100000;  // IV11
    static constexpr uint32_t CRYP_IV0LR_IV10 = 0x200000;  // IV10
    static constexpr uint32_t CRYP_IV0LR_IV9 = 0x400000;   // IV9
    static constexpr uint32_t CRYP_IV0LR_IV8 = 0x800000;   // IV8
    static constexpr uint32_t CRYP_IV0LR_IV7 = 0x1000000;  // IV7
    static constexpr uint32_t CRYP_IV0LR_IV6 = 0x2000000;  // IV6
    static constexpr uint32_t CRYP_IV0LR_IV5 = 0x4000000;  // IV5
    static constexpr uint32_t CRYP_IV0LR_IV4 = 0x8000000;  // IV4
    static constexpr uint32_t CRYP_IV0LR_IV3 = 0x10000000; // IV3
    static constexpr uint32_t CRYP_IV0LR_IV2 = 0x20000000; // IV2
    static constexpr uint32_t CRYP_IV0LR_IV1 = 0x40000000; // IV1
    static constexpr uint32_t CRYP_IV0LR_IV0 = 0x80000000; // IV0

    static constexpr uint32_t CRYP_IV0RR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_IV0RR_IV63 = 0x1;        // IV63
    static constexpr uint32_t CRYP_IV0RR_IV62 = 0x2;        // IV62
    static constexpr uint32_t CRYP_IV0RR_IV61 = 0x4;        // IV61
    static constexpr uint32_t CRYP_IV0RR_IV60 = 0x8;        // IV60
    static constexpr uint32_t CRYP_IV0RR_IV59 = 0x10;       // IV59
    static constexpr uint32_t CRYP_IV0RR_IV58 = 0x20;       // IV58
    static constexpr uint32_t CRYP_IV0RR_IV57 = 0x40;       // IV57
    static constexpr uint32_t CRYP_IV0RR_IV56 = 0x80;       // IV56
    static constexpr uint32_t CRYP_IV0RR_IV55 = 0x100;      // IV55
    static constexpr uint32_t CRYP_IV0RR_IV54 = 0x200;      // IV54
    static constexpr uint32_t CRYP_IV0RR_IV53 = 0x400;      // IV53
    static constexpr uint32_t CRYP_IV0RR_IV52 = 0x800;      // IV52
    static constexpr uint32_t CRYP_IV0RR_IV51 = 0x1000;     // IV51
    static constexpr uint32_t CRYP_IV0RR_IV50 = 0x2000;     // IV50
    static constexpr uint32_t CRYP_IV0RR_IV49 = 0x4000;     // IV49
    static constexpr uint32_t CRYP_IV0RR_IV48 = 0x8000;     // IV48
    static constexpr uint32_t CRYP_IV0RR_IV47 = 0x10000;    // IV47
    static constexpr uint32_t CRYP_IV0RR_IV46 = 0x20000;    // IV46
    static constexpr uint32_t CRYP_IV0RR_IV45 = 0x40000;    // IV45
    static constexpr uint32_t CRYP_IV0RR_IV44 = 0x80000;    // IV44
    static constexpr uint32_t CRYP_IV0RR_IV43 = 0x100000;   // IV43
    static constexpr uint32_t CRYP_IV0RR_IV42 = 0x200000;   // IV42
    static constexpr uint32_t CRYP_IV0RR_IV41 = 0x400000;   // IV41
    static constexpr uint32_t CRYP_IV0RR_IV40 = 0x800000;   // IV40
    static constexpr uint32_t CRYP_IV0RR_IV39 = 0x1000000;  // IV39
    static constexpr uint32_t CRYP_IV0RR_IV38 = 0x2000000;  // IV38
    static constexpr uint32_t CRYP_IV0RR_IV37 = 0x4000000;  // IV37
    static constexpr uint32_t CRYP_IV0RR_IV36 = 0x8000000;  // IV36
    static constexpr uint32_t CRYP_IV0RR_IV35 = 0x10000000; // IV35
    static constexpr uint32_t CRYP_IV0RR_IV34 = 0x20000000; // IV34
    static constexpr uint32_t CRYP_IV0RR_IV33 = 0x40000000; // IV33
    static constexpr uint32_t CRYP_IV0RR_IV32 = 0x80000000; // IV32

    static constexpr uint32_t CRYP_IV1LR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_IV1LR_IV95 = 0x1;        // IV95
    static constexpr uint32_t CRYP_IV1LR_IV94 = 0x2;        // IV94
    static constexpr uint32_t CRYP_IV1LR_IV93 = 0x4;        // IV93
    static constexpr uint32_t CRYP_IV1LR_IV92 = 0x8;        // IV92
    static constexpr uint32_t CRYP_IV1LR_IV91 = 0x10;       // IV91
    static constexpr uint32_t CRYP_IV1LR_IV90 = 0x20;       // IV90
    static constexpr uint32_t CRYP_IV1LR_IV89 = 0x40;       // IV89
    static constexpr uint32_t CRYP_IV1LR_IV88 = 0x80;       // IV88
    static constexpr uint32_t CRYP_IV1LR_IV87 = 0x100;      // IV87
    static constexpr uint32_t CRYP_IV1LR_IV86 = 0x200;      // IV86
    static constexpr uint32_t CRYP_IV1LR_IV85 = 0x400;      // IV85
    static constexpr uint32_t CRYP_IV1LR_IV84 = 0x800;      // IV84
    static constexpr uint32_t CRYP_IV1LR_IV83 = 0x1000;     // IV83
    static constexpr uint32_t CRYP_IV1LR_IV82 = 0x2000;     // IV82
    static constexpr uint32_t CRYP_IV1LR_IV81 = 0x4000;     // IV81
    static constexpr uint32_t CRYP_IV1LR_IV80 = 0x8000;     // IV80
    static constexpr uint32_t CRYP_IV1LR_IV79 = 0x10000;    // IV79
    static constexpr uint32_t CRYP_IV1LR_IV78 = 0x20000;    // IV78
    static constexpr uint32_t CRYP_IV1LR_IV77 = 0x40000;    // IV77
    static constexpr uint32_t CRYP_IV1LR_IV76 = 0x80000;    // IV76
    static constexpr uint32_t CRYP_IV1LR_IV75 = 0x100000;   // IV75
    static constexpr uint32_t CRYP_IV1LR_IV74 = 0x200000;   // IV74
    static constexpr uint32_t CRYP_IV1LR_IV73 = 0x400000;   // IV73
    static constexpr uint32_t CRYP_IV1LR_IV72 = 0x800000;   // IV72
    static constexpr uint32_t CRYP_IV1LR_IV71 = 0x1000000;  // IV71
    static constexpr uint32_t CRYP_IV1LR_IV70 = 0x2000000;  // IV70
    static constexpr uint32_t CRYP_IV1LR_IV69 = 0x4000000;  // IV69
    static constexpr uint32_t CRYP_IV1LR_IV68 = 0x8000000;  // IV68
    static constexpr uint32_t CRYP_IV1LR_IV67 = 0x10000000; // IV67
    static constexpr uint32_t CRYP_IV1LR_IV66 = 0x20000000; // IV66
    static constexpr uint32_t CRYP_IV1LR_IV65 = 0x40000000; // IV65
    static constexpr uint32_t CRYP_IV1LR_IV64 = 0x80000000; // IV64

    static constexpr uint32_t CRYP_IV1RR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRYP_IV1RR_IV127 = 0x1;       // IV127
    static constexpr uint32_t CRYP_IV1RR_IV126 = 0x2;       // IV126
    static constexpr uint32_t CRYP_IV1RR_IV125 = 0x4;       // IV125
    static constexpr uint32_t CRYP_IV1RR_IV124 = 0x8;       // IV124
    static constexpr uint32_t CRYP_IV1RR_IV123 = 0x10;      // IV123
    static constexpr uint32_t CRYP_IV1RR_IV122 = 0x20;      // IV122
    static constexpr uint32_t CRYP_IV1RR_IV121 = 0x40;      // IV121
    static constexpr uint32_t CRYP_IV1RR_IV120 = 0x80;      // IV120
    static constexpr uint32_t CRYP_IV1RR_IV119 = 0x100;     // IV119
    static constexpr uint32_t CRYP_IV1RR_IV118 = 0x200;     // IV118
    static constexpr uint32_t CRYP_IV1RR_IV117 = 0x400;     // IV117
    static constexpr uint32_t CRYP_IV1RR_IV116 = 0x800;     // IV116
    static constexpr uint32_t CRYP_IV1RR_IV115 = 0x1000;    // IV115
    static constexpr uint32_t CRYP_IV1RR_IV114 = 0x2000;    // IV114
    static constexpr uint32_t CRYP_IV1RR_IV113 = 0x4000;    // IV113
    static constexpr uint32_t CRYP_IV1RR_IV112 = 0x8000;    // IV112
    static constexpr uint32_t CRYP_IV1RR_IV111 = 0x10000;   // IV111
    static constexpr uint32_t CRYP_IV1RR_IV110 = 0x20000;   // IV110
    static constexpr uint32_t CRYP_IV1RR_IV109 = 0x40000;   // IV109
    static constexpr uint32_t CRYP_IV1RR_IV108 = 0x80000;   // IV108
    static constexpr uint32_t CRYP_IV1RR_IV107 = 0x100000;  // IV107
    static constexpr uint32_t CRYP_IV1RR_IV106 = 0x200000;  // IV106
    static constexpr uint32_t CRYP_IV1RR_IV105 = 0x400000;  // IV105
    static constexpr uint32_t CRYP_IV1RR_IV104 = 0x800000;  // IV104
    static constexpr uint32_t CRYP_IV1RR_IV103 = 0x1000000; // IV103
    static constexpr uint32_t CRYP_IV1RR_IV102 = 0x2000000; // IV102
    static constexpr uint32_t CRYP_IV1RR_IV101 = 0x4000000; // IV101
    static constexpr uint32_t CRYP_IV1RR_IV100 = 0x8000000; // IV100
    static constexpr uint32_t CRYP_IV1RR_IV99 = 0x10000000; // IV99
    static constexpr uint32_t CRYP_IV1RR_IV98 = 0x20000000; // IV98
    static constexpr uint32_t CRYP_IV1RR_IV97 = 0x40000000; // IV97
    static constexpr uint32_t CRYP_IV1RR_IV96 = 0x80000000; // IV96

    static constexpr uint32_t CRYP_CSGCMCCM0R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM2R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM3R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM4R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM5R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM6R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCMCCM7R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM0R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM2R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM3R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM4R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM5R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM6R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_CSGCM7R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRYP_HWCFGR_RESET_VALUE = 0x131;
    template<uint32_t X>
    static constexpr uint32_t CRYP_HWCFGR_CFG1 =   // CFG1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CRYP_HWCFGR_CFG2 =   // CFG2
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CRYP_HWCFGR_CFG3 =   // CFG3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CRYP_HWCFGR_CFG4 =   // CFG4
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t CRYP_VERR_RESET_VALUE = 0x22;
    template<uint32_t X>
    static constexpr uint32_t CRYP_VERR_VER =   // VER
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CRYP_IPIDR_RESET_VALUE = 0x170011;

    static constexpr uint32_t CRYP_MID_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, CRYP1>
{
    typedef stm32mp15xxx_cryp1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, CRYP2>
{
    typedef stm32mp15xxx_cryp1_t T;
    static T& V;
};

using cryp1_t = peripheral_t<mcu_svd, CRYP1>;
using cryp2_t = peripheral_t<mcu_svd, CRYP2>;

