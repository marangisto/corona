#pragma once

////
//
//      STM32H7 JPEG peripherals
//
///

// JPEG: JPEG

struct stm32h742x_jpeg_t
{
    volatile uint32_t CONFR0; // JPEG codec control register
    volatile uint32_t CONFR1; // JPEG codec configuration register 1
    volatile uint32_t CONFR2; // JPEG codec configuration register 2
    volatile uint32_t CONFR3; // JPEG codec configuration register 3
    volatile uint32_t CONFRN1; // JPEG codec configuration register 4-7
    volatile uint32_t CONFRN2; // JPEG codec configuration register 4-7
    volatile uint32_t CONFRN3; // JPEG codec configuration register 4-7
    volatile uint32_t CONFRN4; // JPEG codec configuration register 4-7
    reserved_t<0x4> _0x20;
    volatile uint32_t CR; // JPEG control register
    volatile uint32_t SR; // JPEG status register
    volatile uint32_t CFR; // JPEG clear flag register
    reserved_t<0x1> _0x3c;
    volatile uint32_t DIR; // JPEG data input register
    volatile uint32_t DOR; // JPEG data output register

    static constexpr uint32_t CONFR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CONFR0_START = 0x1; // Start This bit start or stop the encoding or decoding process. Read this register always return 0.

    static constexpr uint32_t CONFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CONFR1_NF; // Number of color components This field defines the number of color components minus 1.
    static constexpr uint32_t CONFR1_DE = 0x8; // Decoding Enable This bit selects the coding or decoding process
    typedef bit_field_t<4, 0x3> CONFR1_COLORSPACE; // Color Space This filed defines the number of quantization tables minus 1 to insert in the output stream.
    typedef bit_field_t<6, 0x3> CONFR1_NS; // Number of components for Scan This field defines the number of components minus 1 for scan header marker segment.
    static constexpr uint32_t CONFR1_HDR = 0x100; // Header Processing This bit enable the header processing (generation/parsing).
    typedef bit_field_t<16, 0xffff> CONFR1_YSIZE; // Y Size This field defines the number of lines in source image.

    static constexpr uint32_t CONFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> CONFR2_NMCU; // Number of MCU For encoding: this field defines the number of MCU units minus 1 to encode. For decoding: this field indicates the number of complete MCU units minus 1 to be decoded (this field is updated after the JPEG header parsing). If the decoded image size has not a X or Y size multiple of 8 or 16 (depending on the sub-sampling process), the resulting incomplete or empty MCU must be added to this value to get the total number of MCU generated.

    static constexpr uint32_t CONFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CONFR3_XSIZE; // X size This field defines the number of pixels per line.

    static constexpr uint32_t CONFRN1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CONFRN1_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t CONFRN1_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> CONFRN1_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> CONFRN1_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> CONFRN1_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> CONFRN1_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.

    static constexpr uint32_t CONFRN2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CONFRN2_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t CONFRN2_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> CONFRN2_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> CONFRN2_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> CONFRN2_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> CONFRN2_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.

    static constexpr uint32_t CONFRN3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CONFRN3_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t CONFRN3_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> CONFRN3_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> CONFRN3_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> CONFRN3_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> CONFRN3_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.

    static constexpr uint32_t CONFRN4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CONFRN4_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t CONFRN4_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> CONFRN4_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> CONFRN4_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> CONFRN4_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> CONFRN4_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.


    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_JCEN = 0x1; // JPEG Core Enable Enable the JPEG codec Core.
    static constexpr uint32_t CR_IFTIE = 0x2; // Input FIFO Threshold Interrupt Enable This bit enables the interrupt generation when input FIFO reach the threshold.
    static constexpr uint32_t CR_IFNFIE = 0x4; // Input FIFO Not Full Interrupt Enable This bit enables the interrupt generation when input FIFO is not empty.
    static constexpr uint32_t CR_OFTIE = 0x8; // Output FIFO Threshold Interrupt Enable This bit enables the interrupt generation when output FIFO reach the threshold.
    static constexpr uint32_t CR_OFNEIE = 0x10; // Output FIFO Not Empty Interrupt Enable This bit enables the interrupt generation when output FIFO is not empty.
    static constexpr uint32_t CR_EOCIE = 0x20; // End of Conversion Interrupt Enable This bit enables the interrupt generation on the end of conversion.
    static constexpr uint32_t CR_HPDIE = 0x40; // Header Parsing Done Interrupt Enable This bit enables the interrupt generation on the Header Parsing Operation.
    static constexpr uint32_t CR_IDMAEN = 0x800; // Input DMA Enable Enable the DMA request generation for the input FIFO.
    static constexpr uint32_t CR_ODMAEN = 0x1000; // Output DMA Enable Enable the DMA request generation for the output FIFO.
    static constexpr uint32_t CR_IFF = 0x2000; // Input FIFO Flush This bit flush the input FIFO. This bit is always read as 0.
    static constexpr uint32_t CR_OFF = 0x4000; // Output FIFO Flush This bit flush the output FIFO. This bit is always read as 0.

    static constexpr uint32_t SR_RESET_VALUE = 0x6; // Reset value
    static constexpr uint32_t SR_IFTF = 0x2; // Input FIFO Threshold Flag This bit is set when the input FIFO is not full and is bellow its threshold.
    static constexpr uint32_t SR_IFNFF = 0x4; // Input FIFO Not Full Flag This bit is set when the input FIFO is not full (a data can be written).
    static constexpr uint32_t SR_OFTF = 0x8; // Output FIFO Threshold Flag This bit is set when the output FIFO is not empty and has reach its threshold.
    static constexpr uint32_t SR_OFNEF = 0x10; // Output FIFO Not Empty Flag This bit is set when the output FIFO is not empty (a data is available).
    static constexpr uint32_t SR_EOCF = 0x20; // End of Conversion Flag This bit is set when the JPEG codec core has finished the encoding or the decoding process and than last data has been sent to the output FIFO.
    static constexpr uint32_t SR_HPDF = 0x40; // Header Parsing Done Flag This bit is set in decode mode when the JPEG codec has finished the parsing of the headers and the internal registers have been updated.
    static constexpr uint32_t SR_COF = 0x80; // Codec Operation Flag This bit is set when when a JPEG codec operation is on going (encoding or decoding).

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFR_CEOCF = 0x20; // Clear End of Conversion Flag Writing 1 clears the End of Conversion Flag of the JPEG Status Register.
    static constexpr uint32_t CFR_CHPDF = 0x40; // Clear Header Parsing Done Flag Writing 1 clears the Header Parsing Done Flag of the JPEG Status Register.


    static constexpr uint32_t DIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIR_DATAIN; // Data Input FIFO Input FIFO data register.

    static constexpr uint32_t DOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOR_DATAOUT; // Data Output FIFO Output FIFO data register.
};

// JPEG: JPEG

struct stm32h750x_jpeg_t
{
    volatile uint32_t JPEG_CONFR0; // JPEG codec control register
    volatile uint32_t JPEG_CONFR1; // JPEG codec configuration register 1
    volatile uint32_t JPEG_CONFR2; // JPEG codec configuration register 2
    volatile uint32_t JPEG_CONFR3; // JPEG codec configuration register 3
    volatile uint32_t JPEG_CONFRN1; // JPEG codec configuration register 4-7
    volatile uint32_t JPEG_CONFRN2; // JPEG codec configuration register 4-7
    volatile uint32_t JPEG_CONFRN3; // JPEG codec configuration register 4-7
    volatile uint32_t JPEG_CONFRN4; // JPEG codec configuration register 4-7
    reserved_t<0x4> _0x20;
    volatile uint32_t JPEG_CR; // JPEG control register
    volatile uint32_t JPEG_SR; // JPEG status register
    volatile uint32_t JPEG_CFR; // JPEG clear flag register
    reserved_t<0x1> _0x3c;
    volatile uint32_t JPEG_DIR; // JPEG data input register
    volatile uint32_t JPEG_DOR; // JPEG data output register

    static constexpr uint32_t JPEG_CONFR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFR0_START = 0x1; // Start This bit start or stop the encoding or decoding process. Read this register always return 0.

    static constexpr uint32_t JPEG_CONFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> JPEG_CONFR1_NF; // Number of color components This field defines the number of color components minus 1.
    static constexpr uint32_t JPEG_CONFR1_DE = 0x8; // Decoding Enable This bit selects the coding or decoding process
    typedef bit_field_t<4, 0x3> JPEG_CONFR1_COLORSPACE; // Color Space This filed defines the number of quantization tables minus 1 to insert in the output stream.
    typedef bit_field_t<6, 0x3> JPEG_CONFR1_NS; // Number of components for Scan This field defines the number of components minus 1 for scan header marker segment.
    static constexpr uint32_t JPEG_CONFR1_HDR = 0x100; // Header Processing This bit enable the header processing (generation/parsing).
    typedef bit_field_t<16, 0xffff> JPEG_CONFR1_YSIZE; // Y Size This field defines the number of lines in source image.

    static constexpr uint32_t JPEG_CONFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> JPEG_CONFR2_NMCU; // Number of MCU For encoding: this field defines the number of MCU units minus 1 to encode. For decoding: this field indicates the number of complete MCU units minus 1 to be decoded (this field is updated after the JPEG header parsing). If the decoded image size has not a X or Y size multiple of 8 or 16 (depending on the sub-sampling process), the resulting incomplete or empty MCU must be added to this value to get the total number of MCU generated.

    static constexpr uint32_t JPEG_CONFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> JPEG_CONFR3_XSIZE; // X size This field defines the number of pixels per line.

    static constexpr uint32_t JPEG_CONFRN1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFRN1_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t JPEG_CONFRN1_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> JPEG_CONFRN1_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> JPEG_CONFRN1_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> JPEG_CONFRN1_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> JPEG_CONFRN1_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.

    static constexpr uint32_t JPEG_CONFRN2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFRN2_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t JPEG_CONFRN2_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> JPEG_CONFRN2_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> JPEG_CONFRN2_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> JPEG_CONFRN2_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> JPEG_CONFRN2_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.

    static constexpr uint32_t JPEG_CONFRN3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFRN3_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t JPEG_CONFRN3_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> JPEG_CONFRN3_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> JPEG_CONFRN3_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> JPEG_CONFRN3_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> JPEG_CONFRN3_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.

    static constexpr uint32_t JPEG_CONFRN4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CONFRN4_HD = 0x1; // Huffman DC Selects the Huffman table for encoding the DC coefficients.
    static constexpr uint32_t JPEG_CONFRN4_HA = 0x2; // Huffman AC Selects the Huffman table for encoding the AC coefficients.
    typedef bit_field_t<2, 0x3> JPEG_CONFRN4_QT; // Quantization Table Selects quantization table associated with a color component.
    typedef bit_field_t<4, 0xf> JPEG_CONFRN4_NB; // Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
    typedef bit_field_t<8, 0xf> JPEG_CONFRN4_VSF; // Vertical Sampling Factor Vertical sampling factor for component i.
    typedef bit_field_t<12, 0xf> JPEG_CONFRN4_HSF; // Horizontal Sampling Factor Horizontal sampling factor for component i.


    static constexpr uint32_t JPEG_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CR_JCEN = 0x1; // JPEG Core Enable Enable the JPEG codec Core.
    static constexpr uint32_t JPEG_CR_IFTIE = 0x2; // Input FIFO Threshold Interrupt Enable This bit enables the interrupt generation when input FIFO reach the threshold.
    static constexpr uint32_t JPEG_CR_IFNFIE = 0x4; // Input FIFO Not Full Interrupt Enable This bit enables the interrupt generation when input FIFO is not empty.
    static constexpr uint32_t JPEG_CR_OFTIE = 0x8; // Output FIFO Threshold Interrupt Enable This bit enables the interrupt generation when output FIFO reach the threshold.
    static constexpr uint32_t JPEG_CR_OFNEIE = 0x10; // Output FIFO Not Empty Interrupt Enable This bit enables the interrupt generation when output FIFO is not empty.
    static constexpr uint32_t JPEG_CR_EOCIE = 0x20; // End of Conversion Interrupt Enable This bit enables the interrupt generation on the end of conversion.
    static constexpr uint32_t JPEG_CR_HPDIE = 0x40; // Header Parsing Done Interrupt Enable This bit enables the interrupt generation on the Header Parsing Operation.
    static constexpr uint32_t JPEG_CR_IDMAEN = 0x800; // Input DMA Enable Enable the DMA request generation for the input FIFO.
    static constexpr uint32_t JPEG_CR_ODMAEN = 0x1000; // Output DMA Enable Enable the DMA request generation for the output FIFO.
    static constexpr uint32_t JPEG_CR_IFF = 0x2000; // Input FIFO Flush This bit flush the input FIFO. This bit is always read as 0.
    static constexpr uint32_t JPEG_CR_OFF = 0x4000; // Output FIFO Flush This bit flush the output FIFO. This bit is always read as 0.

    static constexpr uint32_t JPEG_SR_RESET_VALUE = 0x6; // Reset value
    static constexpr uint32_t JPEG_SR_IFTF = 0x2; // Input FIFO Threshold Flag This bit is set when the input FIFO is not full and is bellow its threshold.
    static constexpr uint32_t JPEG_SR_IFNFF = 0x4; // Input FIFO Not Full Flag This bit is set when the input FIFO is not full (a data can be written).
    static constexpr uint32_t JPEG_SR_OFTF = 0x8; // Output FIFO Threshold Flag This bit is set when the output FIFO is not empty and has reach its threshold.
    static constexpr uint32_t JPEG_SR_OFNEF = 0x10; // Output FIFO Not Empty Flag This bit is set when the output FIFO is not empty (a data is available).
    static constexpr uint32_t JPEG_SR_EOCF = 0x20; // End of Conversion Flag This bit is set when the JPEG codec core has finished the encoding or the decoding process and than last data has been sent to the output FIFO.
    static constexpr uint32_t JPEG_SR_HPDF = 0x40; // Header Parsing Done Flag This bit is set in decode mode when the JPEG codec has finished the parsing of the headers and the internal registers have been updated.
    static constexpr uint32_t JPEG_SR_COF = 0x80; // Codec Operation Flag This bit is set when when a JPEG codec operation is on going (encoding or decoding).

    static constexpr uint32_t JPEG_CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t JPEG_CFR_CEOCF = 0x20; // Clear End of Conversion Flag Writing 1 clears the End of Conversion Flag of the JPEG Status Register.
    static constexpr uint32_t JPEG_CFR_CHPDF = 0x40; // Clear Header Parsing Done Flag Writing 1 clears the Header Parsing Done Flag of the JPEG Status Register.


    static constexpr uint32_t JPEG_DIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JPEG_DIR_DATAIN; // Data Input FIFO Input FIFO data register.

    static constexpr uint32_t JPEG_DOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JPEG_DOR_DATAOUT; // Data Output FIFO Output FIFO data register.
};

template<>
struct peripheral_t<STM32H742x, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h742x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h750x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h750x_jpeg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, JPEG>
{
    static constexpr periph_t P = JPEG;
    using T = stm32h750x_jpeg_t;
    static T& V;
};

using jpeg_t = peripheral_t<svd, JPEG>;
