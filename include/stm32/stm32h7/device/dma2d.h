#pragma once

////
//
//      STM32H7 DMA2D peripherals
//
///

// DMA2D: DMA2D

struct stm32h742x_dma2d_t
{
    volatile uint32_t CR; // DMA2D control register
    volatile uint32_t ISR; // DMA2D Interrupt Status Register
    volatile uint32_t IFCR; // DMA2D interrupt flag clear register
    volatile uint32_t FGMAR; // DMA2D foreground memory address register
    volatile uint32_t FGOR; // DMA2D foreground offset register
    volatile uint32_t BGMAR; // DMA2D background memory address register
    volatile uint32_t BGOR; // DMA2D background offset register
    volatile uint32_t FGPFCCR; // DMA2D foreground PFC control register
    volatile uint32_t FGCOLR; // DMA2D foreground color register
    volatile uint32_t BGPFCCR; // DMA2D background PFC control register
    volatile uint32_t BGCOLR; // DMA2D background color register
    volatile uint32_t FGCMAR; // DMA2D foreground CLUT memory address register
    volatile uint32_t BGCMAR; // DMA2D background CLUT memory address register
    volatile uint32_t OPFCCR; // DMA2D output PFC control register
    volatile uint32_t OCOLR; // DMA2D output color register
    volatile uint32_t OMAR; // DMA2D output memory address register
    volatile uint32_t OOR; // DMA2D output offset register
    volatile uint32_t NLR; // DMA2D number of line register
    volatile uint32_t LWR; // DMA2D line watermark register
    volatile uint32_t AMTCR; // DMA2D AXI master timer configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_START = 0x1; // Start This bit can be used to launch the DMA2D according to the parameters loaded in the various configuration registers
    static constexpr uint32_t CR_SUSP = 0x2; // Suspend This bit can be used to suspend the current transfer. This bit is set and reset by software. It is automatically reset by hardware when the START bit is reset.
    static constexpr uint32_t CR_ABORT = 0x4; // Abort This bit can be used to abort the current transfer. This bit is set by software and is automatically reset by hardware when the START bit is reset.
    static constexpr uint32_t CR_TEIE = 0x100; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_TCIE = 0x200; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_TWIE = 0x400; // Transfer watermark interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CAEIE = 0x800; // CLUT access error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CTCIE = 0x1000; // CLUT transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CEIE = 0x2000; // Configuration Error Interrupt Enable This bit is set and cleared by software.
    typedef bit_field_t<16, 0x3> CR_MODE; // DMA2D mode This bit is set and cleared by software. It cannot be modified while a transfer is ongoing.

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TEIF = 0x1; // Transfer error interrupt flag This bit is set when an error occurs during a DMA transfer (data transfer or automatic CLUT loading).
    static constexpr uint32_t ISR_TCIF = 0x2; // Transfer complete interrupt flag This bit is set when a DMA2D transfer operation is complete (data transfer only).
    static constexpr uint32_t ISR_TWIF = 0x4; // Transfer watermark interrupt flag This bit is set when the last pixel of the watermarked line has been transferred.
    static constexpr uint32_t ISR_CAEIF = 0x8; // CLUT access error interrupt flag This bit is set when the CPU accesses the CLUT while the CLUT is being automatically copied from a system memory to the internal DMA2D.
    static constexpr uint32_t ISR_CTCIF = 0x10; // CLUT transfer complete interrupt flag This bit is set when the CLUT copy from a system memory area to the internal DMA2D memory is complete.
    static constexpr uint32_t ISR_CEIF = 0x20; // Configuration error interrupt flag This bit is set when the START bit of DMA2D_CR, DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong configuration has been programmed.

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CTEIF = 0x1; // Clear Transfer error interrupt flag Programming this bit to 1 clears the TEIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CTCIF = 0x2; // Clear transfer complete interrupt flag Programming this bit to 1 clears the TCIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CTWIF = 0x4; // Clear transfer watermark interrupt flag Programming this bit to 1 clears the TWIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CAECIF = 0x8; // Clear CLUT access error interrupt flag Programming this bit to 1 clears the CAEIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CCTCIF = 0x10; // Clear CLUT transfer complete interrupt flag Programming this bit to 1 clears the CTCIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CCEIF = 0x20; // Clear configuration error interrupt flag Programming this bit to 1 clears the CEIF flag in the DMA2D_ISR register

    static constexpr uint32_t FGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FGMAR_MA; // Memory address Address of the data used for the foreground image. This register can only be written when data transfers are disabled. Once the data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.

    static constexpr uint32_t FGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> FGOR_LO; // Line offset Line offset used for the foreground expressed in pixel. This value is used to generate the address. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once a data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.

    static constexpr uint32_t BGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BGMAR_MA; // Memory address Address of the data used for the background image. This register can only be written when data transfers are disabled. Once a data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.

    static constexpr uint32_t BGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> BGOR_LO; // Line offset Line offset used for the background image (expressed in pixel). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.

    static constexpr uint32_t FGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FGPFCCR_CM; // Color mode These bits defines the color format of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t FGPFCCR_CCM = 0x10; // CLUT color mode This bit defines the color format of the CLUT. It can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
    static constexpr uint32_t FGPFCCR_START = 0x20; // Start This bit can be set to start the automatic loading of the CLUT. It is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already ongoing (data transfer or automatic background CLUT transfer).
    typedef bit_field_t<8, 0xff> FGPFCCR_CS; // CLUT size These bits define the size of the CLUT used for the foreground image. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
    typedef bit_field_t<16, 0x3> FGPFCCR_AM; // Alpha mode These bits select the alpha channel value to be used for the foreground image. They can only be written data the transfer are disabled. Once the transfer has started, they become read-only. other configurations are meaningless
    typedef bit_field_t<18, 0x3> FGPFCCR_CSS; // Chroma Sub-Sampling These bits define the chroma sub-sampling mode for YCbCr color mode. Once the transfer has started, these bits are read-only. others: meaningless
    static constexpr uint32_t FGPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t FGPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
    typedef bit_field_t<24, 0xff> FGPFCCR_ALPHA; // Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied by the original alpha value according to the alpha mode selected through the AM[1:0] bits. These bits can only be written when data transfers are disabled. Once a transfer has started, they become read-only.

    static constexpr uint32_t FGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FGCOLR_BLUE; // Blue Value These bits defines the blue value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
    typedef bit_field_t<8, 0xff> FGCOLR_GREEN; // Green Value These bits defines the green value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
    typedef bit_field_t<16, 0xff> FGCOLR_RED; // Red Value These bits defines the red value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t BGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> BGPFCCR_CM; // Color mode These bits define the color format of the foreground image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t BGPFCCR_CCM = 0x10; // CLUT Color mode These bits define the color format of the CLUT. This register can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
    static constexpr uint32_t BGPFCCR_START = 0x20; // Start This bit is set to start the automatic loading of the CLUT. This bit is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in the DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already on going (data transfer or automatic BackGround CLUT transfer).
    typedef bit_field_t<8, 0xff> BGPFCCR_CS; // CLUT size These bits define the size of the CLUT used for the BG. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
    typedef bit_field_t<16, 0x3> BGPFCCR_AM; // Alpha mode These bits define which alpha channel value to be used for the background image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t BGPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t BGPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
    typedef bit_field_t<24, 0xff> BGPFCCR_ALPHA; // Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied with the original alpha value according to the alpha mode selected with bits AM[1: 0]. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t BGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BGCOLR_BLUE; // Blue Value These bits define the blue value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<8, 0xff> BGCOLR_GREEN; // Green Value These bits define the green value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0xff> BGCOLR_RED; // Red Value These bits define the red value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t FGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FGCMAR_MA; // Memory Address Address of the data used for the CLUT address dedicated to the foreground image. This register can only be written when no transfer is ongoing. Once the CLUT transfer has started, this register is read-only. If the foreground CLUT format is 32-bit, the address must be 32-bit aligned.

    static constexpr uint32_t BGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BGCMAR_MA; // Memory address Address of the data used for the CLUT address dedicated to the background image. This register can only be written when no transfer is on going. Once the CLUT transfer has started, this register is read-only. If the background CLUT format is 32-bit, the address must be 32-bit aligned.

    static constexpr uint32_t OPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> OPFCCR_CM; // Color mode These bits define the color format of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t OPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t OPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.

    static constexpr uint32_t OCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> OCOLR_BLUE; // Blue Value These bits define the blue value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<8, 0xff> OCOLR_GREEN; // Green Value These bits define the green value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0xff> OCOLR_RED; // Red Value These bits define the red value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<24, 0xff> OCOLR_ALPHA; // Alpha Channel Value These bits define the alpha channel of the output color. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t OMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OMAR_MA; // Memory Address Address of the data used for the output FIFO. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned and a 16-bit per pixel format must be 16-bit aligned.

    static constexpr uint32_t OOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> OOR_LO; // Line Offset Line offset used for the output (expressed in pixels). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t NLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> NLR_NL; // Number of lines Number of lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0x3fff> NLR_PL; // Pixel per lines Number of pixels per lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. If any of the input image format is 4-bit per pixel, pixel per lines must be even.

    static constexpr uint32_t LWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LWR_LW; // Line watermark These bits allow to configure the line watermark for interrupt generation. An interrupt is raised when the last pixel of the watermarked line has been transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t AMTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AMTCR_EN = 0x1; // Enable Enables the dead time functionality.
    typedef bit_field_t<8, 0xff> AMTCR_DT; // Dead Time Dead time value in the AXI clock cycle inserted between two consecutive accesses on the AXI master port. These bits represent the minimum guaranteed number of cycles between two consecutive AXI accesses.
};

// DMA2D: DMA2D

struct stm32h750x_dma2d_t
{
    volatile uint32_t DMA2D_CR; // DMA2D control register
    volatile uint32_t DMA2D_ISR; // DMA2D Interrupt Status Register
    volatile uint32_t DMA2D_IFCR; // DMA2D interrupt flag clear register
    volatile uint32_t DMA2D_FGMAR; // DMA2D foreground memory address register
    volatile uint32_t DMA2D_FGOR; // DMA2D foreground offset register
    volatile uint32_t DMA2D_BGMAR; // DMA2D background memory address register
    volatile uint32_t DMA2D_BGOR; // DMA2D background offset register
    volatile uint32_t DMA2D_FGPFCCR; // DMA2D foreground PFC control register
    volatile uint32_t DMA2D_FGCOLR; // DMA2D foreground color register
    volatile uint32_t DMA2D_BGPFCCR; // DMA2D background PFC control register
    volatile uint32_t DMA2D_BGCOLR; // DMA2D background color register
    volatile uint32_t DMA2D_FGCMAR; // DMA2D foreground CLUT memory address register
    volatile uint32_t DMA2D_BGCMAR; // DMA2D background CLUT memory address register
    volatile uint32_t DMA2D_OPFCCR; // DMA2D output PFC control register
    volatile uint32_t DMA2D_OCOLR; // DMA2D output color register
    volatile uint32_t DMA2D_OMAR; // DMA2D output memory address register
    volatile uint32_t DMA2D_OOR; // DMA2D output offset register
    volatile uint32_t DMA2D_NLR; // DMA2D number of line register
    volatile uint32_t DMA2D_LWR; // DMA2D line watermark register
    volatile uint32_t DMA2D_AMTCR; // DMA2D AXI master timer configuration register

    static constexpr uint32_t DMA2D_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA2D_CR_START = 0x1; // Start This bit can be used to launch the DMA2D according to the parameters loaded in the various configuration registers
    static constexpr uint32_t DMA2D_CR_SUSP = 0x2; // Suspend This bit can be used to suspend the current transfer. This bit is set and reset by software. It is automatically reset by hardware when the START bit is reset.
    static constexpr uint32_t DMA2D_CR_ABORT = 0x4; // Abort This bit can be used to abort the current transfer. This bit is set by software and is automatically reset by hardware when the START bit is reset.
    static constexpr uint32_t DMA2D_CR_TEIE = 0x100; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DMA2D_CR_TCIE = 0x200; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DMA2D_CR_TWIE = 0x400; // Transfer watermark interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DMA2D_CR_CAEIE = 0x800; // CLUT access error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DMA2D_CR_CTCIE = 0x1000; // CLUT transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DMA2D_CR_CEIE = 0x2000; // Configuration Error Interrupt Enable This bit is set and cleared by software.
    typedef bit_field_t<16, 0x3> DMA2D_CR_MODE; // DMA2D mode This bit is set and cleared by software. It cannot be modified while a transfer is ongoing.

    static constexpr uint32_t DMA2D_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA2D_ISR_TEIF = 0x1; // Transfer error interrupt flag This bit is set when an error occurs during a DMA transfer (data transfer or automatic CLUT loading).
    static constexpr uint32_t DMA2D_ISR_TCIF = 0x2; // Transfer complete interrupt flag This bit is set when a DMA2D transfer operation is complete (data transfer only).
    static constexpr uint32_t DMA2D_ISR_TWIF = 0x4; // Transfer watermark interrupt flag This bit is set when the last pixel of the watermarked line has been transferred.
    static constexpr uint32_t DMA2D_ISR_CAEIF = 0x8; // CLUT access error interrupt flag This bit is set when the CPU accesses the CLUT while the CLUT is being automatically copied from a system memory to the internal DMA2D.
    static constexpr uint32_t DMA2D_ISR_CTCIF = 0x10; // CLUT transfer complete interrupt flag This bit is set when the CLUT copy from a system memory area to the internal DMA2D memory is complete.
    static constexpr uint32_t DMA2D_ISR_CEIF = 0x20; // Configuration error interrupt flag This bit is set when the START bit of DMA2D_CR, DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong configuration has been programmed.

    static constexpr uint32_t DMA2D_IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA2D_IFCR_CTEIF = 0x1; // Clear Transfer error interrupt flag Programming this bit to 1 clears the TEIF flag in the DMA2D_ISR register
    static constexpr uint32_t DMA2D_IFCR_CTCIF = 0x2; // Clear transfer complete interrupt flag Programming this bit to 1 clears the TCIF flag in the DMA2D_ISR register
    static constexpr uint32_t DMA2D_IFCR_CTWIF = 0x4; // Clear transfer watermark interrupt flag Programming this bit to 1 clears the TWIF flag in the DMA2D_ISR register
    static constexpr uint32_t DMA2D_IFCR_CAECIF = 0x8; // Clear CLUT access error interrupt flag Programming this bit to 1 clears the CAEIF flag in the DMA2D_ISR register
    static constexpr uint32_t DMA2D_IFCR_CCTCIF = 0x10; // Clear CLUT transfer complete interrupt flag Programming this bit to 1 clears the CTCIF flag in the DMA2D_ISR register
    static constexpr uint32_t DMA2D_IFCR_CCEIF = 0x20; // Clear configuration error interrupt flag Programming this bit to 1 clears the CEIF flag in the DMA2D_ISR register

    static constexpr uint32_t DMA2D_FGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA2D_FGMAR_MA; // Memory address Address of the data used for the foreground image. This register can only be written when data transfers are disabled. Once the data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.

    static constexpr uint32_t DMA2D_FGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DMA2D_FGOR_LO; // Line offset Line offset used for the foreground expressed in pixel. This value is used to generate the address. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once a data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.

    static constexpr uint32_t DMA2D_BGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA2D_BGMAR_MA; // Memory address Address of the data used for the background image. This register can only be written when data transfers are disabled. Once a data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.

    static constexpr uint32_t DMA2D_BGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DMA2D_BGOR_LO; // Line offset Line offset used for the background image (expressed in pixel). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.

    static constexpr uint32_t DMA2D_FGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DMA2D_FGPFCCR_CM; // Color mode These bits defines the color format of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t DMA2D_FGPFCCR_CCM = 0x10; // CLUT color mode This bit defines the color format of the CLUT. It can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
    static constexpr uint32_t DMA2D_FGPFCCR_START = 0x20; // Start This bit can be set to start the automatic loading of the CLUT. It is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already ongoing (data transfer or automatic background CLUT transfer).
    typedef bit_field_t<8, 0xff> DMA2D_FGPFCCR_CS; // CLUT size These bits define the size of the CLUT used for the foreground image. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
    typedef bit_field_t<16, 0x3> DMA2D_FGPFCCR_AM; // Alpha mode These bits select the alpha channel value to be used for the foreground image. They can only be written data the transfer are disabled. Once the transfer has started, they become read-only. other configurations are meaningless
    typedef bit_field_t<18, 0x3> DMA2D_FGPFCCR_CSS; // Chroma Sub-Sampling These bits define the chroma sub-sampling mode for YCbCr color mode. Once the transfer has started, these bits are read-only. others: meaningless
    static constexpr uint32_t DMA2D_FGPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t DMA2D_FGPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
    typedef bit_field_t<24, 0xff> DMA2D_FGPFCCR_ALPHA; // Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied by the original alpha value according to the alpha mode selected through the AM[1:0] bits. These bits can only be written when data transfers are disabled. Once a transfer has started, they become read-only.

    static constexpr uint32_t DMA2D_FGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMA2D_FGCOLR_BLUE; // Blue Value These bits defines the blue value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
    typedef bit_field_t<8, 0xff> DMA2D_FGCOLR_GREEN; // Green Value These bits defines the green value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
    typedef bit_field_t<16, 0xff> DMA2D_FGCOLR_RED; // Red Value These bits defines the red value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DMA2D_BGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DMA2D_BGPFCCR_CM; // Color mode These bits define the color format of the foreground image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t DMA2D_BGPFCCR_CCM = 0x10; // CLUT Color mode These bits define the color format of the CLUT. This register can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
    static constexpr uint32_t DMA2D_BGPFCCR_START = 0x20; // Start This bit is set to start the automatic loading of the CLUT. This bit is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in the DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already on going (data transfer or automatic BackGround CLUT transfer).
    typedef bit_field_t<8, 0xff> DMA2D_BGPFCCR_CS; // CLUT size These bits define the size of the CLUT used for the BG. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
    typedef bit_field_t<16, 0x3> DMA2D_BGPFCCR_AM; // Alpha mode These bits define which alpha channel value to be used for the background image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t DMA2D_BGPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t DMA2D_BGPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
    typedef bit_field_t<24, 0xff> DMA2D_BGPFCCR_ALPHA; // Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied with the original alpha value according to the alpha mode selected with bits AM[1: 0]. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DMA2D_BGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMA2D_BGCOLR_BLUE; // Blue Value These bits define the blue value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<8, 0xff> DMA2D_BGCOLR_GREEN; // Green Value These bits define the green value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0xff> DMA2D_BGCOLR_RED; // Red Value These bits define the red value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DMA2D_FGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA2D_FGCMAR_MA; // Memory Address Address of the data used for the CLUT address dedicated to the foreground image. This register can only be written when no transfer is ongoing. Once the CLUT transfer has started, this register is read-only. If the foreground CLUT format is 32-bit, the address must be 32-bit aligned.

    static constexpr uint32_t DMA2D_BGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA2D_BGCMAR_MA; // Memory address Address of the data used for the CLUT address dedicated to the background image. This register can only be written when no transfer is on going. Once the CLUT transfer has started, this register is read-only. If the background CLUT format is 32-bit, the address must be 32-bit aligned.

    static constexpr uint32_t DMA2D_OPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DMA2D_OPFCCR_CM; // Color mode These bits define the color format of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t DMA2D_OPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t DMA2D_OPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.

    static constexpr uint32_t DMA2D_OCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMA2D_OCOLR_BLUE; // Blue Value These bits define the blue value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<8, 0xff> DMA2D_OCOLR_GREEN; // Green Value These bits define the green value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0xff> DMA2D_OCOLR_RED; // Red Value These bits define the red value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<24, 0xff> DMA2D_OCOLR_ALPHA; // Alpha Channel Value These bits define the alpha channel of the output color. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DMA2D_OMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA2D_OMAR_MA; // Memory Address Address of the data used for the output FIFO. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned and a 16-bit per pixel format must be 16-bit aligned.

    static constexpr uint32_t DMA2D_OOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DMA2D_OOR_LO; // Line Offset Line offset used for the output (expressed in pixels). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DMA2D_NLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA2D_NLR_NL; // Number of lines Number of lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0x3fff> DMA2D_NLR_PL; // Pixel per lines Number of pixels per lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. If any of the input image format is 4-bit per pixel, pixel per lines must be even.

    static constexpr uint32_t DMA2D_LWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA2D_LWR_LW; // Line watermark These bits allow to configure the line watermark for interrupt generation. An interrupt is raised when the last pixel of the watermarked line has been transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DMA2D_AMTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA2D_AMTCR_EN = 0x1; // Enable Enables the dead time functionality.
    typedef bit_field_t<8, 0xff> DMA2D_AMTCR_DT; // Dead Time Dead time value in the AXI clock cycle inserted between two consecutive accesses on the AXI master port. These bits represent the minimum guaranteed number of cycles between two consecutive AXI accesses.
};

// DMA2D: DMA2D

struct stm32h7a3x_dma2d_t
{
    volatile uint32_t CR; // DMA2D control register
    volatile uint32_t ISR; // DMA2D Interrupt Status Register
    volatile uint32_t IFCR; // DMA2D interrupt flag clear register
    volatile uint32_t FGMAR; // DMA2D foreground memory address register
    volatile uint32_t FGOR; // DMA2D foreground offset register
    volatile uint32_t BGMAR; // DMA2D background memory address register
    volatile uint32_t BGOR; // DMA2D background offset register
    volatile uint32_t FGPFCCR; // DMA2D foreground PFC control register
    volatile uint32_t FGCOLR; // DMA2D foreground color register
    volatile uint32_t BGPFCCR; // DMA2D background PFC control register
    volatile uint32_t BGCOLR; // DMA2D background color register
    volatile uint32_t DFGCMAR; // DMA2D foreground CLUT memory address register
    volatile uint32_t BGCMAR; // DMA2D background CLUT memory address register
    volatile uint32_t OPFCCR; // DMA2D output PFC control register
    volatile uint32_t OCOLR; // DMA2D output color register
    volatile uint32_t OMAR; // DMA2D output memory address register
    volatile uint32_t OOR; // DMA2D output offset register
    volatile uint32_t NLR; // DMA2D number of line register
    volatile uint32_t LWR; // DMA2D line watermark register
    volatile uint32_t AMTCR; // DMA2D AXI master timer configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_START = 0x1; // Start This bit can be used to launch the DMA2D according to the parameters loaded in the various configuration registers
    static constexpr uint32_t CR_SUSP = 0x2; // Suspend This bit can be used to suspend the current transfer. This bit is set and reset by software. It is automatically reset by hardware when the START bit is reset.
    static constexpr uint32_t CR_ABORT = 0x4; // Abort This bit can be used to abort the current transfer. This bit is set by software and is automatically reset by hardware when the START bit is reset.
    static constexpr uint32_t CR_TEIE = 0x100; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_TCIE = 0x200; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_TWIE = 0x400; // Transfer watermark interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CAEIE = 0x800; // CLUT access error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CTCIE = 0x1000; // CLUT transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR_CEIE = 0x2000; // Configuration Error Interrupt Enable This bit is set and cleared by software.
    typedef bit_field_t<16, 0x3> CR_MODE; // DMA2D mode This bit is set and cleared by software. It cannot be modified while a transfer is ongoing.

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TEIF = 0x1; // Transfer error interrupt flag This bit is set when an error occurs during a DMA transfer (data transfer or automatic CLUT loading).
    static constexpr uint32_t ISR_TCIF = 0x2; // Transfer complete interrupt flag This bit is set when a DMA2D transfer operation is complete (data transfer only).
    static constexpr uint32_t ISR_TWIF = 0x4; // Transfer watermark interrupt flag This bit is set when the last pixel of the watermarked line has been transferred.
    static constexpr uint32_t ISR_CAEIF = 0x8; // CLUT access error interrupt flag This bit is set when the CPU accesses the CLUT while the CLUT is being automatically copied from a system memory to the internal DMA2D.
    static constexpr uint32_t ISR_CTCIF = 0x10; // CLUT transfer complete interrupt flag This bit is set when the CLUT copy from a system memory area to the internal DMA2D memory is complete.
    static constexpr uint32_t ISR_CEIF = 0x20; // Configuration error interrupt flag This bit is set when the START bit of DMA2D_CR, DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong configuration has been programmed.

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CTEIF = 0x1; // Clear Transfer error interrupt flag Programming this bit to 1 clears the TEIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CTCIF = 0x2; // Clear transfer complete interrupt flag Programming this bit to 1 clears the TCIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CTWIF = 0x4; // Clear transfer watermark interrupt flag Programming this bit to 1 clears the TWIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CAECIF = 0x8; // Clear CLUT access error interrupt flag Programming this bit to 1 clears the CAEIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CCTCIF = 0x10; // Clear CLUT transfer complete interrupt flag Programming this bit to 1 clears the CTCIF flag in the DMA2D_ISR register
    static constexpr uint32_t IFCR_CCEIF = 0x20; // Clear configuration error interrupt flag Programming this bit to 1 clears the CEIF flag in the DMA2D_ISR register

    static constexpr uint32_t FGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FGMAR_MA; // Memory address Address of the data used for the foreground image. This register can only be written when data transfers are disabled. Once the data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.

    static constexpr uint32_t FGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> FGOR_LO; // Line offset Line offset used for the foreground expressed in pixel. This value is used to generate the address. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once a data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.

    static constexpr uint32_t BGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BGMAR_MA; // Memory address Address of the data used for the background image. This register can only be written when data transfers are disabled. Once a data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.

    static constexpr uint32_t BGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> BGOR_LO; // Line offset Line offset used for the background image (expressed in pixel). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.

    static constexpr uint32_t FGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FGPFCCR_CM; // Color mode These bits defines the color format of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t FGPFCCR_CCM = 0x10; // CLUT color mode This bit defines the color format of the CLUT. It can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
    static constexpr uint32_t FGPFCCR_START = 0x20; // Start This bit can be set to start the automatic loading of the CLUT. It is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already ongoing (data transfer or automatic background CLUT transfer).
    typedef bit_field_t<8, 0xff> FGPFCCR_CS; // CLUT size These bits define the size of the CLUT used for the foreground image. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
    typedef bit_field_t<16, 0x3> FGPFCCR_AM; // Alpha mode These bits select the alpha channel value to be used for the foreground image. They can only be written data the transfer are disabled. Once the transfer has started, they become read-only. other configurations are meaningless
    typedef bit_field_t<18, 0x3> FGPFCCR_CSS; // Chroma Sub-Sampling These bits define the chroma sub-sampling mode for YCbCr color mode. Once the transfer has started, these bits are read-only. others: meaningless
    static constexpr uint32_t FGPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t FGPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
    typedef bit_field_t<24, 0xff> FGPFCCR_ALPHA; // Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied by the original alpha value according to the alpha mode selected through the AM[1:0] bits. These bits can only be written when data transfers are disabled. Once a transfer has started, they become read-only.

    static constexpr uint32_t FGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FGCOLR_BLUE; // Blue Value These bits defines the blue value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
    typedef bit_field_t<8, 0xff> FGCOLR_GREEN; // Green Value These bits defines the green value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
    typedef bit_field_t<16, 0xff> FGCOLR_RED; // Red Value These bits defines the red value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t BGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> BGPFCCR_CM; // Color mode These bits define the color format of the foreground image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t BGPFCCR_CCM = 0x10; // CLUT Color mode These bits define the color format of the CLUT. This register can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
    static constexpr uint32_t BGPFCCR_START = 0x20; // Start This bit is set to start the automatic loading of the CLUT. This bit is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in the DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already on going (data transfer or automatic BackGround CLUT transfer).
    typedef bit_field_t<8, 0xff> BGPFCCR_CS; // CLUT size These bits define the size of the CLUT used for the BG. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
    typedef bit_field_t<16, 0x3> BGPFCCR_AM; // Alpha mode These bits define which alpha channel value to be used for the background image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t BGPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t BGPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
    typedef bit_field_t<24, 0xff> BGPFCCR_ALPHA; // Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied with the original alpha value according to the alpha mode selected with bits AM[1: 0]. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t BGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BGCOLR_BLUE; // Blue Value These bits define the blue value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<8, 0xff> BGCOLR_GREEN; // Green Value These bits define the green value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0xff> BGCOLR_RED; // Red Value These bits define the red value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t DFGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DFGCMAR_MA; // Memory Address Address of the data used for the CLUT address dedicated to the foreground image. This register can only be written when no transfer is ongoing. Once the CLUT transfer has started, this register is read-only. If the foreground CLUT format is 32-bit, the address must be 32-bit aligned.

    static constexpr uint32_t BGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BGCMAR_MA; // Memory address Address of the data used for the CLUT address dedicated to the background image. This register can only be written when no transfer is on going. Once the CLUT transfer has started, this register is read-only. If the background CLUT format is 32-bit, the address must be 32-bit aligned.

    static constexpr uint32_t OPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> OPFCCR_CM; // Color mode These bits define the color format of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
    static constexpr uint32_t OPFCCR_AI = 0x100000; // Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
    static constexpr uint32_t OPFCCR_RBS = 0x200000; // Red Blue Swap This bit allows to swap the R &amp;amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.

    static constexpr uint32_t OCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> OCOLR_BLUE; // Blue Value These bits define the blue value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<8, 0xff> OCOLR_GREEN; // Green Value These bits define the green value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0xff> OCOLR_RED; // Red Value These bits define the red value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<24, 0xff> OCOLR_ALPHA; // Alpha Channel Value These bits define the alpha channel of the output color. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t OMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OMAR_MA; // Memory Address Address of the data used for the output FIFO. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned and a 16-bit per pixel format must be 16-bit aligned.

    static constexpr uint32_t OOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> OOR_LO; // Line Offset Line offset used for the output (expressed in pixels). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t NLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> NLR_NL; // Number of lines Number of lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
    typedef bit_field_t<16, 0x3fff> NLR_PL; // Pixel per lines Number of pixels per lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. If any of the input image format is 4-bit per pixel, pixel per lines must be even.

    static constexpr uint32_t LWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LWR_LW; // Line watermark These bits allow to configure the line watermark for interrupt generation. An interrupt is raised when the last pixel of the watermarked line has been transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.

    static constexpr uint32_t AMTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AMTCR_EN = 0x1; // Enable Enables the dead time functionality.
    typedef bit_field_t<8, 0xff> AMTCR_DT; // Dead Time Dead time value in the AXI clock cycle inserted between two consecutive accesses on the AXI master port. These bits represent the minimum guaranteed number of cycles between two consecutive AXI accesses.
};

template<>
struct peripheral_t<STM32H742x, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h742x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h750x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h750x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h750x_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32h7a3x_dma2d_t;
    static T& V;
};

using dma2d_t = peripheral_t<svd, DMA2D>;

template<int INST> struct dma2d_traits {};

template<> struct dma2d_traits<0>
{
    using dma2d = dma2d_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_DMA2DEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_DMA2DEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_DMA2DRST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
