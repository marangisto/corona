#pragma once

////
//
//      STM32L4 peripheral instances
//
///

typename peripheral_t<STM32L412, ADC>::T&
    peripheral_t<STM32L412, ADC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, ADC>::T*
        >(0x50040000);

typename peripheral_t<STM32L476, ADC1>::T&
    peripheral_t<STM32L476, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L476, ADC2>::T&
    peripheral_t<STM32L476, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L476, ADC3>::T&
    peripheral_t<STM32L476, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L496, ADC1>::T&
    peripheral_t<STM32L496, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L496, ADC2>::T&
    peripheral_t<STM32L496, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L496, ADC3>::T&
    peripheral_t<STM32L496, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L4x6, ADC1>::T&
    peripheral_t<STM32L4x6, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L4x6, ADC2>::T&
    peripheral_t<STM32L4x6, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L4x6, ADC3>::T&
    peripheral_t<STM32L4x6, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L4x1, ADC1>::T&
    peripheral_t<STM32L4x1, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L4x1, ADC2>::T&
    peripheral_t<STM32L4x1, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L4x1, ADC3>::T&
    peripheral_t<STM32L4x1, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L4x2, ADC1>::T&
    peripheral_t<STM32L4x2, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L4x2, ADC2>::T&
    peripheral_t<STM32L4x2, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L4x2, ADC3>::T&
    peripheral_t<STM32L4x2, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L4x3, ADC1>::T&
    peripheral_t<STM32L4x3, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L4x3, ADC2>::T&
    peripheral_t<STM32L4x3, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L4x3, ADC3>::T&
    peripheral_t<STM32L4x3, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L4x5, ADC1>::T&
    peripheral_t<STM32L4x5, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32L4x5, ADC2>::T&
    peripheral_t<STM32L4x5, ADC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, ADC2>::T*
        >(0x50040100);

typename peripheral_t<STM32L4x5, ADC3>::T&
    peripheral_t<STM32L4x5, ADC3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, ADC3>::T*
        >(0x50040200);

typename peripheral_t<STM32L4x5, ADC123_COMMON>::T&
    peripheral_t<STM32L4x5, ADC123_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, ADC123_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L476, ADC_COMMON>::T&
    peripheral_t<STM32L476, ADC_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, ADC_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L496, ADC_COMMON>::T&
    peripheral_t<STM32L496, ADC_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, ADC_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L4x1, ADC123_COMMON>::T&
    peripheral_t<STM32L4x1, ADC123_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, ADC123_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L4x2, ADC123_COMMON>::T&
    peripheral_t<STM32L4x2, ADC123_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, ADC123_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L4x3, ADC123_COMMON>::T&
    peripheral_t<STM32L4x3, ADC123_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, ADC123_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L4x6, ADC_COMMON>::T&
    peripheral_t<STM32L4x6, ADC_COMMON>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, ADC_COMMON>::T*
        >(0x50040300);

typename peripheral_t<STM32L476, AES>::T&
    peripheral_t<STM32L476, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L496, AES>::T&
    peripheral_t<STM32L496, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L4x1, AES>::T&
    peripheral_t<STM32L4x1, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L4x2, AES>::T&
    peripheral_t<STM32L4x2, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L4x3, AES>::T&
    peripheral_t<STM32L4x3, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L4x5, AES>::T&
    peripheral_t<STM32L4x5, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L4x6, AES>::T&
    peripheral_t<STM32L4x6, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, AES>::T*
        >(0x50060000);

typename peripheral_t<STM32L476, CAN1>::T&
    peripheral_t<STM32L476, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L496, CAN1>::T&
    peripheral_t<STM32L496, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L496, CAN2>::T&
    peripheral_t<STM32L496, CAN2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, CAN2>::T*
        >(0x40006800);

typename peripheral_t<STM32L4x6, CAN1>::T&
    peripheral_t<STM32L4x6, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L4x6, CAN2>::T&
    peripheral_t<STM32L4x6, CAN2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, CAN2>::T*
        >(0x40006800);

typename peripheral_t<STM32L4x1, CAN1>::T&
    peripheral_t<STM32L4x1, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L4x2, CAN1>::T&
    peripheral_t<STM32L4x2, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L4x3, CAN1>::T&
    peripheral_t<STM32L4x3, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L4x5, CAN1>::T&
    peripheral_t<STM32L4x5, CAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, CAN1>::T*
        >(0x40006400);

typename peripheral_t<STM32L412, COMP>::T&
    peripheral_t<STM32L412, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L476, COMP>::T&
    peripheral_t<STM32L476, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L496, COMP>::T&
    peripheral_t<STM32L496, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L4x3, COMP>::T&
    peripheral_t<STM32L4x3, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L4x5, COMP>::T&
    peripheral_t<STM32L4x5, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L4x6, COMP>::T&
    peripheral_t<STM32L4x6, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L4x1, COMP>::T&
    peripheral_t<STM32L4x1, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L4x2, COMP>::T&
    peripheral_t<STM32L4x2, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32L412, CRC>::T&
    peripheral_t<STM32L412, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L476, CRC>::T&
    peripheral_t<STM32L476, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L496, CRC>::T&
    peripheral_t<STM32L496, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L4x1, CRC>::T&
    peripheral_t<STM32L4x1, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L4x2, CRC>::T&
    peripheral_t<STM32L4x2, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L4x3, CRC>::T&
    peripheral_t<STM32L4x3, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L4x5, CRC>::T&
    peripheral_t<STM32L4x5, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L4x6, CRC>::T&
    peripheral_t<STM32L4x6, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32L412, CRS>::T&
    peripheral_t<STM32L412, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L476, CRS>::T&
    peripheral_t<STM32L476, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L496, CRS>::T&
    peripheral_t<STM32L496, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L4x1, CRS>::T&
    peripheral_t<STM32L4x1, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L4x2, CRS>::T&
    peripheral_t<STM32L4x2, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L4x3, CRS>::T&
    peripheral_t<STM32L4x3, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L4x5, CRS>::T&
    peripheral_t<STM32L4x5, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L4x6, CRS>::T&
    peripheral_t<STM32L4x6, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32L476, DAC1>::T&
    peripheral_t<STM32L476, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L496, DAC1>::T&
    peripheral_t<STM32L496, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L4x1, DAC1>::T&
    peripheral_t<STM32L4x1, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L4x2, DAC1>::T&
    peripheral_t<STM32L4x2, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L4x3, DAC1>::T&
    peripheral_t<STM32L4x3, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L4x5, DAC1>::T&
    peripheral_t<STM32L4x5, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L4x6, DAC1>::T&
    peripheral_t<STM32L4x6, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32L412, DBGMCU>::T&
    peripheral_t<STM32L412, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L4x1, DBGMCU>::T&
    peripheral_t<STM32L4x1, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L4x2, DBGMCU>::T&
    peripheral_t<STM32L4x2, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L4x3, DBGMCU>::T&
    peripheral_t<STM32L4x3, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L476, DBGMCU>::T&
    peripheral_t<STM32L476, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L496, DBGMCU>::T&
    peripheral_t<STM32L496, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L4x5, DBGMCU>::T&
    peripheral_t<STM32L4x5, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L4x6, DBGMCU>::T&
    peripheral_t<STM32L4x6, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32L476, DCMI>::T&
    peripheral_t<STM32L476, DCMI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, DCMI>::T*
        >(0x50050000);

typename peripheral_t<STM32L496, DCMI>::T&
    peripheral_t<STM32L496, DCMI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DCMI>::T*
        >(0x50050000);

typename peripheral_t<STM32L4x6, DCMI>::T&
    peripheral_t<STM32L4x6, DCMI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DCMI>::T*
        >(0x50050000);

typename peripheral_t<STM32L4x5, DFSDM>::T&
    peripheral_t<STM32L4x5, DFSDM>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, DFSDM>::T*
        >(0x40016000);

typename peripheral_t<STM32L4x6, DFSDM1>::T&
    peripheral_t<STM32L4x6, DFSDM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DFSDM1>::T*
        >(0x40016000);

typename peripheral_t<STM32L476, DFSDM1>::T&
    peripheral_t<STM32L476, DFSDM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, DFSDM1>::T*
        >(0x40016000);

typename peripheral_t<STM32L496, DFSDM1>::T&
    peripheral_t<STM32L496, DFSDM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DFSDM1>::T*
        >(0x40016000);

typename peripheral_t<STM32L4x1, DFSDM>::T&
    peripheral_t<STM32L4x1, DFSDM>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, DFSDM>::T*
        >(0x40016000);

typename peripheral_t<STM32L4x2, DFSDM>::T&
    peripheral_t<STM32L4x2, DFSDM>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, DFSDM>::T*
        >(0x40016000);

typename peripheral_t<STM32L412, DMA1>::T&
    peripheral_t<STM32L412, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L412, DMA2>::T&
    peripheral_t<STM32L412, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L476, DMA1>::T&
    peripheral_t<STM32L476, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L476, DMA2>::T&
    peripheral_t<STM32L476, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L496, DMA1>::T&
    peripheral_t<STM32L496, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L496, DMA2>::T&
    peripheral_t<STM32L496, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L4x1, DMA1>::T&
    peripheral_t<STM32L4x1, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L4x1, DMA2>::T&
    peripheral_t<STM32L4x1, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L4x2, DMA1>::T&
    peripheral_t<STM32L4x2, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L4x2, DMA2>::T&
    peripheral_t<STM32L4x2, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L4x3, DMA1>::T&
    peripheral_t<STM32L4x3, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L4x3, DMA2>::T&
    peripheral_t<STM32L4x3, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L4x5, DMA1>::T&
    peripheral_t<STM32L4x5, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L4x5, DMA2>::T&
    peripheral_t<STM32L4x5, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L4x6, DMA1>::T&
    peripheral_t<STM32L4x6, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32L4x6, DMA2>::T&
    peripheral_t<STM32L4x6, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32L496, DMA2D>::T&
    peripheral_t<STM32L496, DMA2D>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, DMA2D>::T*
        >(0x4002b000);

typename peripheral_t<STM32L4x6, DMA2D>::T&
    peripheral_t<STM32L4x6, DMA2D>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, DMA2D>::T*
        >(0x4002b000);

typename peripheral_t<STM32L412, EXTI>::T&
    peripheral_t<STM32L412, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L476, EXTI>::T&
    peripheral_t<STM32L476, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L496, EXTI>::T&
    peripheral_t<STM32L496, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L4x1, EXTI>::T&
    peripheral_t<STM32L4x1, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L4x2, EXTI>::T&
    peripheral_t<STM32L4x2, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L4x3, EXTI>::T&
    peripheral_t<STM32L4x3, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L4x5, EXTI>::T&
    peripheral_t<STM32L4x5, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L4x6, EXTI>::T&
    peripheral_t<STM32L4x6, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32L412, FIREWALL>::T&
    peripheral_t<STM32L412, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L476, FIREWALL>::T&
    peripheral_t<STM32L476, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L496, FIREWALL>::T&
    peripheral_t<STM32L496, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L4x1, FIREWALL>::T&
    peripheral_t<STM32L4x1, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L4x2, FIREWALL>::T&
    peripheral_t<STM32L4x2, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L4x3, FIREWALL>::T&
    peripheral_t<STM32L4x3, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L4x5, FIREWALL>::T&
    peripheral_t<STM32L4x5, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L4x6, FIREWALL>::T&
    peripheral_t<STM32L4x6, FIREWALL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, FIREWALL>::T*
        >(0x40011c00);

typename peripheral_t<STM32L412, FLASH>::T&
    peripheral_t<STM32L412, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L476, FLASH>::T&
    peripheral_t<STM32L476, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L496, FLASH>::T&
    peripheral_t<STM32L496, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L4x1, FLASH>::T&
    peripheral_t<STM32L4x1, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L4x2, FLASH>::T&
    peripheral_t<STM32L4x2, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L4x3, FLASH>::T&
    peripheral_t<STM32L4x3, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L4x5, FLASH>::T&
    peripheral_t<STM32L4x5, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L4x6, FLASH>::T&
    peripheral_t<STM32L4x6, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32L476, FMC>::T&
    peripheral_t<STM32L476, FMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, FMC>::T*
        >(0xa0000000);

typename peripheral_t<STM32L496, FMC>::T&
    peripheral_t<STM32L496, FMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, FMC>::T*
        >(0xa0000000);

typename peripheral_t<STM32L4x5, FMC>::T&
    peripheral_t<STM32L4x5, FMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, FMC>::T*
        >(0xa0000000);

typename peripheral_t<STM32L4x6, FMC>::T&
    peripheral_t<STM32L4x6, FMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, FMC>::T*
        >(0xa0000000);

typename peripheral_t<STM32L412, FPU>::T&
    peripheral_t<STM32L412, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L476, FPU>::T&
    peripheral_t<STM32L476, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L496, FPU>::T&
    peripheral_t<STM32L496, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L4x1, FPU>::T&
    peripheral_t<STM32L4x1, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L4x2, FPU>::T&
    peripheral_t<STM32L4x2, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L4x3, FPU>::T&
    peripheral_t<STM32L4x3, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L4x5, FPU>::T&
    peripheral_t<STM32L4x5, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L4x6, FPU>::T&
    peripheral_t<STM32L4x6, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32L412, FPU_CPACR>::T&
    peripheral_t<STM32L412, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L476, FPU_CPACR>::T&
    peripheral_t<STM32L476, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L496, FPU_CPACR>::T&
    peripheral_t<STM32L496, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L4x1, FPU_CPACR>::T&
    peripheral_t<STM32L4x1, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L4x2, FPU_CPACR>::T&
    peripheral_t<STM32L4x2, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L4x3, FPU_CPACR>::T&
    peripheral_t<STM32L4x3, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L4x5, FPU_CPACR>::T&
    peripheral_t<STM32L4x5, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L4x6, FPU_CPACR>::T&
    peripheral_t<STM32L4x6, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32L412, GPIOA>::T&
    peripheral_t<STM32L412, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L476, GPIOA>::T&
    peripheral_t<STM32L476, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L496, GPIOA>::T&
    peripheral_t<STM32L496, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L4x6, GPIOA>::T&
    peripheral_t<STM32L4x6, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L4x1, GPIOA>::T&
    peripheral_t<STM32L4x1, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L4x2, GPIOA>::T&
    peripheral_t<STM32L4x2, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L4x3, GPIOA>::T&
    peripheral_t<STM32L4x3, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L4x5, GPIOA>::T&
    peripheral_t<STM32L4x5, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32L412, GPIOB>::T&
    peripheral_t<STM32L412, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L476, GPIOB>::T&
    peripheral_t<STM32L476, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L496, GPIOB>::T&
    peripheral_t<STM32L496, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L4x6, GPIOB>::T&
    peripheral_t<STM32L4x6, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L4x1, GPIOB>::T&
    peripheral_t<STM32L4x1, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L4x2, GPIOB>::T&
    peripheral_t<STM32L4x2, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L4x3, GPIOB>::T&
    peripheral_t<STM32L4x3, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L4x5, GPIOB>::T&
    peripheral_t<STM32L4x5, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32L412, GPIOC>::T&
    peripheral_t<STM32L412, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L412, GPIOD>::T&
    peripheral_t<STM32L412, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L476, GPIOC>::T&
    peripheral_t<STM32L476, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L476, GPIOD>::T&
    peripheral_t<STM32L476, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L476, GPIOE>::T&
    peripheral_t<STM32L476, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L476, GPIOF>::T&
    peripheral_t<STM32L476, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32L476, GPIOG>::T&
    peripheral_t<STM32L476, GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOG>::T*
        >(0x48001800);

typename peripheral_t<STM32L476, GPIOH>::T&
    peripheral_t<STM32L476, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L496, GPIOC>::T&
    peripheral_t<STM32L496, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L496, GPIOD>::T&
    peripheral_t<STM32L496, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L496, GPIOE>::T&
    peripheral_t<STM32L496, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L496, GPIOF>::T&
    peripheral_t<STM32L496, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32L496, GPIOG>::T&
    peripheral_t<STM32L496, GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOG>::T*
        >(0x48001800);

typename peripheral_t<STM32L496, GPIOH>::T&
    peripheral_t<STM32L496, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L4x6, GPIOC>::T&
    peripheral_t<STM32L4x6, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L4x6, GPIOD>::T&
    peripheral_t<STM32L4x6, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L4x6, GPIOE>::T&
    peripheral_t<STM32L4x6, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L4x6, GPIOF>::T&
    peripheral_t<STM32L4x6, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32L4x6, GPIOG>::T&
    peripheral_t<STM32L4x6, GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOG>::T*
        >(0x48001800);

typename peripheral_t<STM32L4x6, GPIOH>::T&
    peripheral_t<STM32L4x6, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L4x1, GPIOC>::T&
    peripheral_t<STM32L4x1, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L4x1, GPIOD>::T&
    peripheral_t<STM32L4x1, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L4x1, GPIOE>::T&
    peripheral_t<STM32L4x1, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L4x1, GPIOF>::T&
    peripheral_t<STM32L4x1, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32L4x1, GPIOG>::T&
    peripheral_t<STM32L4x1, GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOG>::T*
        >(0x48001800);

typename peripheral_t<STM32L4x1, GPIOH>::T&
    peripheral_t<STM32L4x1, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L4x2, GPIOC>::T&
    peripheral_t<STM32L4x2, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L4x2, GPIOD>::T&
    peripheral_t<STM32L4x2, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L4x2, GPIOE>::T&
    peripheral_t<STM32L4x2, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L4x2, GPIOH>::T&
    peripheral_t<STM32L4x2, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L4x3, GPIOC>::T&
    peripheral_t<STM32L4x3, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L4x3, GPIOD>::T&
    peripheral_t<STM32L4x3, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L4x3, GPIOE>::T&
    peripheral_t<STM32L4x3, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L4x3, GPIOH>::T&
    peripheral_t<STM32L4x3, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L4x5, GPIOC>::T&
    peripheral_t<STM32L4x5, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32L4x5, GPIOD>::T&
    peripheral_t<STM32L4x5, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32L4x5, GPIOE>::T&
    peripheral_t<STM32L4x5, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32L4x5, GPIOF>::T&
    peripheral_t<STM32L4x5, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32L4x5, GPIOG>::T&
    peripheral_t<STM32L4x5, GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOG>::T*
        >(0x48001800);

typename peripheral_t<STM32L4x5, GPIOH>::T&
    peripheral_t<STM32L4x5, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L412, GPIOH>::T&
    peripheral_t<STM32L412, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32L496, GPIOI>::T&
    peripheral_t<STM32L496, GPIOI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, GPIOI>::T*
        >(0x48002000);

typename peripheral_t<STM32L4x6, GPIOI>::T&
    peripheral_t<STM32L4x6, GPIOI>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, GPIOI>::T*
        >(0x48002000);

typename peripheral_t<STM32L496, HASH>::T&
    peripheral_t<STM32L496, HASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, HASH>::T*
        >(0x50060400);

typename peripheral_t<STM32L4x6, HASH>::T&
    peripheral_t<STM32L4x6, HASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, HASH>::T*
        >(0x50060400);

typename peripheral_t<STM32L412, I2C1>::T&
    peripheral_t<STM32L412, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L412, I2C2>::T&
    peripheral_t<STM32L412, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L412, I2C3>::T&
    peripheral_t<STM32L412, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L476, I2C1>::T&
    peripheral_t<STM32L476, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L476, I2C2>::T&
    peripheral_t<STM32L476, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L476, I2C3>::T&
    peripheral_t<STM32L476, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L496, I2C1>::T&
    peripheral_t<STM32L496, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L496, I2C2>::T&
    peripheral_t<STM32L496, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L496, I2C3>::T&
    peripheral_t<STM32L496, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L496, I2C4>::T&
    peripheral_t<STM32L496, I2C4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, I2C4>::T*
        >(0x40008400);

typename peripheral_t<STM32L4x1, I2C1>::T&
    peripheral_t<STM32L4x1, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L4x1, I2C2>::T&
    peripheral_t<STM32L4x1, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L4x1, I2C3>::T&
    peripheral_t<STM32L4x1, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L4x2, I2C1>::T&
    peripheral_t<STM32L4x2, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L4x2, I2C2>::T&
    peripheral_t<STM32L4x2, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L4x2, I2C3>::T&
    peripheral_t<STM32L4x2, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L4x2, I2C4>::T&
    peripheral_t<STM32L4x2, I2C4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, I2C4>::T*
        >(0x40008400);

typename peripheral_t<STM32L4x3, I2C1>::T&
    peripheral_t<STM32L4x3, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L4x3, I2C2>::T&
    peripheral_t<STM32L4x3, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L4x3, I2C3>::T&
    peripheral_t<STM32L4x3, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L4x5, I2C1>::T&
    peripheral_t<STM32L4x5, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L4x5, I2C2>::T&
    peripheral_t<STM32L4x5, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L4x5, I2C3>::T&
    peripheral_t<STM32L4x5, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L4x6, I2C1>::T&
    peripheral_t<STM32L4x6, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32L4x6, I2C2>::T&
    peripheral_t<STM32L4x6, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32L4x6, I2C3>::T&
    peripheral_t<STM32L4x6, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32L4x6, I2C4>::T&
    peripheral_t<STM32L4x6, I2C4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, I2C4>::T*
        >(0x40008400);

typename peripheral_t<STM32L412, IWDG>::T&
    peripheral_t<STM32L412, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L476, IWDG>::T&
    peripheral_t<STM32L476, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L496, IWDG>::T&
    peripheral_t<STM32L496, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L4x1, IWDG>::T&
    peripheral_t<STM32L4x1, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L4x2, IWDG>::T&
    peripheral_t<STM32L4x2, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L4x3, IWDG>::T&
    peripheral_t<STM32L4x3, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L4x5, IWDG>::T&
    peripheral_t<STM32L4x5, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L4x6, IWDG>::T&
    peripheral_t<STM32L4x6, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32L476, LCD>::T&
    peripheral_t<STM32L476, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L496, LCD>::T&
    peripheral_t<STM32L496, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L4x1, LCD>::T&
    peripheral_t<STM32L4x1, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L4x2, LCD>::T&
    peripheral_t<STM32L4x2, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L4x3, LCD>::T&
    peripheral_t<STM32L4x3, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L4x5, LCD>::T&
    peripheral_t<STM32L4x5, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L4x6, LCD>::T&
    peripheral_t<STM32L4x6, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32L412, LPTIM1>::T&
    peripheral_t<STM32L412, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L412, LPTIM2>::T&
    peripheral_t<STM32L412, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L476, LPTIM1>::T&
    peripheral_t<STM32L476, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L476, LPTIM2>::T&
    peripheral_t<STM32L476, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L496, LPTIM1>::T&
    peripheral_t<STM32L496, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L496, LPTIM2>::T&
    peripheral_t<STM32L496, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L4x1, LPTIM1>::T&
    peripheral_t<STM32L4x1, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L4x1, LPTIM2>::T&
    peripheral_t<STM32L4x1, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L4x2, LPTIM1>::T&
    peripheral_t<STM32L4x2, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L4x2, LPTIM2>::T&
    peripheral_t<STM32L4x2, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L4x3, LPTIM1>::T&
    peripheral_t<STM32L4x3, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L4x3, LPTIM2>::T&
    peripheral_t<STM32L4x3, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L4x5, LPTIM1>::T&
    peripheral_t<STM32L4x5, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L4x5, LPTIM2>::T&
    peripheral_t<STM32L4x5, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L4x6, LPTIM1>::T&
    peripheral_t<STM32L4x6, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32L4x6, LPTIM2>::T&
    peripheral_t<STM32L4x6, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32L412, LPUART1>::T&
    peripheral_t<STM32L412, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L476, LPUART1>::T&
    peripheral_t<STM32L476, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L496, LPUART1>::T&
    peripheral_t<STM32L496, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L4x1, LPUART1>::T&
    peripheral_t<STM32L4x1, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L4x2, LPUART1>::T&
    peripheral_t<STM32L4x2, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L4x3, LPUART1>::T&
    peripheral_t<STM32L4x3, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L4x5, LPUART1>::T&
    peripheral_t<STM32L4x5, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L4x6, LPUART1>::T&
    peripheral_t<STM32L4x6, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32L412, MPU>::T&
    peripheral_t<STM32L412, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L476, MPU>::T&
    peripheral_t<STM32L476, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L496, MPU>::T&
    peripheral_t<STM32L496, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L4x1, MPU>::T&
    peripheral_t<STM32L4x1, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L4x2, MPU>::T&
    peripheral_t<STM32L4x2, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L4x3, MPU>::T&
    peripheral_t<STM32L4x3, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L4x5, MPU>::T&
    peripheral_t<STM32L4x5, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L4x6, MPU>::T&
    peripheral_t<STM32L4x6, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32L412, NVIC>::T&
    peripheral_t<STM32L412, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L4x1, NVIC>::T&
    peripheral_t<STM32L4x1, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L4x2, NVIC>::T&
    peripheral_t<STM32L4x2, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L4x3, NVIC>::T&
    peripheral_t<STM32L4x3, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L4x5, NVIC>::T&
    peripheral_t<STM32L4x5, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L4x6, NVIC>::T&
    peripheral_t<STM32L4x6, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L476, NVIC>::T&
    peripheral_t<STM32L476, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L496, NVIC>::T&
    peripheral_t<STM32L496, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32L412, NVIC_STIR>::T&
    peripheral_t<STM32L412, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L476, NVIC_STIR>::T&
    peripheral_t<STM32L476, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L496, NVIC_STIR>::T&
    peripheral_t<STM32L496, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L4x1, NVIC_STIR>::T&
    peripheral_t<STM32L4x1, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L4x2, NVIC_STIR>::T&
    peripheral_t<STM32L4x2, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L4x3, NVIC_STIR>::T&
    peripheral_t<STM32L4x3, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L4x5, NVIC_STIR>::T&
    peripheral_t<STM32L4x5, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L4x6, NVIC_STIR>::T&
    peripheral_t<STM32L4x6, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32L412, OPAMP>::T&
    peripheral_t<STM32L412, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L476, OPAMP>::T&
    peripheral_t<STM32L476, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L496, OPAMP>::T&
    peripheral_t<STM32L496, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L4x1, OPAMP>::T&
    peripheral_t<STM32L4x1, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L4x2, OPAMP>::T&
    peripheral_t<STM32L4x2, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L4x3, OPAMP>::T&
    peripheral_t<STM32L4x3, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L4x5, OPAMP>::T&
    peripheral_t<STM32L4x5, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L4x6, OPAMP>::T&
    peripheral_t<STM32L4x6, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, OPAMP>::T*
        >(0x40007800);

typename peripheral_t<STM32L412, PWR>::T&
    peripheral_t<STM32L412, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L476, PWR>::T&
    peripheral_t<STM32L476, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L496, PWR>::T&
    peripheral_t<STM32L496, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L4x1, PWR>::T&
    peripheral_t<STM32L4x1, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L4x2, PWR>::T&
    peripheral_t<STM32L4x2, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L4x3, PWR>::T&
    peripheral_t<STM32L4x3, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L4x5, PWR>::T&
    peripheral_t<STM32L4x5, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L4x6, PWR>::T&
    peripheral_t<STM32L4x6, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32L412, QUADSPI1>::T&
    peripheral_t<STM32L412, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L476, QUADSPI1>::T&
    peripheral_t<STM32L476, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L496, QUADSPI1>::T&
    peripheral_t<STM32L496, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L4x1, QUADSPI1>::T&
    peripheral_t<STM32L4x1, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L4x2, QUADSPI1>::T&
    peripheral_t<STM32L4x2, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L4x5, QUADSPI1>::T&
    peripheral_t<STM32L4x5, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L4x6, QUADSPI1>::T&
    peripheral_t<STM32L4x6, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32L412, RCC>::T&
    peripheral_t<STM32L412, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L476, RCC>::T&
    peripheral_t<STM32L476, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L496, RCC>::T&
    peripheral_t<STM32L496, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L4x6, RCC>::T&
    peripheral_t<STM32L4x6, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L4x1, RCC>::T&
    peripheral_t<STM32L4x1, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L4x2, RCC>::T&
    peripheral_t<STM32L4x2, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L4x3, RCC>::T&
    peripheral_t<STM32L4x3, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L4x5, RCC>::T&
    peripheral_t<STM32L4x5, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32L412, RNG>::T&
    peripheral_t<STM32L412, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L476, RNG>::T&
    peripheral_t<STM32L476, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L496, RNG>::T&
    peripheral_t<STM32L496, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L4x1, RNG>::T&
    peripheral_t<STM32L4x1, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L4x2, RNG>::T&
    peripheral_t<STM32L4x2, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L4x3, RNG>::T&
    peripheral_t<STM32L4x3, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L4x5, RNG>::T&
    peripheral_t<STM32L4x5, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L4x6, RNG>::T&
    peripheral_t<STM32L4x6, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, RNG>::T*
        >(0x50060800);

typename peripheral_t<STM32L412, RTC>::T&
    peripheral_t<STM32L412, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L476, RTC>::T&
    peripheral_t<STM32L476, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L496, RTC>::T&
    peripheral_t<STM32L496, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L4x1, RTC>::T&
    peripheral_t<STM32L4x1, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L4x2, RTC>::T&
    peripheral_t<STM32L4x2, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L4x3, RTC>::T&
    peripheral_t<STM32L4x3, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L4x5, RTC>::T&
    peripheral_t<STM32L4x5, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L4x6, RTC>::T&
    peripheral_t<STM32L4x6, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32L476, SAI1>::T&
    peripheral_t<STM32L476, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L476, SAI2>::T&
    peripheral_t<STM32L476, SAI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SAI2>::T*
        >(0x40015800);

typename peripheral_t<STM32L496, SAI1>::T&
    peripheral_t<STM32L496, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L496, SAI2>::T&
    peripheral_t<STM32L496, SAI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SAI2>::T*
        >(0x40015800);

typename peripheral_t<STM32L4x1, SAI1>::T&
    peripheral_t<STM32L4x1, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L4x3, SAI1>::T&
    peripheral_t<STM32L4x3, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L4x5, SAI1>::T&
    peripheral_t<STM32L4x5, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L4x5, SAI2>::T&
    peripheral_t<STM32L4x5, SAI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SAI2>::T*
        >(0x40015800);

typename peripheral_t<STM32L4x6, SAI1>::T&
    peripheral_t<STM32L4x6, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L4x6, SAI2>::T&
    peripheral_t<STM32L4x6, SAI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SAI2>::T*
        >(0x40015800);

typename peripheral_t<STM32L4x2, SAI1>::T&
    peripheral_t<STM32L4x2, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32L412, SCB>::T&
    peripheral_t<STM32L412, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L476, SCB>::T&
    peripheral_t<STM32L476, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L496, SCB>::T&
    peripheral_t<STM32L496, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L4x1, SCB>::T&
    peripheral_t<STM32L4x1, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L4x2, SCB>::T&
    peripheral_t<STM32L4x2, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L4x3, SCB>::T&
    peripheral_t<STM32L4x3, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L4x5, SCB>::T&
    peripheral_t<STM32L4x5, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L4x6, SCB>::T&
    peripheral_t<STM32L4x6, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32L412, SCB_ACTRL>::T&
    peripheral_t<STM32L412, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L476, SCB_ACTRL>::T&
    peripheral_t<STM32L476, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L496, SCB_ACTRL>::T&
    peripheral_t<STM32L496, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L4x1, SCB_ACTRL>::T&
    peripheral_t<STM32L4x1, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L4x2, SCB_ACTRL>::T&
    peripheral_t<STM32L4x2, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L4x3, SCB_ACTRL>::T&
    peripheral_t<STM32L4x3, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L4x5, SCB_ACTRL>::T&
    peripheral_t<STM32L4x5, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L4x6, SCB_ACTRL>::T&
    peripheral_t<STM32L4x6, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32L476, SDMMC1>::T&
    peripheral_t<STM32L476, SDMMC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SDMMC1>::T*
        >(0x40012800);

typename peripheral_t<STM32L496, SDMMC1>::T&
    peripheral_t<STM32L496, SDMMC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SDMMC1>::T*
        >(0x40012800);

typename peripheral_t<STM32L4x1, SDMMC>::T&
    peripheral_t<STM32L4x1, SDMMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SDMMC>::T*
        >(0x40012800);

typename peripheral_t<STM32L4x2, SDMMC>::T&
    peripheral_t<STM32L4x2, SDMMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SDMMC>::T*
        >(0x40012800);

typename peripheral_t<STM32L4x3, SDMMC>::T&
    peripheral_t<STM32L4x3, SDMMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SDMMC>::T*
        >(0x40012800);

typename peripheral_t<STM32L4x5, SDMMC>::T&
    peripheral_t<STM32L4x5, SDMMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SDMMC>::T*
        >(0x40012800);

typename peripheral_t<STM32L4x6, SDMMC1>::T&
    peripheral_t<STM32L4x6, SDMMC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SDMMC1>::T*
        >(0x40012800);

typename peripheral_t<STM32L412, SPI1>::T&
    peripheral_t<STM32L412, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L412, SPI2>::T&
    peripheral_t<STM32L412, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L476, SPI1>::T&
    peripheral_t<STM32L476, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L476, SPI2>::T&
    peripheral_t<STM32L476, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L476, SPI3>::T&
    peripheral_t<STM32L476, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L496, SPI1>::T&
    peripheral_t<STM32L496, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L496, SPI2>::T&
    peripheral_t<STM32L496, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L496, SPI3>::T&
    peripheral_t<STM32L496, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L4x1, SPI1>::T&
    peripheral_t<STM32L4x1, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L4x1, SPI2>::T&
    peripheral_t<STM32L4x1, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L4x1, SPI3>::T&
    peripheral_t<STM32L4x1, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L4x2, SPI1>::T&
    peripheral_t<STM32L4x2, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L4x2, SPI2>::T&
    peripheral_t<STM32L4x2, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L4x2, SPI3>::T&
    peripheral_t<STM32L4x2, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L4x3, SPI1>::T&
    peripheral_t<STM32L4x3, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L4x3, SPI2>::T&
    peripheral_t<STM32L4x3, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L4x3, SPI3>::T&
    peripheral_t<STM32L4x3, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L4x5, SPI1>::T&
    peripheral_t<STM32L4x5, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L4x5, SPI2>::T&
    peripheral_t<STM32L4x5, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L4x5, SPI3>::T&
    peripheral_t<STM32L4x5, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L4x6, SPI1>::T&
    peripheral_t<STM32L4x6, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32L4x6, SPI2>::T&
    peripheral_t<STM32L4x6, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32L4x6, SPI3>::T&
    peripheral_t<STM32L4x6, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SPI3>::T*
        >(0x40003c00);

typename peripheral_t<STM32L412, STK>::T&
    peripheral_t<STM32L412, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L476, STK>::T&
    peripheral_t<STM32L476, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L496, STK>::T&
    peripheral_t<STM32L496, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L4x1, STK>::T&
    peripheral_t<STM32L4x1, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L4x2, STK>::T&
    peripheral_t<STM32L4x2, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L4x3, STK>::T&
    peripheral_t<STM32L4x3, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L4x5, STK>::T&
    peripheral_t<STM32L4x5, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L4x6, STK>::T&
    peripheral_t<STM32L4x6, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32L476, SWPMI1>::T&
    peripheral_t<STM32L476, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L496, SWPMI1>::T&
    peripheral_t<STM32L496, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L4x6, SWPMI1>::T&
    peripheral_t<STM32L4x6, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L4x1, SWPMI1>::T&
    peripheral_t<STM32L4x1, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L4x2, SWPMI1>::T&
    peripheral_t<STM32L4x2, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L4x3, SWPMI1>::T&
    peripheral_t<STM32L4x3, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L4x5, SWPMI1>::T&
    peripheral_t<STM32L4x5, SWPMI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SWPMI1>::T*
        >(0x40008800);

typename peripheral_t<STM32L412, SYSCFG>::T&
    peripheral_t<STM32L412, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L476, SYSCFG>::T&
    peripheral_t<STM32L476, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L496, SYSCFG>::T&
    peripheral_t<STM32L496, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L4x1, SYSCFG>::T&
    peripheral_t<STM32L4x1, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L4x2, SYSCFG>::T&
    peripheral_t<STM32L4x2, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L4x3, SYSCFG>::T&
    peripheral_t<STM32L4x3, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L4x5, SYSCFG>::T&
    peripheral_t<STM32L4x5, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L4x6, SYSCFG>::T&
    peripheral_t<STM32L4x6, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32L412, TIM1>::T&
    peripheral_t<STM32L412, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L476, TIM1>::T&
    peripheral_t<STM32L476, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L496, TIM1>::T&
    peripheral_t<STM32L496, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L4x1, TIM1>::T&
    peripheral_t<STM32L4x1, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L4x1, TIM8>::T&
    peripheral_t<STM32L4x1, TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM8>::T*
        >(0x40013400);

typename peripheral_t<STM32L4x2, TIM1>::T&
    peripheral_t<STM32L4x2, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L4x3, TIM1>::T&
    peripheral_t<STM32L4x3, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L4x5, TIM1>::T&
    peripheral_t<STM32L4x5, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L4x6, TIM1>::T&
    peripheral_t<STM32L4x6, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32L412, TIM2>::T&
    peripheral_t<STM32L412, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L476, TIM2>::T&
    peripheral_t<STM32L476, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L476, TIM3>::T&
    peripheral_t<STM32L476, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32L476, TIM4>::T&
    peripheral_t<STM32L476, TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM4>::T*
        >(0x40000800);

typename peripheral_t<STM32L476, TIM5>::T&
    peripheral_t<STM32L476, TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM5>::T*
        >(0x40000c00);

typename peripheral_t<STM32L496, TIM2>::T&
    peripheral_t<STM32L496, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L496, TIM3>::T&
    peripheral_t<STM32L496, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32L496, TIM4>::T&
    peripheral_t<STM32L496, TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM4>::T*
        >(0x40000800);

typename peripheral_t<STM32L496, TIM5>::T&
    peripheral_t<STM32L496, TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM5>::T*
        >(0x40000c00);

typename peripheral_t<STM32L4x1, TIM2>::T&
    peripheral_t<STM32L4x1, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L4x1, TIM3>::T&
    peripheral_t<STM32L4x1, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32L4x1, TIM4>::T&
    peripheral_t<STM32L4x1, TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM4>::T*
        >(0x40000800);

typename peripheral_t<STM32L4x1, TIM5>::T&
    peripheral_t<STM32L4x1, TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM5>::T*
        >(0x40000c00);

typename peripheral_t<STM32L4x2, TIM2>::T&
    peripheral_t<STM32L4x2, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L4x2, TIM3>::T&
    peripheral_t<STM32L4x2, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32L4x3, TIM2>::T&
    peripheral_t<STM32L4x3, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L4x5, TIM2>::T&
    peripheral_t<STM32L4x5, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L4x5, TIM3>::T&
    peripheral_t<STM32L4x5, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32L4x5, TIM4>::T&
    peripheral_t<STM32L4x5, TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM4>::T*
        >(0x40000800);

typename peripheral_t<STM32L4x5, TIM5>::T&
    peripheral_t<STM32L4x5, TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM5>::T*
        >(0x40000c00);

typename peripheral_t<STM32L4x6, TIM2>::T&
    peripheral_t<STM32L4x6, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32L4x6, TIM3>::T&
    peripheral_t<STM32L4x6, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32L4x6, TIM4>::T&
    peripheral_t<STM32L4x6, TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM4>::T*
        >(0x40000800);

typename peripheral_t<STM32L4x6, TIM5>::T&
    peripheral_t<STM32L4x6, TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM5>::T*
        >(0x40000c00);

typename peripheral_t<STM32L412, TIM6>::T&
    peripheral_t<STM32L412, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L476, TIM6>::T&
    peripheral_t<STM32L476, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L476, TIM7>::T&
    peripheral_t<STM32L476, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L496, TIM6>::T&
    peripheral_t<STM32L496, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L496, TIM7>::T&
    peripheral_t<STM32L496, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L4x1, TIM6>::T&
    peripheral_t<STM32L4x1, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L4x1, TIM7>::T&
    peripheral_t<STM32L4x1, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L4x2, TIM6>::T&
    peripheral_t<STM32L4x2, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L4x2, TIM7>::T&
    peripheral_t<STM32L4x2, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L4x3, TIM6>::T&
    peripheral_t<STM32L4x3, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L4x3, TIM7>::T&
    peripheral_t<STM32L4x3, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L4x5, TIM6>::T&
    peripheral_t<STM32L4x5, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L4x5, TIM7>::T&
    peripheral_t<STM32L4x5, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L4x6, TIM6>::T&
    peripheral_t<STM32L4x6, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32L4x6, TIM7>::T&
    peripheral_t<STM32L4x6, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32L476, TIM8>::T&
    peripheral_t<STM32L476, TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM8>::T*
        >(0x40013400);

typename peripheral_t<STM32L496, TIM8>::T&
    peripheral_t<STM32L496, TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM8>::T*
        >(0x40013400);

typename peripheral_t<STM32L4x5, TIM8>::T&
    peripheral_t<STM32L4x5, TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM8>::T*
        >(0x40013400);

typename peripheral_t<STM32L4x6, TIM8>::T&
    peripheral_t<STM32L4x6, TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM8>::T*
        >(0x40013400);

typename peripheral_t<STM32L412, TIM15>::T&
    peripheral_t<STM32L412, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L476, TIM15>::T&
    peripheral_t<STM32L476, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L496, TIM15>::T&
    peripheral_t<STM32L496, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L4x3, TIM15>::T&
    peripheral_t<STM32L4x3, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L4x5, TIM15>::T&
    peripheral_t<STM32L4x5, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L4x6, TIM15>::T&
    peripheral_t<STM32L4x6, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L4x1, TIM15>::T&
    peripheral_t<STM32L4x1, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L4x2, TIM15>::T&
    peripheral_t<STM32L4x2, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32L412, TIM16>::T&
    peripheral_t<STM32L412, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L476, TIM16>::T&
    peripheral_t<STM32L476, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L476, TIM17>::T&
    peripheral_t<STM32L476, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32L496, TIM16>::T&
    peripheral_t<STM32L496, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L496, TIM17>::T&
    peripheral_t<STM32L496, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32L4x1, TIM16>::T&
    peripheral_t<STM32L4x1, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L4x1, TIM17>::T&
    peripheral_t<STM32L4x1, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TIM17>::T*
        >(0x40001800);

typename peripheral_t<STM32L4x2, TIM16>::T&
    peripheral_t<STM32L4x2, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L4x3, TIM16>::T&
    peripheral_t<STM32L4x3, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L4x5, TIM16>::T&
    peripheral_t<STM32L4x5, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L4x5, TIM17>::T&
    peripheral_t<STM32L4x5, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32L4x6, TIM16>::T&
    peripheral_t<STM32L4x6, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32L4x6, TIM17>::T&
    peripheral_t<STM32L4x6, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32L412, TSC>::T&
    peripheral_t<STM32L412, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L476, TSC>::T&
    peripheral_t<STM32L476, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L496, TSC>::T&
    peripheral_t<STM32L496, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L4x1, TSC>::T&
    peripheral_t<STM32L4x1, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L4x2, TSC>::T&
    peripheral_t<STM32L4x2, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L4x3, TSC>::T&
    peripheral_t<STM32L4x3, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L4x5, TSC>::T&
    peripheral_t<STM32L4x5, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L4x6, TSC>::T&
    peripheral_t<STM32L4x6, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32L476, UART4>::T&
    peripheral_t<STM32L476, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32L476, UART5>::T&
    peripheral_t<STM32L476, UART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, UART5>::T*
        >(0x40005000);

typename peripheral_t<STM32L496, UART4>::T&
    peripheral_t<STM32L496, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32L496, UART5>::T&
    peripheral_t<STM32L496, UART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, UART5>::T*
        >(0x40005000);

typename peripheral_t<STM32L412, USART1>::T&
    peripheral_t<STM32L412, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L412, USART2>::T&
    peripheral_t<STM32L412, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L412, USART3>::T&
    peripheral_t<STM32L412, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L476, USART1>::T&
    peripheral_t<STM32L476, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L496, USART1>::T&
    peripheral_t<STM32L496, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L4x1, UART4>::T&
    peripheral_t<STM32L4x1, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32L4x1, USART1>::T&
    peripheral_t<STM32L4x1, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L4x1, USART2>::T&
    peripheral_t<STM32L4x1, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L4x2, UART4>::T&
    peripheral_t<STM32L4x2, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32L4x2, USART1>::T&
    peripheral_t<STM32L4x2, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L4x2, USART2>::T&
    peripheral_t<STM32L4x2, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L4x3, USART1>::T&
    peripheral_t<STM32L4x3, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L4x3, USART2>::T&
    peripheral_t<STM32L4x3, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L4x3, USART3>::T&
    peripheral_t<STM32L4x3, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L4x5, UART4>::T&
    peripheral_t<STM32L4x5, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32L4x5, UART5>::T&
    peripheral_t<STM32L4x5, UART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, UART5>::T*
        >(0x40005000);

typename peripheral_t<STM32L4x5, USART1>::T&
    peripheral_t<STM32L4x5, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L4x5, USART2>::T&
    peripheral_t<STM32L4x5, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L4x5, USART3>::T&
    peripheral_t<STM32L4x5, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L4x6, UART4>::T&
    peripheral_t<STM32L4x6, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32L4x6, UART5>::T&
    peripheral_t<STM32L4x6, UART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, UART5>::T*
        >(0x40005000);

typename peripheral_t<STM32L4x6, USART1>::T&
    peripheral_t<STM32L4x6, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32L4x6, USART2>::T&
    peripheral_t<STM32L4x6, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L4x6, USART3>::T&
    peripheral_t<STM32L4x6, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L476, USART2>::T&
    peripheral_t<STM32L476, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L496, USART2>::T&
    peripheral_t<STM32L496, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32L476, USART3>::T&
    peripheral_t<STM32L476, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L496, USART3>::T&
    peripheral_t<STM32L496, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L4x1, USART3>::T&
    peripheral_t<STM32L4x1, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L4x2, USART3>::T&
    peripheral_t<STM32L4x2, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32L412, USB>::T&
    peripheral_t<STM32L412, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, USB>::T*
        >(0x40006800);

typename peripheral_t<STM32L4x3, USB>::T&
    peripheral_t<STM32L4x3, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, USB>::T*
        >(0x40006c00);

typename peripheral_t<STM32L4x5, USB>::T&
    peripheral_t<STM32L4x5, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, USB>::T*
        >(0x40006c00);

typename peripheral_t<STM32L4x1, USB_FS>::T&
    peripheral_t<STM32L4x1, USB_FS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, USB_FS>::T*
        >(0x40006800);

typename peripheral_t<STM32L4x1, USB_SRAM>::T&
    peripheral_t<STM32L4x1, USB_SRAM>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, USB_SRAM>::T*
        >(0x40006c00);

typename peripheral_t<STM32L4x2, USB_FS>::T&
    peripheral_t<STM32L4x2, USB_FS>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, USB_FS>::T*
        >(0x40006800);

typename peripheral_t<STM32L4x2, USB_SRAM>::T&
    peripheral_t<STM32L4x2, USB_SRAM>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, USB_SRAM>::T*
        >(0x40006c00);

typename peripheral_t<STM32L476, OTG_FS_DEVICE>::T&
    peripheral_t<STM32L476, OTG_FS_DEVICE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, OTG_FS_DEVICE>::T*
        >(0x50000800);

typename peripheral_t<STM32L496, OTG_FS_DEVICE>::T&
    peripheral_t<STM32L496, OTG_FS_DEVICE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, OTG_FS_DEVICE>::T*
        >(0x50000800);

typename peripheral_t<STM32L4x6, OTG_FS_DEVICE>::T&
    peripheral_t<STM32L4x6, OTG_FS_DEVICE>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, OTG_FS_DEVICE>::T*
        >(0x50000800);

typename peripheral_t<STM32L476, OTG_FS_GLOBAL>::T&
    peripheral_t<STM32L476, OTG_FS_GLOBAL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, OTG_FS_GLOBAL>::T*
        >(0x50000000);

typename peripheral_t<STM32L496, OTG_FS_GLOBAL>::T&
    peripheral_t<STM32L496, OTG_FS_GLOBAL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, OTG_FS_GLOBAL>::T*
        >(0x50000000);

typename peripheral_t<STM32L4x6, OTG_FS_GLOBAL>::T&
    peripheral_t<STM32L4x6, OTG_FS_GLOBAL>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, OTG_FS_GLOBAL>::T*
        >(0x50000000);

typename peripheral_t<STM32L476, OTG_FS_HOST>::T&
    peripheral_t<STM32L476, OTG_FS_HOST>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, OTG_FS_HOST>::T*
        >(0x50000400);

typename peripheral_t<STM32L496, OTG_FS_HOST>::T&
    peripheral_t<STM32L496, OTG_FS_HOST>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, OTG_FS_HOST>::T*
        >(0x50000400);

typename peripheral_t<STM32L4x6, OTG_FS_HOST>::T&
    peripheral_t<STM32L4x6, OTG_FS_HOST>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, OTG_FS_HOST>::T*
        >(0x50000400);

typename peripheral_t<STM32L476, OTG_FS_PWRCLK>::T&
    peripheral_t<STM32L476, OTG_FS_PWRCLK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, OTG_FS_PWRCLK>::T*
        >(0x50000e00);

typename peripheral_t<STM32L496, OTG_FS_PWRCLK>::T&
    peripheral_t<STM32L496, OTG_FS_PWRCLK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, OTG_FS_PWRCLK>::T*
        >(0x50000e00);

typename peripheral_t<STM32L4x6, OTG_FS_PWRCLK>::T&
    peripheral_t<STM32L4x6, OTG_FS_PWRCLK>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, OTG_FS_PWRCLK>::T*
        >(0x50000e00);

typename peripheral_t<STM32L476, VREFBUF>::T&
    peripheral_t<STM32L476, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L496, VREFBUF>::T&
    peripheral_t<STM32L496, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L4x1, VREFBUF>::T&
    peripheral_t<STM32L4x1, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L4x2, VREFBUF>::T&
    peripheral_t<STM32L4x2, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L4x3, VREFBUF>::T&
    peripheral_t<STM32L4x3, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L4x5, VREFBUF>::T&
    peripheral_t<STM32L4x5, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L4x6, VREFBUF>::T&
    peripheral_t<STM32L4x6, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32L412, WWDG>::T&
    peripheral_t<STM32L412, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L412, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L476, WWDG>::T&
    peripheral_t<STM32L476, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L476, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L496, WWDG>::T&
    peripheral_t<STM32L496, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L496, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L4x1, WWDG>::T&
    peripheral_t<STM32L4x1, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x1, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L4x2, WWDG>::T&
    peripheral_t<STM32L4x2, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x2, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L4x3, WWDG>::T&
    peripheral_t<STM32L4x3, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x3, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L4x5, WWDG>::T&
    peripheral_t<STM32L4x5, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x5, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32L4x6, WWDG>::T&
    peripheral_t<STM32L4x6, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32L4x6, WWDG>::T*
        >(0x40002c00);

