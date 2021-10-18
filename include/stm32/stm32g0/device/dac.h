#pragma once

////
//
//      STM32G0 DAC peripherals
//
///

// DAC: DAC

struct stm32g051_dac_t
{
    volatile uint32_t CR; // DAC control register
    volatile uint32_t SWTRGR; // DAC software trigger register
    volatile uint32_t DHR12R1; // DAC channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1; // DAC channel1 8-bit right aligned data holding register
    volatile uint32_t DHR12R2; // DAC channel2 12-bit right aligned data holding register
    volatile uint32_t DHR12L2; // DAC channel2 12-bit left aligned data holding register
    volatile uint32_t DHR8R2; // DAC channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD; // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1; // DAC channel1 data output register
    volatile uint32_t DOR2; // DAC channel2 data output register
    volatile uint32_t SR; // DAC status register
    volatile uint32_t CCR; // DAC calibration control register
    volatile uint32_t MCR; // DAC mode control register
    volatile uint32_t SHSR1; // DAC Sample and Hold sample time register 1
    volatile uint32_t SHSR2; // DAC Sample and Hold sample time register 2
    volatile uint32_t SHHR; // DAC Sample and Hold hold time register
    volatile uint32_t SHRR; // DAC Sample and Hold refresh time register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_EN1 = 0x1; // DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1.
    static constexpr uint32_t CR_TEN1 = 0x2; // DAC channel1 trigger enable This bit is set and cleared by software to enable/disable DAC channel1 trigger. Note: When software trigger is selected, the transfer from the DAC_DHR1 register to the DAC_DOR1 register takes only one dac_pclk clock cycle.
    typedef bit_field_t<2, 0xf> CR_TSEL1; // DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1 ... Refer to the trigger selection tables in for details on trigger configuration and mapping. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
    typedef bit_field_t<6, 0x3> CR_WAVE1; // DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. 1x: Triangle wave generation enabled Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
    typedef bit_field_t<8, 0xf> CR_MAMP1; // DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CEN1 = 0x4000; // DAC channel1 calibration enable This bit is set and cleared by software to enable/disable DAC channel1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.
    static constexpr uint32_t CR_EN2 = 0x10000; // DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2. Note: These bits are available only on dual-channel DACs. Refer to implementation.
    static constexpr uint32_t CR_TEN2 = 0x20000; // DAC channel2 trigger enable This bit is set and cleared by software to enable/disable DAC channel2 trigger Note: When software trigger is selected, the transfer from the DAC_DHR2 register to the DAC_DOR2 register takes only one dac_pclk clock cycle. These bits are available only on dual-channel DACs. Refer to implementation.
    typedef bit_field_t<18, 0xf> CR_TSEL2; // DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 ... Refer to the trigger selection tables in for details on trigger configuration and mapping. Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled). These bits are available only on dual-channel DACs. Refer to implementation.
    typedef bit_field_t<22, 0x3> CR_WAVE2; // DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled) These bits are available only on dual-channel DACs. Refer to implementation.
    typedef bit_field_t<24, 0xf> CR_MAMP2; // DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 Note: These bits are available only on dual-channel DACs. Refer to implementation.
    static constexpr uint32_t CR_DMAEN2 = 0x10000000; // DAC channel2 DMA enable This bit is set and cleared by software. Note: This bit is available only on dual-channel DACs. Refer to implementation.
    static constexpr uint32_t CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software. Note: This bit is available only on dual-channel DACs. Refer to implementation.
    static constexpr uint32_t CR_CEN2 = 0x40000000; // DAC channel2 calibration enable This bit is set and cleared by software to enable/disable DAC channel2 calibration, it can be written only if EN2 bit is set to 0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. Note: This bit is available only on dual-channel DACs. Refer to implementation.

    static constexpr uint32_t SWTRGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWTRGR_SWTRIG1 = 0x1; // DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one dac_pclk clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register.
    static constexpr uint32_t SWTRGR_SWTRIG2 = 0x2; // DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one dac_pclk clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register. This bit is available only on dual-channel DACs. Refer to implementation.

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data These bits are written by software. They specify 12-bit data for DAC channel1.

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data These bits are written by software. They specify 12-bit data for DAC channel1.

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data These bits are written by software. They specify 8-bit data for DAC channel1.

    static constexpr uint32_t DHR12R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R2_DACC2DHR; // DAC channel2 12-bit right-aligned data These bits are written by software. They specify 12-bit data for DAC channel2.

    static constexpr uint32_t DHR12L2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L2_DACC2DHR; // DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2.

    static constexpr uint32_t DHR8R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R2_DACC2DHR; // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.

    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
    typedef bit_field_t<16, 0xfff> DHR12RD_DACC2DHR; // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
    typedef bit_field_t<20, 0xfff> DHR12LD_DACC2DHR; // DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
    typedef bit_field_t<8, 0xff> DHR8RD_DACC2DHR; // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR1_DACC1DOR; // DAC channel1 data output These bits are read-only, they contain data output for DAC channel1.

    static constexpr uint32_t DOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR2_DACC2DOR; // DAC channel2 data output These bits are read-only, they contain data output for DAC channel2.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t SR_CAL_FLAG1 = 0x4000; // DAC channel1 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t SR_BWST1 = 0x8000; // DAC channel1 busy writing sample time flag This bit is systematically set just after Sample and hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3 LSI periods of synchronization).
    static constexpr uint32_t SR_DMAUDR2 = 0x20000000; // DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). Note: This bit is available only on dual-channel DACs. Refer to implementation.
    static constexpr uint32_t SR_CAL_FLAG2 = 0x40000000; // DAC channel2 calibration offset status This bit is set and cleared by hardware Note: This bit is available only on dual-channel DACs. Refer to implementation.
    static constexpr uint32_t SR_BWST2 = 0x80000000; // DAC channel2 busy writing sample time flag This bit is systematically set just after Sample and hold mode enable. It is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization). Note: This bit is available only on dual-channel DACs. Refer to implementation.

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_OTRIM1; // DAC channel1 offset trimming value
    typedef bit_field_t<16, 0x1f> CCR_OTRIM2; // DAC channel2 offset trimming value These bits are available only on dual-channel DACs. Refer to implementation.

    static constexpr uint32_t MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MCR_MODE1; // DAC channel1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC channel1 mode: DAC channel1 in Normal mode DAC channel1 in sample &amp; hold mode Note: This register can be modified only when EN1=0.
    typedef bit_field_t<16, 0x7> MCR_MODE2; // DAC channel2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC channel2 mode: DAC channel2 in Normal mode DAC channel2 in Sample and hold mode Note: This register can be modified only when EN2=0. Refer to for the availability of DAC channel2.

    static constexpr uint32_t SHSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR1_TSAMPLE1; // DAC channel1 sample time (only valid in Sample and hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWST1 of DAC_SR register is low, If BWST1=1, the write operation is ignored.

    static constexpr uint32_t SHSR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR2_TSAMPLE2; // DAC channel2 sample time (only valid in Sample and hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWST2 of DAC_SR register is low, if BWST2=1, the write operation is ignored.

    static constexpr uint32_t SHHR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0x3ff> SHHR_THOLD1; // DAC channel1 hold time (only valid in Sample and hold mode) Hold time= (THOLD[9:0]) x LSI clock period Note: This register can be modified only when EN1=0.
    typedef bit_field_t<16, 0x3ff> SHHR_THOLD2; // DAC channel2 hold time (only valid in Sample and hold mode). Hold time= (THOLD[9:0]) x LSI clock period Note: This register can be modified only when EN2=0. These bits are available only on dual-channel DACs. Refer to implementation.

    static constexpr uint32_t SHRR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0xff> SHRR_TREFRESH1; // DAC channel1 refresh time (only valid in Sample and hold mode) Refresh time= (TREFRESH[7:0]) x LSI clock period Note: This register can be modified only when EN1=0.
    typedef bit_field_t<16, 0xff> SHRR_TREFRESH2; // DAC channel2 refresh time (only valid in Sample and hold mode) Refresh time= (TREFRESH[7:0]) x LSI clock period Note: This register can be modified only when EN2=0. These bits are available only on dual-channel DACs. Refer to implementation.
};

// DAC: DAC

struct stm32g070_dac_t
{
    volatile uint32_t CR; // DAC control register
    volatile uint32_t SWTRGR; // DAC software trigger register
    volatile uint32_t DHR12R1; // DAC channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1; // DAC channel1 8-bit right aligned data holding register
    volatile uint32_t DHR12R2; // DAC channel2 12-bit right aligned data holding register
    volatile uint32_t DHR12L2; // DAC channel2 12-bit left aligned data holding register
    volatile uint32_t DHR8R2; // DAC channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD; // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1; // DAC channel1 data output register
    volatile uint32_t DOR2; // DAC channel2 data output register
    volatile uint32_t SR; // DAC status register
    volatile uint32_t CCR; // DAC calibration control register
    volatile uint32_t MCR; // DAC mode control register
    volatile uint32_t SHSR1; // DAC Sample and Hold sample time register 1
    volatile uint32_t SHSR2; // DAC Sample and Hold sample time register 2
    volatile uint32_t SHHR; // DAC Sample and Hold hold time register
    volatile uint32_t SHRR; // DAC Sample and Hold refresh time register
    reserved_t<0xe8> _0x50;
    volatile uint32_t IP_HWCFGR0; // DAC IP Hardware Configuration Register
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_EN1 = 0x1; // DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1.
    static constexpr uint32_t CR_TEN1 = 0x2; // DAC channel1 trigger enable
    typedef bit_field_t<2, 0xf> CR_TSEL1; // DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
    typedef bit_field_t<6, 0x3> CR_WAVE1; // DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
    typedef bit_field_t<8, 0xf> CR_MAMP1; // DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CEN1 = 0x4000; // DAC Channel 1 calibration enable This bit is set and cleared by software to enable/disable DAC channel 1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.
    static constexpr uint32_t CR_EN2 = 0x10000; // DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2.
    static constexpr uint32_t CR_TEN2 = 0x20000; // DAC channel2 trigger enable
    typedef bit_field_t<18, 0xf> CR_TSEL2; // DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled).
    typedef bit_field_t<22, 0x3> CR_WAVE2; // DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled)
    typedef bit_field_t<24, 0xf> CR_MAMP2; // DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
    static constexpr uint32_t CR_DMAEN2 = 0x10000000; // DAC channel2 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CEN2 = 0x40000000; // DAC Channel 2 calibration enable This bit is set and cleared by software to enable/disable DAC channel 2 calibration, it can be written only if bit EN2=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.

    static constexpr uint32_t SWTRGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWTRGR_SWTRIG1 = 0x1; // DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register.
    static constexpr uint32_t SWTRGR_SWTRIG2 = 0x2; // DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register.

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.

    static constexpr uint32_t DHR12R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R2_DACC2DHR; // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DHR12L2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L2_DACC2DHR; // DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2.

    static constexpr uint32_t DHR8R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R2_DACC2DHR; // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.

    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
    typedef bit_field_t<16, 0xfff> DHR12RD_DACC2DHR; // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
    typedef bit_field_t<20, 0xfff> DHR12LD_DACC2DHR; // DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
    typedef bit_field_t<8, 0xff> DHR8RD_DACC2DHR; // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR1_DACC1DOR; // DAC channel1 data output These bits are read-only, they contain data output for DAC channel1.

    static constexpr uint32_t DOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR2_DACC2DOR; // DAC channel2 data output These bits are read-only, they contain data output for DAC channel2.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t SR_CAL_FLAG1 = 0x4000; // DAC Channel 1 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t SR_BWST1 = 0x8000; // DAC Channel 1 busy writing sample time flag This bit is systematically set just after Sample &amp; Hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3LSI periods of synchronization).
    static constexpr uint32_t SR_DMAUDR2 = 0x20000000; // DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t SR_CAL_FLAG2 = 0x40000000; // DAC Channel 2 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t SR_BWST2 = 0x80000000; // DAC Channel 2 busy writing sample time flag This bit is systematically set just after Sample &amp; Hold mode enable and is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization).

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_OTRIM1; // DAC Channel 1 offset trimming value
    typedef bit_field_t<16, 0x1f> CCR_OTRIM2; // DAC Channel 2 offset trimming value

    static constexpr uint32_t MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MCR_MODE1; // DAC Channel 1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 1 mode: DAC Channel 1 in normal Mode DAC Channel 1 in sample &amp;amp; hold mode
    typedef bit_field_t<16, 0x7> MCR_MODE2; // DAC Channel 2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 2 mode: DAC Channel 2 in normal Mode DAC Channel 2 in sample &amp;amp; hold mode

    static constexpr uint32_t SHSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR1_TSAMPLE1; // DAC Channel 1 sample Time (only valid in sample &amp;amp; hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, If BWSTx=1, the write operation is ignored.

    static constexpr uint32_t SHSR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR2_TSAMPLE2; // DAC Channel 2 sample Time (only valid in sample &amp;amp; hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, if BWSTx=1, the write operation is ignored.

    static constexpr uint32_t SHHR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0x3ff> SHHR_THOLD1; // DAC Channel 1 hold Time (only valid in sample &amp;amp; hold mode) Hold time= (THOLD[9:0]) x T LSI
    typedef bit_field_t<16, 0x3ff> SHHR_THOLD2; // DAC Channel 2 hold time (only valid in sample &amp;amp; hold mode). Hold time= (THOLD[9:0]) x T LSI

    static constexpr uint32_t SHRR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0xff> SHRR_TREFRESH1; // DAC Channel 1 refresh Time (only valid in sample &amp;amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
    typedef bit_field_t<16, 0xff> SHRR_TREFRESH2; // DAC Channel 2 refresh Time (only valid in sample &amp;amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI


    static constexpr uint32_t IP_HWCFGR0_RESET_VALUE = 0x1111; // Reset value
    typedef bit_field_t<0, 0xf> IP_HWCFGR0_DUAL; // Dual DAC capability
    typedef bit_field_t<4, 0xf> IP_HWCFGR0_LFSR; // Pseudonoise wave generation capability
    typedef bit_field_t<8, 0xf> IP_HWCFGR0_TRIANGLE; // Triangle wave generation capability
    typedef bit_field_t<12, 0xf> IP_HWCFGR0_SAMPLE; // Sample and hold mode capability
    typedef bit_field_t<16, 0xff> IP_HWCFGR0_OR_CFG; // option register bit width

    static constexpr uint32_t VERR_RESET_VALUE = 0x31; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x110011; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

template<>
struct peripheral_t<STM32G051, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g051_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g051_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g051_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g051_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g070_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g070_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32g070_dac_t;
    static T& V;
};

using dac1_t = peripheral_t<svd, DAC1>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_DAC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_DAC1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_DAC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_DAC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_DAC1RST;
    }
};

template<> struct dma_request_t<DAC1, DAC_CHANNEL1>
{
    static constexpr unsigned ID = 8;
};

template<> struct dma_request_t<DAC1, DAC_CHANNEL2>
{
    static constexpr unsigned ID = 9;
};
