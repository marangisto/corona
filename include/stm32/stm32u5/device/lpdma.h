#pragma once

////
//
//      STM32U5 LPDMA peripherals
//
///

// LPDMA1: LPDMA1

struct stm32u5xx_lpdma1_t
{
    volatile uint32_t LPDMA_SECCFGR; // LPDMA secure configuration register
    volatile uint32_t LPDMA_PRIVCFGR; // LPDMA privileged configuration register
    volatile uint32_t LPDMA_RCFGLOCKR; // LPDMA configuration lock register
    volatile uint32_t LPDMA_MISR; // LPDMA non-secure masked interrupt status register
    volatile uint32_t LPDMA_SMISR; // LPDMA secure masked interrupt status register
    reserved_t<0xf> _0x14;
    volatile uint32_t LPDMA_C0LBAR; // LPDMA channel 0 linked-list base address register
    reserved_t<0x2> _0x54;
    volatile uint32_t LPDMA_C0FCR; // LPDMA channel 0 flag clear register
    volatile uint32_t LPDMA_C0SR; // LPDMA channel 0 status register
    volatile uint32_t LPDMA_C0CR; // LPDMA channel 0 control register
    reserved_t<0xa> _0x68;
    volatile uint32_t LPDMA_C0TR1; // LPDMA channel 0 transfer register 1
    volatile uint32_t LPDMA_C0TR2; // LPDMA channel 0 transfer register 2
    volatile uint32_t LPDMA_C0BR1; // LPDMA channel 0 block register 1
    volatile uint32_t LPDMA_C0SAR; // LPDMA channel 0 source address register
    volatile uint32_t LPDMA_C0DAR; // LPDMA channel 0 destination address register
    reserved_t<0xa> _0xa4;
    volatile uint32_t LPDMA_C0LLR; // LPDMA channel 0 linked-list address register
    volatile uint32_t LPDMA_C1LBAR; // LPDMA channel 1 linked-list base address register
    reserved_t<0x2> _0xd4;
    volatile uint32_t LPDMA_C1FCR; // LPDMA channel 1 flag clear register
    volatile uint32_t LPDMA_C1SR; // LPDMA channel 1 status register
    volatile uint32_t LPDMA_C1CR; // LPDMA channel 1 control register
    reserved_t<0xa> _0xe8;
    volatile uint32_t LPDMA_C1TR1; // LPDMA channel 1 transfer register 1
    volatile uint32_t LPDMA_C1TR2; // LPDMA channel 1 transfer register 2
    volatile uint32_t LPDMA_C1BR1; // LPDMA channel 1 block register 1
    volatile uint32_t LPDMA_C1SAR; // LPDMA channel 1 source address register
    volatile uint32_t LPDMA_C1DAR; // LPDMA channel 1 destination address register
    reserved_t<0xa> _0x124;
    volatile uint32_t LPDMA_C1LLR; // LPDMA channel 1 linked-list address register
    volatile uint32_t LPDMA_C2LBAR; // LPDMA channel 2 linked-list base address register
    reserved_t<0x2> _0x154;
    volatile uint32_t LPDMA_C2FCR; // LPDMA channel 2 flag clear register
    volatile uint32_t LPDMA_C2SR; // LPDMA channel 2 status register
    volatile uint32_t LPDMA_C2CR; // LPDMA channel 2 control register
    reserved_t<0xa> _0x168;
    volatile uint32_t LPDMA_C2TR1; // LPDMA channel 2 transfer register 1
    volatile uint32_t LPDMA_C2TR2; // LPDMA channel 2 transfer register 2
    volatile uint32_t LPDMA_C2BR1; // LPDMA channel 2 block register 1
    volatile uint32_t LPDMA_C2SAR; // LPDMA channel 2 source address register
    volatile uint32_t LPDMA_C2DAR; // LPDMA channel 2 destination address register
    reserved_t<0xa> _0x1a4;
    volatile uint32_t LPDMA_C2LLR; // LPDMA channel 2 linked-list address register
    volatile uint32_t LPDMA_C3LBAR; // LPDMA channel 3 linked-list base address register
    reserved_t<0x2> _0x1d4;
    volatile uint32_t LPDMA_C3FCR; // LPDMA channel 3 flag clear register
    volatile uint32_t LPDMA_C3SR; // LPDMA channel 3 status register
    volatile uint32_t LPDMA_C3CR; // LPDMA channel 3 control register
    reserved_t<0xa> _0x1e8;
    volatile uint32_t LPDMA_C3TR1; // LPDMA channel 3 transfer register 1
    volatile uint32_t LPDMA_C3TR2; // LPDMA channel 3 transfer register 2
    volatile uint32_t LPDMA_C3BR1; // LPDMA channel 3 block register 1
    volatile uint32_t LPDMA_C3SAR; // LPDMA channel 3 source address register
    volatile uint32_t LPDMA_C3DAR; // LPDMA channel 3 destination address register
    reserved_t<0xa> _0x224;
    volatile uint32_t LPDMA_C3LLR; // LPDMA channel 3 linked-list address register

    static constexpr uint32_t LPDMA_SECCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_SECCFGR_SEC0 = 0x1; // SEC0
    static constexpr uint32_t LPDMA_SECCFGR_SEC1 = 0x2; // SEC1
    static constexpr uint32_t LPDMA_SECCFGR_SEC2 = 0x4; // SEC2
    static constexpr uint32_t LPDMA_SECCFGR_SEC3 = 0x8; // SEC3

    static constexpr uint32_t LPDMA_PRIVCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_PRIVCFGR_PRIV0 = 0x1; // PRIV0
    static constexpr uint32_t LPDMA_PRIVCFGR_PRIV1 = 0x2; // PRIV1
    static constexpr uint32_t LPDMA_PRIVCFGR_PRIV2 = 0x4; // PRIV2
    static constexpr uint32_t LPDMA_PRIVCFGR_PRIV3 = 0x8; // PRIV3

    static constexpr uint32_t LPDMA_RCFGLOCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_RCFGLOCKR_LOCK0 = 0x1; // LOCK0
    static constexpr uint32_t LPDMA_RCFGLOCKR_LOCK1 = 0x2; // LOCK1
    static constexpr uint32_t LPDMA_RCFGLOCKR_LOCK2 = 0x4; // LOCK2
    static constexpr uint32_t LPDMA_RCFGLOCKR_LOCK3 = 0x8; // LOCK3

    static constexpr uint32_t LPDMA_MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_MISR_MIS0 = 0x1; // MIS0
    static constexpr uint32_t LPDMA_MISR_MIS1 = 0x2; // MIS1
    static constexpr uint32_t LPDMA_MISR_MIS2 = 0x4; // MIS2
    static constexpr uint32_t LPDMA_MISR_MIS3 = 0x8; // MIS3

    static constexpr uint32_t LPDMA_SMISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_SMISR_MIS0 = 0x1; // MIS0
    static constexpr uint32_t LPDMA_SMISR_MIS1 = 0x2; // MIS1
    static constexpr uint32_t LPDMA_SMISR_MIS2 = 0x4; // MIS2
    static constexpr uint32_t LPDMA_SMISR_MIS3 = 0x8; // MIS3


    static constexpr uint32_t LPDMA_C0LBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> LPDMA_C0LBAR_LBA; // linked-list base address of LPDMA channel x


    static constexpr uint32_t LPDMA_C0FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C0FCR_TCF = 0x100; // transfer complete flag clear
    static constexpr uint32_t LPDMA_C0FCR_HTF = 0x200; // half transfer flag clear
    static constexpr uint32_t LPDMA_C0FCR_DTEF = 0x400; // data transfer error flag clear
    static constexpr uint32_t LPDMA_C0FCR_ULEF = 0x800; // update link transfer error flag clear
    static constexpr uint32_t LPDMA_C0FCR_USEF = 0x1000; // user setting error flag clear
    static constexpr uint32_t LPDMA_C0FCR_SUSPF = 0x2000; // completed suspension flag clear
    static constexpr uint32_t LPDMA_C0FCR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C0SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t LPDMA_C0SR_IDLEF = 0x1; // idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN=1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state).
    static constexpr uint32_t LPDMA_C0SR_TCF = 0x100; // transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0].
    static constexpr uint32_t LPDMA_C0SR_HTF = 0x200; // half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination.
    static constexpr uint32_t LPDMA_C0SR_DTEF = 0x400; // data transfer error flag
    static constexpr uint32_t LPDMA_C0SR_ULEF = 0x800; // update link transfer error flag
    static constexpr uint32_t LPDMA_C0SR_USEF = 0x1000; // user setting error flag
    static constexpr uint32_t LPDMA_C0SR_SUSPF = 0x2000; // completed suspension flag
    static constexpr uint32_t LPDMA_C0SR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C0CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C0CR_EN = 0x1; // enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored.
    static constexpr uint32_t LPDMA_C0CR_RESET = 0x2; // reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF=1 and LPDMA_CxSR.IDLEF=LPDMA_CxCR.EN=1) - channel in disabled state (LPDMA_CxSR.IDLEF=1 and LPDMA_CxCR.EN=0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ).
    static constexpr uint32_t LPDMA_C0CR_SUSP = 0x4; // suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence.
    static constexpr uint32_t LPDMA_C0CR_TCIE = 0x100; // transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C0CR_HTIE = 0x200; // half transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C0CR_DTEIE = 0x400; // data transfer error interrupt enable
    static constexpr uint32_t LPDMA_C0CR_ULEIE = 0x800; // update link transfer error interrupt enable
    static constexpr uint32_t LPDMA_C0CR_USEIE = 0x1000; // user setting error interrupt enable
    static constexpr uint32_t LPDMA_C0CR_SUSPIE = 0x2000; // completed suspension interrupt enable
    static constexpr uint32_t LPDMA_C0CR_TOIE = 0x4000; // trigger overrun interrupt enable
    static constexpr uint32_t LPDMA_C0CR_LSM = 0x10000; // Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0]=0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1.
    typedef bit_field_t<22, 0x3> LPDMA_C0CR_PRIO; // priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN=0. This bit is read-only when EN=1.


    static constexpr uint32_t LPDMA_C0TR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> LPDMA_C0TR1_SDW_LOG2; // binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C0TR1_SINC = 0x8; // source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C0TR1_PAM = 0x800; // padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width &gt; source data width Case 2: If destination data width &lt; source data width
    static constexpr uint32_t LPDMA_C0TR1_SSEC = 0x8000; // security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure.
    typedef bit_field_t<16, 0x3> LPDMA_C0TR1_DDW_LOG2; // binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C0TR1_DINC = 0x80000; // destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C0TR1_DSEC = 0x80000000; // security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure.

    static constexpr uint32_t LPDMA_C0TR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> LPDMA_C0TR2_REQSEL; // DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN=1 and LPDMA_CxTR2.SWREQ=0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting.
    static constexpr uint32_t LPDMA_C0TR2_SWREQ = 0x200; // software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted.
    static constexpr uint32_t LPDMA_C0TR2_BREQ = 0x800; // block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else:
    typedef bit_field_t<14, 0x3> LPDMA_C0TR2_TRIGM; // trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0]=0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0]=0b01 or respectively TRIGPOL[1:0]=0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF=1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE=1). The channel is not automatically disabled by hardware due to a trigger overrun.
    typedef bit_field_t<16, 0x1f> LPDMA_C0TR2_TRIGSEL; // trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0]=00.
    typedef bit_field_t<24, 0x3> LPDMA_C0TR2_TRIGPOL; // trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0].
    typedef bit_field_t<30, 0x3> LPDMA_C0TR2_TCEM; // transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1.

    static constexpr uint32_t LPDMA_C0BR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPDMA_C0BR1_BNDT; // block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64Kbytes -1. Once the last data transfer is completed (BNDT[15:0]=0): - if LPDMA_CxLLR.UB1=1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1=0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx=0 and if LPDMA_CxLLR.LA[15:0]=0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR=0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.

    static constexpr uint32_t LPDMA_C0SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C0SAR_SA; // source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA=1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.

    static constexpr uint32_t LPDMA_C0DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C0DAR_DA; // destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA=1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.


    static constexpr uint32_t LPDMA_C0LLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fff> LPDMA_C0LLR_LA; // pointer (16-bit low-significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:20]=0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored.
    static constexpr uint32_t LPDMA_C0LLR_ULL = 0x10000; // Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C0LLR_UDA = 0x8000000; // Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C0LLR_USA = 0x10000000; // update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C0LLR_UB1 = 0x20000000; // Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C0LLR_UT2 = 0x40000000; // Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C0LLR_UT1 = 0x80000000; // Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer.

    static constexpr uint32_t LPDMA_C1LBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> LPDMA_C1LBAR_LBA; // linked-list base address of LPDMA channel x


    static constexpr uint32_t LPDMA_C1FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C1FCR_TCF = 0x100; // transfer complete flag clear
    static constexpr uint32_t LPDMA_C1FCR_HTF = 0x200; // half transfer flag clear
    static constexpr uint32_t LPDMA_C1FCR_DTEF = 0x400; // data transfer error flag clear
    static constexpr uint32_t LPDMA_C1FCR_ULEF = 0x800; // update link transfer error flag clear
    static constexpr uint32_t LPDMA_C1FCR_USEF = 0x1000; // user setting error flag clear
    static constexpr uint32_t LPDMA_C1FCR_SUSPF = 0x2000; // completed suspension flag clear
    static constexpr uint32_t LPDMA_C1FCR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C1SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t LPDMA_C1SR_IDLEF = 0x1; // idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN=1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state).
    static constexpr uint32_t LPDMA_C1SR_TCF = 0x100; // transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0].
    static constexpr uint32_t LPDMA_C1SR_HTF = 0x200; // half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination.
    static constexpr uint32_t LPDMA_C1SR_DTEF = 0x400; // data transfer error flag
    static constexpr uint32_t LPDMA_C1SR_ULEF = 0x800; // update link transfer error flag
    static constexpr uint32_t LPDMA_C1SR_USEF = 0x1000; // user setting error flag
    static constexpr uint32_t LPDMA_C1SR_SUSPF = 0x2000; // completed suspension flag
    static constexpr uint32_t LPDMA_C1SR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C1CR_EN = 0x1; // enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored.
    static constexpr uint32_t LPDMA_C1CR_RESET = 0x2; // reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF=1 and LPDMA_CxSR.IDLEF=LPDMA_CxCR.EN=1) - channel in disabled state (LPDMA_CxSR.IDLEF=1 and LPDMA_CxCR.EN=0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ).
    static constexpr uint32_t LPDMA_C1CR_SUSP = 0x4; // suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence.
    static constexpr uint32_t LPDMA_C1CR_TCIE = 0x100; // transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C1CR_HTIE = 0x200; // half transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C1CR_DTEIE = 0x400; // data transfer error interrupt enable
    static constexpr uint32_t LPDMA_C1CR_ULEIE = 0x800; // update link transfer error interrupt enable
    static constexpr uint32_t LPDMA_C1CR_USEIE = 0x1000; // user setting error interrupt enable
    static constexpr uint32_t LPDMA_C1CR_SUSPIE = 0x2000; // completed suspension interrupt enable
    static constexpr uint32_t LPDMA_C1CR_TOIE = 0x4000; // trigger overrun interrupt enable
    static constexpr uint32_t LPDMA_C1CR_LSM = 0x10000; // Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0]=0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1.
    typedef bit_field_t<22, 0x3> LPDMA_C1CR_PRIO; // priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN=0. This bit is read-only when EN=1.


    static constexpr uint32_t LPDMA_C1TR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> LPDMA_C1TR1_SDW_LOG2; // binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C1TR1_SINC = 0x8; // source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C1TR1_PAM = 0x800; // padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width &gt; source data width Case 2: If destination data width &lt; source data width
    static constexpr uint32_t LPDMA_C1TR1_SSEC = 0x8000; // security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure.
    typedef bit_field_t<16, 0x3> LPDMA_C1TR1_DDW_LOG2; // binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C1TR1_DINC = 0x80000; // destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C1TR1_DSEC = 0x80000000; // security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure.

    static constexpr uint32_t LPDMA_C1TR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> LPDMA_C1TR2_REQSEL; // DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN=1 and LPDMA_CxTR2.SWREQ=0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting.
    static constexpr uint32_t LPDMA_C1TR2_SWREQ = 0x200; // software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted.
    static constexpr uint32_t LPDMA_C1TR2_BREQ = 0x800; // block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else:
    typedef bit_field_t<14, 0x3> LPDMA_C1TR2_TRIGM; // trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0]=0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0]=0b01 or respectively TRIGPOL[1:0]=0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF=1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE=1). The channel is not automatically disabled by hardware due to a trigger overrun.
    typedef bit_field_t<16, 0x1f> LPDMA_C1TR2_TRIGSEL; // trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0]=00.
    typedef bit_field_t<24, 0x3> LPDMA_C1TR2_TRIGPOL; // trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0].
    typedef bit_field_t<30, 0x3> LPDMA_C1TR2_TCEM; // transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1.

    static constexpr uint32_t LPDMA_C1BR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPDMA_C1BR1_BNDT; // block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64Kbytes -1. Once the last data transfer is completed (BNDT[15:0]=0): - if LPDMA_CxLLR.UB1=1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1=0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx=0 and if LPDMA_CxLLR.LA[15:0]=0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR=0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.

    static constexpr uint32_t LPDMA_C1SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C1SAR_SA; // source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA=1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.

    static constexpr uint32_t LPDMA_C1DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C1DAR_DA; // destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA=1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.


    static constexpr uint32_t LPDMA_C1LLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fff> LPDMA_C1LLR_LA; // pointer (16-bit low-significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:20]=0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored.
    static constexpr uint32_t LPDMA_C1LLR_ULL = 0x10000; // Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C1LLR_UDA = 0x8000000; // Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C1LLR_USA = 0x10000000; // update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C1LLR_UB1 = 0x20000000; // Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C1LLR_UT2 = 0x40000000; // Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C1LLR_UT1 = 0x80000000; // Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer.

    static constexpr uint32_t LPDMA_C2LBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> LPDMA_C2LBAR_LBA; // linked-list base address of LPDMA channel x


    static constexpr uint32_t LPDMA_C2FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C2FCR_TCF = 0x100; // transfer complete flag clear
    static constexpr uint32_t LPDMA_C2FCR_HTF = 0x200; // half transfer flag clear
    static constexpr uint32_t LPDMA_C2FCR_DTEF = 0x400; // data transfer error flag clear
    static constexpr uint32_t LPDMA_C2FCR_ULEF = 0x800; // update link transfer error flag clear
    static constexpr uint32_t LPDMA_C2FCR_USEF = 0x1000; // user setting error flag clear
    static constexpr uint32_t LPDMA_C2FCR_SUSPF = 0x2000; // completed suspension flag clear
    static constexpr uint32_t LPDMA_C2FCR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C2SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t LPDMA_C2SR_IDLEF = 0x1; // idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN=1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state).
    static constexpr uint32_t LPDMA_C2SR_TCF = 0x100; // transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0].
    static constexpr uint32_t LPDMA_C2SR_HTF = 0x200; // half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination.
    static constexpr uint32_t LPDMA_C2SR_DTEF = 0x400; // data transfer error flag
    static constexpr uint32_t LPDMA_C2SR_ULEF = 0x800; // update link transfer error flag
    static constexpr uint32_t LPDMA_C2SR_USEF = 0x1000; // user setting error flag
    static constexpr uint32_t LPDMA_C2SR_SUSPF = 0x2000; // completed suspension flag
    static constexpr uint32_t LPDMA_C2SR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C2CR_EN = 0x1; // enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored.
    static constexpr uint32_t LPDMA_C2CR_RESET = 0x2; // reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF=1 and LPDMA_CxSR.IDLEF=LPDMA_CxCR.EN=1) - channel in disabled state (LPDMA_CxSR.IDLEF=1 and LPDMA_CxCR.EN=0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ).
    static constexpr uint32_t LPDMA_C2CR_SUSP = 0x4; // suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence.
    static constexpr uint32_t LPDMA_C2CR_TCIE = 0x100; // transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C2CR_HTIE = 0x200; // half transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C2CR_DTEIE = 0x400; // data transfer error interrupt enable
    static constexpr uint32_t LPDMA_C2CR_ULEIE = 0x800; // update link transfer error interrupt enable
    static constexpr uint32_t LPDMA_C2CR_USEIE = 0x1000; // user setting error interrupt enable
    static constexpr uint32_t LPDMA_C2CR_SUSPIE = 0x2000; // completed suspension interrupt enable
    static constexpr uint32_t LPDMA_C2CR_TOIE = 0x4000; // trigger overrun interrupt enable
    static constexpr uint32_t LPDMA_C2CR_LSM = 0x10000; // Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0]=0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1.
    typedef bit_field_t<22, 0x3> LPDMA_C2CR_PRIO; // priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN=0. This bit is read-only when EN=1.


    static constexpr uint32_t LPDMA_C2TR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> LPDMA_C2TR1_SDW_LOG2; // binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C2TR1_SINC = 0x8; // source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C2TR1_PAM = 0x800; // padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width &gt; source data width Case 2: If destination data width &lt; source data width
    static constexpr uint32_t LPDMA_C2TR1_SSEC = 0x8000; // security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure.
    typedef bit_field_t<16, 0x3> LPDMA_C2TR1_DDW_LOG2; // binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C2TR1_DINC = 0x80000; // destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C2TR1_DSEC = 0x80000000; // security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure.

    static constexpr uint32_t LPDMA_C2TR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> LPDMA_C2TR2_REQSEL; // DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN=1 and LPDMA_CxTR2.SWREQ=0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting.
    static constexpr uint32_t LPDMA_C2TR2_SWREQ = 0x200; // software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted.
    static constexpr uint32_t LPDMA_C2TR2_BREQ = 0x800; // block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else:
    typedef bit_field_t<14, 0x3> LPDMA_C2TR2_TRIGM; // trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0]=0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0]=0b01 or respectively TRIGPOL[1:0]=0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF=1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE=1). The channel is not automatically disabled by hardware due to a trigger overrun.
    typedef bit_field_t<16, 0x1f> LPDMA_C2TR2_TRIGSEL; // trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0]=00.
    typedef bit_field_t<24, 0x3> LPDMA_C2TR2_TRIGPOL; // trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0].
    typedef bit_field_t<30, 0x3> LPDMA_C2TR2_TCEM; // transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1.

    static constexpr uint32_t LPDMA_C2BR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPDMA_C2BR1_BNDT; // block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64Kbytes -1. Once the last data transfer is completed (BNDT[15:0]=0): - if LPDMA_CxLLR.UB1=1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1=0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx=0 and if LPDMA_CxLLR.LA[15:0]=0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR=0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.

    static constexpr uint32_t LPDMA_C2SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C2SAR_SA; // source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA=1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.

    static constexpr uint32_t LPDMA_C2DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C2DAR_DA; // destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA=1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.


    static constexpr uint32_t LPDMA_C2LLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fff> LPDMA_C2LLR_LA; // pointer (16-bit low-significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:20]=0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored.
    static constexpr uint32_t LPDMA_C2LLR_ULL = 0x10000; // Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C2LLR_UDA = 0x8000000; // Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C2LLR_USA = 0x10000000; // update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C2LLR_UB1 = 0x20000000; // Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C2LLR_UT2 = 0x40000000; // Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C2LLR_UT1 = 0x80000000; // Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer.

    static constexpr uint32_t LPDMA_C3LBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> LPDMA_C3LBAR_LBA; // linked-list base address of LPDMA channel x


    static constexpr uint32_t LPDMA_C3FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C3FCR_TCF = 0x100; // transfer complete flag clear
    static constexpr uint32_t LPDMA_C3FCR_HTF = 0x200; // half transfer flag clear
    static constexpr uint32_t LPDMA_C3FCR_DTEF = 0x400; // data transfer error flag clear
    static constexpr uint32_t LPDMA_C3FCR_ULEF = 0x800; // update link transfer error flag clear
    static constexpr uint32_t LPDMA_C3FCR_USEF = 0x1000; // user setting error flag clear
    static constexpr uint32_t LPDMA_C3FCR_SUSPF = 0x2000; // completed suspension flag clear
    static constexpr uint32_t LPDMA_C3FCR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C3SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t LPDMA_C3SR_IDLEF = 0x1; // idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN=1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state).
    static constexpr uint32_t LPDMA_C3SR_TCF = 0x100; // transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0].
    static constexpr uint32_t LPDMA_C3SR_HTF = 0x200; // half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination.
    static constexpr uint32_t LPDMA_C3SR_DTEF = 0x400; // data transfer error flag
    static constexpr uint32_t LPDMA_C3SR_ULEF = 0x800; // update link transfer error flag
    static constexpr uint32_t LPDMA_C3SR_USEF = 0x1000; // user setting error flag
    static constexpr uint32_t LPDMA_C3SR_SUSPF = 0x2000; // completed suspension flag
    static constexpr uint32_t LPDMA_C3SR_TOF = 0x4000; // trigger overrun flag clear

    static constexpr uint32_t LPDMA_C3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPDMA_C3CR_EN = 0x1; // enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored.
    static constexpr uint32_t LPDMA_C3CR_RESET = 0x2; // reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF=1 and LPDMA_CxSR.IDLEF=LPDMA_CxCR.EN=1) - channel in disabled state (LPDMA_CxSR.IDLEF=1 and LPDMA_CxCR.EN=0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ).
    static constexpr uint32_t LPDMA_C3CR_SUSP = 0x4; // suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence.
    static constexpr uint32_t LPDMA_C3CR_TCIE = 0x100; // transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C3CR_HTIE = 0x200; // half transfer complete interrupt enable
    static constexpr uint32_t LPDMA_C3CR_DTEIE = 0x400; // data transfer error interrupt enable
    static constexpr uint32_t LPDMA_C3CR_ULEIE = 0x800; // update link transfer error interrupt enable
    static constexpr uint32_t LPDMA_C3CR_USEIE = 0x1000; // user setting error interrupt enable
    static constexpr uint32_t LPDMA_C3CR_SUSPIE = 0x2000; // completed suspension interrupt enable
    static constexpr uint32_t LPDMA_C3CR_TOIE = 0x4000; // trigger overrun interrupt enable
    static constexpr uint32_t LPDMA_C3CR_LSM = 0x10000; // Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0]=0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1.
    typedef bit_field_t<22, 0x3> LPDMA_C3CR_PRIO; // priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN=0. This bit is read-only when EN=1.


    static constexpr uint32_t LPDMA_C3TR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> LPDMA_C3TR1_SDW_LOG2; // binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C3TR1_SINC = 0x8; // source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C3TR1_PAM = 0x800; // padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width &gt; source data width Case 2: If destination data width &lt; source data width
    static constexpr uint32_t LPDMA_C3TR1_SSEC = 0x8000; // security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure.
    typedef bit_field_t<16, 0x3> LPDMA_C3TR1_DDW_LOG2; // binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued.
    static constexpr uint32_t LPDMA_C3TR1_DINC = 0x80000; // destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer.
    static constexpr uint32_t LPDMA_C3TR1_DSEC = 0x80000000; // security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx=1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx=1. A secure write is ignored when LPDMA_SECCFGR.SECx=0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure.

    static constexpr uint32_t LPDMA_C3TR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> LPDMA_C3TR2_REQSEL; // DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN=1 and LPDMA_CxTR2.SWREQ=0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting.
    static constexpr uint32_t LPDMA_C3TR2_SWREQ = 0x200; // software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted.
    static constexpr uint32_t LPDMA_C3TR2_BREQ = 0x800; // block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else:
    typedef bit_field_t<14, 0x3> LPDMA_C3TR2_TRIGM; // trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0]=0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0]=0b01 or respectively TRIGPOL[1:0]=0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF=1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE=1). The channel is not automatically disabled by hardware due to a trigger overrun.
    typedef bit_field_t<16, 0x1f> LPDMA_C3TR2_TRIGSEL; // trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0]=00.
    typedef bit_field_t<24, 0x3> LPDMA_C3TR2_TRIGPOL; // trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0].
    typedef bit_field_t<30, 0x3> LPDMA_C3TR2_TCEM; // transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1.

    static constexpr uint32_t LPDMA_C3BR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPDMA_C3BR1_BNDT; // block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64Kbytes -1. Once the last data transfer is completed (BNDT[15:0]=0): - if LPDMA_CxLLR.UB1=1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1=0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx=0 and if LPDMA_CxLLR.LA[15:0]=0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR=0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.

    static constexpr uint32_t LPDMA_C3SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C3SAR_SA; // source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA=1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.

    static constexpr uint32_t LPDMA_C3DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> LPDMA_C3DAR_DA; // destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA=1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued.


    static constexpr uint32_t LPDMA_C3LLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fff> LPDMA_C3LLR_LA; // pointer (16-bit low-significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:20]=0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored.
    static constexpr uint32_t LPDMA_C3LLR_ULL = 0x10000; // Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C3LLR_UDA = 0x8000000; // Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C3LLR_USA = 0x10000000; // update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C3LLR_UB1 = 0x20000000; // Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C3LLR_UT2 = 0x40000000; // Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer.
    static constexpr uint32_t LPDMA_C3LLR_UT1 = 0x80000000; // Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer.
};

template<>
struct peripheral_t<STM32U5xx, LPDMA1>
{
    static constexpr periph_t P = LPDMA1;
    using T = stm32u5xx_lpdma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPDMA1>
{
    static constexpr periph_t P = SEC_LPDMA1;
    using T = stm32u5xx_lpdma1_t;
    static T& V;
};

using lpdma1_t = peripheral_t<svd, LPDMA1>;
using sec_lpdma1_t = peripheral_t<svd, SEC_LPDMA1>;
