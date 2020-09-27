#pragma once

////
//
//      STM32H7 SAI peripherals
//
///

// SAI4: SAI

struct stm32h742x_sai4_t
{
    volatile uint32_t SAI_GCR; // Global configuration register
    volatile uint32_t SAI_ACR1; // Configuration register 1
    volatile uint32_t SAI_ACR2; // Configuration register 2
    volatile uint32_t SAI_AFRCR; // This register has no meaning in AC97 and SPDIF audio protocol
    volatile uint32_t SAI_ASLOTR; // This register has no meaning in AC97 and SPDIF audio protocol
    volatile uint32_t SAI_AIM; // Interrupt mask register 2
    volatile uint32_t SAI_ASR; // Status register
    volatile uint32_t SAI_ACLRFR; // Clear flag register
    volatile uint32_t SAI_ADR; // Data register
    volatile uint32_t SAI_BCR1; // Configuration register 1
    volatile uint32_t SAI_BCR2; // Configuration register 2
    volatile uint32_t SAI_BFRCR; // This register has no meaning in AC97 and SPDIF audio protocol
    volatile uint32_t SAI_BSLOTR; // This register has no meaning in AC97 and SPDIF audio protocol
    volatile uint32_t SAI_BIM; // Interrupt mask register 2
    volatile uint32_t SAI_BSR; // Status register
    volatile uint32_t SAI_BCLRFR; // Clear flag register
    volatile uint32_t SAI_BDR; // Data register
    volatile uint32_t SAI_PDMCR; // PDM control register
    volatile uint32_t SAI_PDMDLY; // PDM delay register

    static constexpr uint32_t SAI_GCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x3> SAI_GCR_SYNCOUT; // Synchronization outputs These bits are set and cleared by software.
    typedef bit_field_t<0, 0x3> SAI_GCR_SYNCIN; // Synchronization inputs

    static constexpr uint32_t SAI_ACR1_RESET_VALUE = 0x40; // Reset value
    typedef bit_field_t<0, 0x3> SAI_ACR1_MODE; // SAIx audio block mode immediately
    typedef bit_field_t<2, 0x3> SAI_ACR1_PRTCFG; // Protocol configuration. These bits are set and cleared by software. These bits have to be configured when the audio block is disabled.
    typedef bit_field_t<5, 0x7> SAI_ACR1_DS; // Data size. These bits are set and cleared by software. These bits are ignored when the SPDIF protocols are selected (bit PRTCFG[1:0]), because the frame and the data size are fixed in such case. When the companding mode is selected through COMP[1:0] bits, DS[1:0] are ignored since the data size is fixed to 8 bits by the algorithm. These bits must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_ACR1_LSBFIRST = 0x100; // Least significant bit first. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in AC97 audio protocol since AC97 data are always transferred with the MSB first. This bit has no meaning in SPDIF audio protocol since in SPDIF data are always transferred with LSB first.
    static constexpr uint32_t SAI_ACR1_CKSTR = 0x200; // Clock strobing edge. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in SPDIF audio protocol.
    typedef bit_field_t<10, 0x3> SAI_ACR1_SYNCEN; // Synchronization enable. These bits are set and cleared by software. They must be configured when the audio sub-block is disabled. Note: The audio sub-block should be configured as asynchronous when SPDIF mode is enabled.
    static constexpr uint32_t SAI_ACR1_MONO = 0x1000; // Mono mode. This bit is set and cleared by software. It is meaningful only when the number of slots is equal to 2. When the mono mode is selected, slot 0 data are duplicated on slot 1 when the audio block operates as a transmitter. In reception mode, the slot1 is discarded and only the data received from slot 0 are stored. Refer to Section: Mono/stereo mode for more details.
    static constexpr uint32_t SAI_ACR1_OUTDRIV = 0x2000; // Output drive. This bit is set and cleared by software. Note: This bit has to be set before enabling the audio block and after the audio block configuration.
    static constexpr uint32_t SAI_ACR1_SAIXEN = 0x10000; // Audio block enable where x is A or B. This bit is set by software. To switch off the audio block, the application software must program this bit to 0 and poll the bit till it reads back 0, meaning that the block is completely disabled. Before setting this bit to 1, check that it is set to 0, otherwise the enable command will not be taken into account. This bit allows to control the state of SAIx audio block. If it is disabled when an audio frame transfer is ongoing, the ongoing transfer completes and the cell is fully disabled at the end of this audio frame transfer. Note: When SAIx block is configured in master mode, the clock must be present on the input of SAIx before setting SAIXEN bit.
    static constexpr uint32_t SAI_ACR1_DMAEN = 0x20000; // DMA enable. This bit is set and cleared by software. Note: Since the audio block defaults to operate as a transmitter after reset, the MODE[1:0] bits must be configured before setting DMAEN to avoid a DMA request in receiver mode.
    static constexpr uint32_t SAI_ACR1_NOMCK = 0x80000; // No divider
    typedef bit_field_t<20, 0xf> SAI_ACR1_MCKDIV; // Master clock divider. These bits are set and cleared by software. These bits are meaningless when the audio block operates in slave mode. They have to be configured when the audio block is disabled. Others: the master clock frequency is calculated accordingly to the following formula:
    static constexpr uint32_t SAI_ACR1_OSR = 0x4000000; // Oversampling ratio for master clock

    static constexpr uint32_t SAI_ACR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SAI_ACR2_FTH; // FIFO threshold. This bit is set and cleared by software.
    static constexpr uint32_t SAI_ACR2_FFLUSH = 0x8; // FIFO flush. This bit is set by software. It is always read as 0. This bit should be configured when the SAI is disabled.
    static constexpr uint32_t SAI_ACR2_TRIS = 0x10; // Tristate management on data line. This bit is set and cleared by software. It is meaningful only if the audio block is configured as a transmitter. This bit is not used when the audio block is configured in SPDIF mode. It should be configured when SAI is disabled. Refer to Section: Output data line management on an inactive slot for more details.
    static constexpr uint32_t SAI_ACR2_MUTE = 0x20; // Mute. This bit is set and cleared by software. It is meaningful only when the audio block operates as a transmitter. The MUTE value is linked to value of MUTEVAL if the number of slots is lower or equal to 2, or equal to 0 if it is greater than 2. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks.
    static constexpr uint32_t SAI_ACR2_MUTEVAL = 0x40; // Mute value. This bit is set and cleared by software.It must be written before enabling the audio block: SAIXEN. This bit is meaningful only when the audio block operates as a transmitter, the number of slots is lower or equal to 2 and the MUTE bit is set. If more slots are declared, the bit value sent during the transmission in mute mode is equal to 0, whatever the value of MUTEVAL. if the number of slot is lower or equal to 2 and MUTEVAL = 1, the MUTE value transmitted for each slot is the one sent during the previous frame. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks.
    typedef bit_field_t<7, 0x3f> SAI_ACR2_MUTECNT; // Mute counter. These bits are set and cleared by software. They are used only in reception mode. The value set in these bits is compared to the number of consecutive mute frames detected in reception. When the number of mute frames is equal to this value, the flag MUTEDET will be set and an interrupt will be generated if bit MUTEDETIE is set. Refer to Section: Mute mode for more details.
    static constexpr uint32_t SAI_ACR2_CPL = 0x2000; // Complement bit. This bit is set and cleared by software. It defines the type of complement to be used for companding mode Note: This bit has effect only when the companding mode is -Law algorithm or A-Law algorithm.
    typedef bit_field_t<14, 0x3> SAI_ACR2_COMP; // Companding mode. These bits are set and cleared by software. The -Law and the A-Law log are a part of the CCITT G.711 recommendation, the type of complement that will be used depends on CPL bit. The data expansion or data compression are determined by the state of bit MODE[0]. The data compression is applied if the audio block is configured as a transmitter. The data expansion is automatically applied when the audio block is configured as a receiver. Refer to Section: Companding mode for more details. Note: Companding mode is applicable only when TDM is selected.

    static constexpr uint32_t SAI_AFRCR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xff> SAI_AFRCR_FRL; // Frame length. These bits are set and cleared by software. They define the audio frame length expressed in number of SCK clock cycles: the number of bits in the frame is equal to FRL[7:0] + 1. The minimum number of bits to transfer in an audio frame must be equal to 8, otherwise the audio block will behaves in an unexpected way. This is the case when the data size is 8 bits and only one slot 0 is defined in NBSLOT[4:0] of SAI_xSLOTR register (NBSLOT[3:0] = 0000). In master mode, if the master clock (available on MCLK_x pin) is used, the frame length should be aligned with a number equal to a power of 2, ranging from 8 to 256. When the master clock is not used (NODIV = 1), it is recommended to program the frame length to an value ranging from 8 to 256. These bits are meaningless and are not used in AC97 or SPDIF audio block configuration.
    typedef bit_field_t<8, 0x7f> SAI_AFRCR_FSALL; // Frame synchronization active level length. These bits are set and cleared by software. They specify the length in number of bit clock (SCK) + 1 (FSALL[6:0] + 1) of the active level of the FS signal in the audio frame These bits are meaningless and are not used in AC97 or SPDIF audio block configuration. They must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_AFRCR_FSDEF = 0x10000; // Frame synchronization definition. This bit is set and cleared by software. When the bit is set, the number of slots defined in the SAI_xSLOTR register has to be even. It means that half of this number of slots will be dedicated to the left channel and the other slots for the right channel (e.g: this bit has to be set for I2S or MSB/LSB-justified protocols...). This bit is meaningless and is not used in AC97 or SPDIF audio block configuration. It must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_AFRCR_FSPOL = 0x20000; // Frame synchronization polarity. This bit is set and cleared by software. It is used to configure the level of the start of frame on the FS signal. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_AFRCR_FSOFF = 0x40000; // Frame synchronization offset. This bit is set and cleared by software. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled.

    static constexpr uint32_t SAI_ASLOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> SAI_ASLOTR_FBOFF; // First bit offset These bits are set and cleared by software. The value set in this bitfield defines the position of the first data transfer bit in the slot. It represents an offset value. In transmission mode, the bits outside the data field are forced to 0. In reception mode, the extra received bits are discarded. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
    typedef bit_field_t<6, 0x3> SAI_ASLOTR_SLOTSZ; // Slot size This bits is set and cleared by software. The slot size must be higher or equal to the data size. If this condition is not respected, the behavior of the SAI will be undetermined. Refer to Section: Output data line management on an inactive slot for information on how to drive SD line. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
    typedef bit_field_t<8, 0xf> SAI_ASLOTR_NBSLOT; // Number of slots in an audio frame. These bits are set and cleared by software. The value set in this bitfield represents the number of slots + 1 in the audio frame (including the number of inactive slots). The maximum number of slots is 16. The number of slots should be even if FSDEF bit in the SAI_xFRCR register is set. The number of slots must be configured when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
    typedef bit_field_t<16, 0xffff> SAI_ASLOTR_SLOTEN; // Slot enable. These bits are set and cleared by software. Each SLOTEN bit corresponds to a slot position from 0 to 15 (maximum 16 slots). The slot must be enabled when the audio block is disabled. They are ignored in AC97 or SPDIF mode.

    static constexpr uint32_t SAI_AIM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_AIM_OVRUDRIE = 0x1; // Overrun/underrun interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the OVRUDR bit in the SAI_xSR register is set.
    static constexpr uint32_t SAI_AIM_MUTEDETIE = 0x2; // Mute detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the MUTEDET bit in the SAI_xSR register is set. This bit has a meaning only if the audio block is configured in receiver mode.
    static constexpr uint32_t SAI_AIM_WCKCFGIE = 0x4; // Wrong clock configuration interrupt enable. This bit is set and cleared by software. This bit is taken into account only if the audio block is configured as a master (MODE[1] = 0) and NODIV = 0. It generates an interrupt if the WCKCFG flag in the SAI_xSR register is set. Note: This bit is used only in TDM mode and is meaningless in other modes.
    static constexpr uint32_t SAI_AIM_FREQIE = 0x8; // FIFO request interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the FREQ bit in the SAI_xSR register is set. Since the audio block defaults to operate as a transmitter after reset, the MODE bit must be configured before setting FREQIE to avoid a parasitic interruption in receiver mode,
    static constexpr uint32_t SAI_AIM_CNRDYIE = 0x10; // Codec not ready interrupt enable (AC97). This bit is set and cleared by software. When the interrupt is enabled, the audio block detects in the slot 0 (tag0) of the AC97 frame if the Codec connected to this line is ready or not. If it is not ready, the CNRDY flag in the SAI_xSR register is set and an interruption i generated. This bit has a meaning only if the AC97 mode is selected through PRTCFG[1:0] bits and the audio block is operates as a receiver.
    static constexpr uint32_t SAI_AIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the AFSDET bit in the SAI_xSR register is set. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master.
    static constexpr uint32_t SAI_AIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the LFSDET bit is set in the SAI_xSR register. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master.

    static constexpr uint32_t SAI_ASR_RESET_VALUE = 0x8; // Reset value
    static constexpr uint32_t SAI_ASR_OVRUDR = 0x1; // Overrun / underrun. This bit is read only. The overrun and underrun conditions can occur only when the audio block is configured as a receiver and a transmitter, respectively. It can generate an interrupt if OVRUDRIE bit is set in SAI_xIM register. This flag is cleared when the software sets COVRUDR bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_ASR_MUTEDET = 0x2; // Mute detection. This bit is read only. This flag is set if consecutive 0 values are received in each slot of a given audio frame and for a consecutive number of audio frames (set in the MUTECNT bit in the SAI_xCR2 register). It can generate an interrupt if MUTEDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets bit CMUTEDET in the SAI_xCLRFR register.
    static constexpr uint32_t SAI_ASR_WCKCFG = 0x4; // Wrong clock configuration flag. This bit is read only. This bit is used only when the audio block operates in master mode (MODE[1] = 0) and NODIV = 0. It can generate an interrupt if WCKCFGIE bit is set in SAI_xIM register. This flag is cleared when the software sets CWCKCFG bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_ASR_FREQ = 0x8; // FIFO request. This bit is read only. The request depends on the audio block configuration: If the block is configured in transmission mode, the FIFO request is related to a write request operation in the SAI_xDR. If the block configured in reception, the FIFO request related to a read request operation from the SAI_xDR. This flag can generate an interrupt if FREQIE bit is set in SAI_xIM register.
    static constexpr uint32_t SAI_ASR_CNRDY = 0x10; // Codec not ready. This bit is read only. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register and configured in receiver mode. It can generate an interrupt if CNRDYIE bit is set in SAI_xIM register. This flag is cleared when the software sets CCNRDY bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_ASR_AFSDET = 0x20; // Anticipated frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97or SPDIF mode. It can generate an interrupt if AFSDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets CAFSDET bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_ASR_LFSDET = 0x40; // Late frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97 or SPDIF mode. It can generate an interrupt if LFSDETIE bit is set in the SAI_xIM register. This flag is cleared when the software sets bit CLFSDET in SAI_xCLRFR register
    typedef bit_field_t<16, 0x7> SAI_ASR_FLVL; // FIFO level threshold. This bit is read only. The FIFO level threshold flag is managed only by hardware and its setting depends on SAI block configuration (transmitter or receiver mode). If the SAI block is configured as transmitter: If SAI block is configured as receiver:

    static constexpr uint32_t SAI_ACLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_ACLRFR_COVRUDR = 0x1; // Clear overrun / underrun. This bit is write only. Programming this bit to 1 clears the OVRUDR flag in the SAI_xSR register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_ACLRFR_CMUTEDET = 0x2; // Mute detection flag. This bit is write only. Programming this bit to 1 clears the MUTEDET flag in the SAI_xSR register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_ACLRFR_CWCKCFG = 0x4; // Clear wrong clock configuration flag. This bit is write only. Programming this bit to 1 clears the WCKCFG flag in the SAI_xSR register. This bit is used only when the audio block is set as master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1 register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_ACLRFR_CCNRDY = 0x10; // Clear Codec not ready flag. This bit is write only. Programming this bit to 1 clears the CNRDY flag in the SAI_xSR register. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_ACLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the AFSDET flag in the SAI_xSR register. It is not used in AC97or SPDIF mode. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_ACLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the LFSDET flag in the SAI_xSR register. This bit is not used in AC97or SPDIF mode Reading this bit always returns the value 0.

    static constexpr uint32_t SAI_ADR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SAI_ADR_DATA; // Data A write to this register loads the FIFO provided the FIFO is not full. A read from this register empties the FIFO if the FIFO is not empty.

    static constexpr uint32_t SAI_BCR1_RESET_VALUE = 0x40; // Reset value
    typedef bit_field_t<0, 0x3> SAI_BCR1_MODE; // SAIx audio block mode immediately
    typedef bit_field_t<2, 0x3> SAI_BCR1_PRTCFG; // Protocol configuration. These bits are set and cleared by software. These bits have to be configured when the audio block is disabled.
    typedef bit_field_t<5, 0x7> SAI_BCR1_DS; // Data size. These bits are set and cleared by software. These bits are ignored when the SPDIF protocols are selected (bit PRTCFG[1:0]), because the frame and the data size are fixed in such case. When the companding mode is selected through COMP[1:0] bits, DS[1:0] are ignored since the data size is fixed to 8 bits by the algorithm. These bits must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_BCR1_LSBFIRST = 0x100; // Least significant bit first. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in AC97 audio protocol since AC97 data are always transferred with the MSB first. This bit has no meaning in SPDIF audio protocol since in SPDIF data are always transferred with LSB first.
    static constexpr uint32_t SAI_BCR1_CKSTR = 0x200; // Clock strobing edge. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in SPDIF audio protocol.
    typedef bit_field_t<10, 0x3> SAI_BCR1_SYNCEN; // Synchronization enable. These bits are set and cleared by software. They must be configured when the audio sub-block is disabled. Note: The audio sub-block should be configured as asynchronous when SPDIF mode is enabled.
    static constexpr uint32_t SAI_BCR1_MONO = 0x1000; // Mono mode. This bit is set and cleared by software. It is meaningful only when the number of slots is equal to 2. When the mono mode is selected, slot 0 data are duplicated on slot 1 when the audio block operates as a transmitter. In reception mode, the slot1 is discarded and only the data received from slot 0 are stored. Refer to Section: Mono/stereo mode for more details.
    static constexpr uint32_t SAI_BCR1_OUTDRIV = 0x2000; // Output drive. This bit is set and cleared by software. Note: This bit has to be set before enabling the audio block and after the audio block configuration.
    static constexpr uint32_t SAI_BCR1_SAIXEN = 0x10000; // Audio block enable where x is A or B. This bit is set by software. To switch off the audio block, the application software must program this bit to 0 and poll the bit till it reads back 0, meaning that the block is completely disabled. Before setting this bit to 1, check that it is set to 0, otherwise the enable command will not be taken into account. This bit allows to control the state of SAIx audio block. If it is disabled when an audio frame transfer is ongoing, the ongoing transfer completes and the cell is fully disabled at the end of this audio frame transfer. Note: When SAIx block is configured in master mode, the clock must be present on the input of SAIx before setting SAIXEN bit.
    static constexpr uint32_t SAI_BCR1_DMAEN = 0x20000; // DMA enable. This bit is set and cleared by software. Note: Since the audio block defaults to operate as a transmitter after reset, the MODE[1:0] bits must be configured before setting DMAEN to avoid a DMA request in receiver mode.
    static constexpr uint32_t SAI_BCR1_NOMCK = 0x80000; // No divider
    typedef bit_field_t<20, 0xf> SAI_BCR1_MCKDIV; // Master clock divider. These bits are set and cleared by software. These bits are meaningless when the audio block operates in slave mode. They have to be configured when the audio block is disabled. Others: the master clock frequency is calculated accordingly to the following formula:
    static constexpr uint32_t SAI_BCR1_OSR = 0x4000000; // Oversampling ratio for master clock

    static constexpr uint32_t SAI_BCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SAI_BCR2_FTH; // FIFO threshold. This bit is set and cleared by software.
    static constexpr uint32_t SAI_BCR2_FFLUSH = 0x8; // FIFO flush. This bit is set by software. It is always read as 0. This bit should be configured when the SAI is disabled.
    static constexpr uint32_t SAI_BCR2_TRIS = 0x10; // Tristate management on data line. This bit is set and cleared by software. It is meaningful only if the audio block is configured as a transmitter. This bit is not used when the audio block is configured in SPDIF mode. It should be configured when SAI is disabled. Refer to Section: Output data line management on an inactive slot for more details.
    static constexpr uint32_t SAI_BCR2_MUTE = 0x20; // Mute. This bit is set and cleared by software. It is meaningful only when the audio block operates as a transmitter. The MUTE value is linked to value of MUTEVAL if the number of slots is lower or equal to 2, or equal to 0 if it is greater than 2. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks.
    static constexpr uint32_t SAI_BCR2_MUTEVAL = 0x40; // Mute value. This bit is set and cleared by software.It must be written before enabling the audio block: SAIXEN. This bit is meaningful only when the audio block operates as a transmitter, the number of slots is lower or equal to 2 and the MUTE bit is set. If more slots are declared, the bit value sent during the transmission in mute mode is equal to 0, whatever the value of MUTEVAL. if the number of slot is lower or equal to 2 and MUTEVAL = 1, the MUTE value transmitted for each slot is the one sent during the previous frame. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks.
    typedef bit_field_t<7, 0x3f> SAI_BCR2_MUTECNT; // Mute counter. These bits are set and cleared by software. They are used only in reception mode. The value set in these bits is compared to the number of consecutive mute frames detected in reception. When the number of mute frames is equal to this value, the flag MUTEDET will be set and an interrupt will be generated if bit MUTEDETIE is set. Refer to Section: Mute mode for more details.
    static constexpr uint32_t SAI_BCR2_CPL = 0x2000; // Complement bit. This bit is set and cleared by software. It defines the type of complement to be used for companding mode Note: This bit has effect only when the companding mode is -Law algorithm or A-Law algorithm.
    typedef bit_field_t<14, 0x3> SAI_BCR2_COMP; // Companding mode. These bits are set and cleared by software. The -Law and the A-Law log are a part of the CCITT G.711 recommendation, the type of complement that will be used depends on CPL bit. The data expansion or data compression are determined by the state of bit MODE[0]. The data compression is applied if the audio block is configured as a transmitter. The data expansion is automatically applied when the audio block is configured as a receiver. Refer to Section: Companding mode for more details. Note: Companding mode is applicable only when TDM is selected.

    static constexpr uint32_t SAI_BFRCR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xff> SAI_BFRCR_FRL; // Frame length. These bits are set and cleared by software. They define the audio frame length expressed in number of SCK clock cycles: the number of bits in the frame is equal to FRL[7:0] + 1. The minimum number of bits to transfer in an audio frame must be equal to 8, otherwise the audio block will behaves in an unexpected way. This is the case when the data size is 8 bits and only one slot 0 is defined in NBSLOT[4:0] of SAI_xSLOTR register (NBSLOT[3:0] = 0000). In master mode, if the master clock (available on MCLK_x pin) is used, the frame length should be aligned with a number equal to a power of 2, ranging from 8 to 256. When the master clock is not used (NODIV = 1), it is recommended to program the frame length to an value ranging from 8 to 256. These bits are meaningless and are not used in AC97 or SPDIF audio block configuration.
    typedef bit_field_t<8, 0x7f> SAI_BFRCR_FSALL; // Frame synchronization active level length. These bits are set and cleared by software. They specify the length in number of bit clock (SCK) + 1 (FSALL[6:0] + 1) of the active level of the FS signal in the audio frame These bits are meaningless and are not used in AC97 or SPDIF audio block configuration. They must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_BFRCR_FSDEF = 0x10000; // Frame synchronization definition. This bit is set and cleared by software. When the bit is set, the number of slots defined in the SAI_xSLOTR register has to be even. It means that half of this number of slots will be dedicated to the left channel and the other slots for the right channel (e.g: this bit has to be set for I2S or MSB/LSB-justified protocols...). This bit is meaningless and is not used in AC97 or SPDIF audio block configuration. It must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_BFRCR_FSPOL = 0x20000; // Frame synchronization polarity. This bit is set and cleared by software. It is used to configure the level of the start of frame on the FS signal. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled.
    static constexpr uint32_t SAI_BFRCR_FSOFF = 0x40000; // Frame synchronization offset. This bit is set and cleared by software. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled.

    static constexpr uint32_t SAI_BSLOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> SAI_BSLOTR_FBOFF; // First bit offset These bits are set and cleared by software. The value set in this bitfield defines the position of the first data transfer bit in the slot. It represents an offset value. In transmission mode, the bits outside the data field are forced to 0. In reception mode, the extra received bits are discarded. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
    typedef bit_field_t<6, 0x3> SAI_BSLOTR_SLOTSZ; // Slot size This bits is set and cleared by software. The slot size must be higher or equal to the data size. If this condition is not respected, the behavior of the SAI will be undetermined. Refer to Section: Output data line management on an inactive slot for information on how to drive SD line. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
    typedef bit_field_t<8, 0xf> SAI_BSLOTR_NBSLOT; // Number of slots in an audio frame. These bits are set and cleared by software. The value set in this bitfield represents the number of slots + 1 in the audio frame (including the number of inactive slots). The maximum number of slots is 16. The number of slots should be even if FSDEF bit in the SAI_xFRCR register is set. The number of slots must be configured when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
    typedef bit_field_t<16, 0xffff> SAI_BSLOTR_SLOTEN; // Slot enable. These bits are set and cleared by software. Each SLOTEN bit corresponds to a slot position from 0 to 15 (maximum 16 slots). The slot must be enabled when the audio block is disabled. They are ignored in AC97 or SPDIF mode.

    static constexpr uint32_t SAI_BIM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_BIM_OVRUDRIE = 0x1; // Overrun/underrun interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the OVRUDR bit in the SAI_xSR register is set.
    static constexpr uint32_t SAI_BIM_MUTEDETIE = 0x2; // Mute detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the MUTEDET bit in the SAI_xSR register is set. This bit has a meaning only if the audio block is configured in receiver mode.
    static constexpr uint32_t SAI_BIM_WCKCFGIE = 0x4; // Wrong clock configuration interrupt enable. This bit is set and cleared by software. This bit is taken into account only if the audio block is configured as a master (MODE[1] = 0) and NODIV = 0. It generates an interrupt if the WCKCFG flag in the SAI_xSR register is set. Note: This bit is used only in TDM mode and is meaningless in other modes.
    static constexpr uint32_t SAI_BIM_FREQIE = 0x8; // FIFO request interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the FREQ bit in the SAI_xSR register is set. Since the audio block defaults to operate as a transmitter after reset, the MODE bit must be configured before setting FREQIE to avoid a parasitic interruption in receiver mode,
    static constexpr uint32_t SAI_BIM_CNRDYIE = 0x10; // Codec not ready interrupt enable (AC97). This bit is set and cleared by software. When the interrupt is enabled, the audio block detects in the slot 0 (tag0) of the AC97 frame if the Codec connected to this line is ready or not. If it is not ready, the CNRDY flag in the SAI_xSR register is set and an interruption i generated. This bit has a meaning only if the AC97 mode is selected through PRTCFG[1:0] bits and the audio block is operates as a receiver.
    static constexpr uint32_t SAI_BIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the AFSDET bit in the SAI_xSR register is set. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master.
    static constexpr uint32_t SAI_BIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the LFSDET bit is set in the SAI_xSR register. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master.

    static constexpr uint32_t SAI_BSR_RESET_VALUE = 0x8; // Reset value
    static constexpr uint32_t SAI_BSR_OVRUDR = 0x1; // Overrun / underrun. This bit is read only. The overrun and underrun conditions can occur only when the audio block is configured as a receiver and a transmitter, respectively. It can generate an interrupt if OVRUDRIE bit is set in SAI_xIM register. This flag is cleared when the software sets COVRUDR bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_BSR_MUTEDET = 0x2; // Mute detection. This bit is read only. This flag is set if consecutive 0 values are received in each slot of a given audio frame and for a consecutive number of audio frames (set in the MUTECNT bit in the SAI_xCR2 register). It can generate an interrupt if MUTEDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets bit CMUTEDET in the SAI_xCLRFR register.
    static constexpr uint32_t SAI_BSR_WCKCFG = 0x4; // Wrong clock configuration flag. This bit is read only. This bit is used only when the audio block operates in master mode (MODE[1] = 0) and NODIV = 0. It can generate an interrupt if WCKCFGIE bit is set in SAI_xIM register. This flag is cleared when the software sets CWCKCFG bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_BSR_FREQ = 0x8; // FIFO request. This bit is read only. The request depends on the audio block configuration: If the block is configured in transmission mode, the FIFO request is related to a write request operation in the SAI_xDR. If the block configured in reception, the FIFO request related to a read request operation from the SAI_xDR. This flag can generate an interrupt if FREQIE bit is set in SAI_xIM register.
    static constexpr uint32_t SAI_BSR_CNRDY = 0x10; // Codec not ready. This bit is read only. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register and configured in receiver mode. It can generate an interrupt if CNRDYIE bit is set in SAI_xIM register. This flag is cleared when the software sets CCNRDY bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_BSR_AFSDET = 0x20; // Anticipated frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97or SPDIF mode. It can generate an interrupt if AFSDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets CAFSDET bit in SAI_xCLRFR register.
    static constexpr uint32_t SAI_BSR_LFSDET = 0x40; // Late frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97 or SPDIF mode. It can generate an interrupt if LFSDETIE bit is set in the SAI_xIM register. This flag is cleared when the software sets bit CLFSDET in SAI_xCLRFR register
    typedef bit_field_t<16, 0x7> SAI_BSR_FLVL; // FIFO level threshold. This bit is read only. The FIFO level threshold flag is managed only by hardware and its setting depends on SAI block configuration (transmitter or receiver mode). If the SAI block is configured as transmitter: If SAI block is configured as receiver:

    static constexpr uint32_t SAI_BCLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_BCLRFR_COVRUDR = 0x1; // Clear overrun / underrun. This bit is write only. Programming this bit to 1 clears the OVRUDR flag in the SAI_xSR register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_BCLRFR_CMUTEDET = 0x2; // Mute detection flag. This bit is write only. Programming this bit to 1 clears the MUTEDET flag in the SAI_xSR register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_BCLRFR_CWCKCFG = 0x4; // Clear wrong clock configuration flag. This bit is write only. Programming this bit to 1 clears the WCKCFG flag in the SAI_xSR register. This bit is used only when the audio block is set as master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1 register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_BCLRFR_CCNRDY = 0x10; // Clear Codec not ready flag. This bit is write only. Programming this bit to 1 clears the CNRDY flag in the SAI_xSR register. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_BCLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the AFSDET flag in the SAI_xSR register. It is not used in AC97or SPDIF mode. Reading this bit always returns the value 0.
    static constexpr uint32_t SAI_BCLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the LFSDET flag in the SAI_xSR register. This bit is not used in AC97or SPDIF mode Reading this bit always returns the value 0.

    static constexpr uint32_t SAI_BDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SAI_BDR_DATA; // Data A write to this register loads the FIFO provided the FIFO is not full. A read from this register empties the FIFO if the FIFO is not empty.

    static constexpr uint32_t SAI_PDMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_PDMCR_PDMEN = 0x1; // PDM enable
    typedef bit_field_t<4, 0x3> SAI_PDMCR_MICNBR; // Number of microphones
    static constexpr uint32_t SAI_PDMCR_CKEN1 = 0x100; // Clock enable of bitstream clock number 1
    static constexpr uint32_t SAI_PDMCR_CKEN2 = 0x200; // Clock enable of bitstream clock number 2
    static constexpr uint32_t SAI_PDMCR_CKEN3 = 0x400; // Clock enable of bitstream clock number 3
    static constexpr uint32_t SAI_PDMCR_CKEN4 = 0x800; // Clock enable of bitstream clock number 4

    static constexpr uint32_t SAI_PDMDLY_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SAI_PDMDLY_DLYM1L; // Delay line adjust for first microphone of pair 1
    typedef bit_field_t<4, 0x7> SAI_PDMDLY_DLYM1R; // Delay line adjust for second microphone of pair 1
    typedef bit_field_t<8, 0x7> SAI_PDMDLY_DLYM2L; // Delay line for first microphone of pair 2
    typedef bit_field_t<12, 0x7> SAI_PDMDLY_DLYM2R; // Delay line for second microphone of pair 2
    typedef bit_field_t<16, 0x7> SAI_PDMDLY_DLYM3L; // Delay line for first microphone of pair 3
    typedef bit_field_t<20, 0x7> SAI_PDMDLY_DLYM3R; // Delay line for second microphone of pair 3
    typedef bit_field_t<24, 0x7> SAI_PDMDLY_DLYM4L; // Delay line for first microphone of pair 4
    typedef bit_field_t<28, 0x7> SAI_PDMDLY_DLYM4R; // Delay line for second microphone of pair 4
};

template<>
struct peripheral_t<STM32H742x, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SAI3>
{
    static constexpr periph_t P = SAI3;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SAI4>
{
    static constexpr periph_t P = SAI4;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32h742x_sai4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32h742x_sai4_t;
    static T& V;
};

using sai1_t = peripheral_t<svd, SAI1>;
using sai2_t = peripheral_t<svd, SAI2>;
using sai3_t = peripheral_t<svd, SAI3>;
using sai4_t = peripheral_t<svd, SAI4>;

template<int INST> struct sai_traits {};

template<> struct sai_traits<1>
{
    using sai = sai1_t;
    static constexpr signal_t CK1 = SAI1_CK1;
    static constexpr signal_t CK2 = SAI1_CK2;
    static constexpr signal_t D1 = SAI1_D1;
    static constexpr signal_t D2 = SAI1_D2;
    static constexpr signal_t D3 = SAI1_D3;
    static constexpr signal_t FS_A = SAI1_FS_A;
    static constexpr signal_t FS_B = SAI1_FS_B;
    static constexpr signal_t MCLK_A = SAI1_MCLK_A;
    static constexpr signal_t MCLK_B = SAI1_MCLK_B;
    static constexpr signal_t SCK_A = SAI1_SCK_A;
    static constexpr signal_t SCK_B = SAI1_SCK_B;
    static constexpr signal_t SD_A = SAI1_SD_A;
    static constexpr signal_t SD_B = SAI1_SD_B;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST;
    }
};

template<> struct sai_traits<2>
{
    using sai = sai2_t;
    static constexpr signal_t FS_A = SAI2_FS_A;
    static constexpr signal_t FS_B = SAI2_FS_B;
    static constexpr signal_t MCLK_A = SAI2_MCLK_A;
    static constexpr signal_t MCLK_B = SAI2_MCLK_B;
    static constexpr signal_t SCK_A = SAI2_SCK_A;
    static constexpr signal_t SCK_B = SAI2_SCK_B;
    static constexpr signal_t SD_A = SAI2_SD_A;
    static constexpr signal_t SD_B = SAI2_SD_B;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SAI2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SAI2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SAI2RST;
    }
};

template<> struct sai_traits<3>
{
    using sai = sai3_t;
    static constexpr signal_t FS_A = SAI3_FS_A;
    static constexpr signal_t FS_B = SAI3_FS_B;
    static constexpr signal_t MCLK_A = SAI3_MCLK_A;
    static constexpr signal_t MCLK_B = SAI3_MCLK_B;
    static constexpr signal_t SCK_A = SAI3_SCK_A;
    static constexpr signal_t SCK_B = SAI3_SCK_B;
    static constexpr signal_t SD_A = SAI3_SD_A;
    static constexpr signal_t SD_B = SAI3_SD_B;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SAI3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SAI3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SAI3RST;
    }
};

template<> struct sai_traits<4>
{
    using sai = sai4_t;
    static constexpr signal_t CK1 = SAI4_CK1;
    static constexpr signal_t CK2 = SAI4_CK2;
    static constexpr signal_t D1 = SAI4_D1;
    static constexpr signal_t D2 = SAI4_D2;
    static constexpr signal_t D3 = SAI4_D3;
    static constexpr signal_t FS_A = SAI4_FS_A;
    static constexpr signal_t FS_B = SAI4_FS_B;
    static constexpr signal_t MCLK_A = SAI4_MCLK_A;
    static constexpr signal_t MCLK_B = SAI4_MCLK_B;
    static constexpr signal_t SCK_A = SAI4_SCK_A;
    static constexpr signal_t SCK_B = SAI4_SCK_B;
    static constexpr signal_t SD_A = SAI4_SD_A;
    static constexpr signal_t SD_B = SAI4_SD_B;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB4ENR |= RCC::T::APB4ENR_SAI4EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB4ENR &= ~RCC::T::APB4ENR_SAI4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB4RSTR |= RCC::T::APB4RSTR_SAI4RST;
    }
};
