#pragma once

////
//
//      STM32G4 peripherals
//
////

typename peripheral_t<STM32G431xx, ADC1>::T& peripheral_t<STM32G431xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G431xx, ADC2>::T& peripheral_t<STM32G431xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G441xx, ADC1>::T& peripheral_t<STM32G441xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G441xx, ADC2>::T& peripheral_t<STM32G441xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G471xx, ADC1>::T& peripheral_t<STM32G471xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G471xx, ADC2>::T& peripheral_t<STM32G471xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G473xx, ADC1>::T& peripheral_t<STM32G473xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G473xx, ADC2>::T& peripheral_t<STM32G473xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G473xx, ADC4>::T& peripheral_t<STM32G473xx, ADC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC4>::T*>(0x50000500);

typename peripheral_t<STM32G474xx, ADC1>::T& peripheral_t<STM32G474xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G474xx, ADC2>::T& peripheral_t<STM32G474xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G474xx, ADC4>::T& peripheral_t<STM32G474xx, ADC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC4>::T*>(0x50000500);

typename peripheral_t<STM32G483xx, ADC1>::T& peripheral_t<STM32G483xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G483xx, ADC2>::T& peripheral_t<STM32G483xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G483xx, ADC4>::T& peripheral_t<STM32G483xx, ADC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC4>::T*>(0x50000500);

typename peripheral_t<STM32G484xx, ADC1>::T& peripheral_t<STM32G484xx, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32G484xx, ADC2>::T& peripheral_t<STM32G484xx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32G484xx, ADC4>::T& peripheral_t<STM32G484xx, ADC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC4>::T*>(0x50000500);

typename peripheral_t<STM32G431xx, ADC12_COMMON>::T& peripheral_t<STM32G431xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, ADC12_COMMON>::T*>(0x50000200);

typename peripheral_t<STM32G431xx, ADC345_COMMON>::T& peripheral_t<STM32G431xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G441xx, ADC12_COMMON>::T& peripheral_t<STM32G441xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, ADC12_COMMON>::T*>(0x50000200);

typename peripheral_t<STM32G441xx, ADC345_COMMON>::T& peripheral_t<STM32G441xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G471xx, ADC12_COMMON>::T& peripheral_t<STM32G471xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, ADC12_COMMON>::T*>(0x50000300);

typename peripheral_t<STM32G471xx, ADC345_COMMON>::T& peripheral_t<STM32G471xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G473xx, ADC12_COMMON>::T& peripheral_t<STM32G473xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC12_COMMON>::T*>(0x50000200);

typename peripheral_t<STM32G473xx, ADC345_COMMON>::T& peripheral_t<STM32G473xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G474xx, ADC12_COMMON>::T& peripheral_t<STM32G474xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC12_COMMON>::T*>(0x50000200);

typename peripheral_t<STM32G474xx, ADC345_COMMON>::T& peripheral_t<STM32G474xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G483xx, ADC12_COMMON>::T& peripheral_t<STM32G483xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC12_COMMON>::T*>(0x50000200);

typename peripheral_t<STM32G483xx, ADC345_COMMON>::T& peripheral_t<STM32G483xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G484xx, ADC12_COMMON>::T& peripheral_t<STM32G484xx, ADC12_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC12_COMMON>::T*>(0x50000200);

typename peripheral_t<STM32G484xx, ADC345_COMMON>::T& peripheral_t<STM32G484xx, ADC345_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC345_COMMON>::T*>(0x50000700);

typename peripheral_t<STM32G471xx, ADC3>::T& peripheral_t<STM32G471xx, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32G473xx, ADC3>::T& peripheral_t<STM32G473xx, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32G473xx, ADC5>::T& peripheral_t<STM32G473xx, ADC5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, ADC5>::T*>(0x50000600);

typename peripheral_t<STM32G474xx, ADC3>::T& peripheral_t<STM32G474xx, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32G474xx, ADC5>::T& peripheral_t<STM32G474xx, ADC5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, ADC5>::T*>(0x50000600);

typename peripheral_t<STM32G483xx, ADC3>::T& peripheral_t<STM32G483xx, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32G483xx, ADC5>::T& peripheral_t<STM32G483xx, ADC5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, ADC5>::T*>(0x50000600);

typename peripheral_t<STM32G484xx, ADC3>::T& peripheral_t<STM32G484xx, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32G484xx, ADC5>::T& peripheral_t<STM32G484xx, ADC5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, ADC5>::T*>(0x50000600);

typename peripheral_t<STM32G431xx, AES>::T& peripheral_t<STM32G431xx, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, AES>::T*>(0x50060000);

typename peripheral_t<STM32G441xx, AES>::T& peripheral_t<STM32G441xx, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, AES>::T*>(0x50060000);

typename peripheral_t<STM32G471xx, AES>::T& peripheral_t<STM32G471xx, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, AES>::T*>(0x50060000);

typename peripheral_t<STM32G473xx, AES>::T& peripheral_t<STM32G473xx, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, AES>::T*>(0x50060000);

typename peripheral_t<STM32G483xx, AES>::T& peripheral_t<STM32G483xx, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, AES>::T*>(0x50060000);

typename peripheral_t<STM32G484xx, AES>::T& peripheral_t<STM32G484xx, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, AES>::T*>(0x50060000);

typename peripheral_t<STM32G431xx, COMP>::T& peripheral_t<STM32G431xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G441xx, COMP>::T& peripheral_t<STM32G441xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G471xx, COMP>::T& peripheral_t<STM32G471xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G473xx, COMP>::T& peripheral_t<STM32G473xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G474xx, COMP>::T& peripheral_t<STM32G474xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G483xx, COMP>::T& peripheral_t<STM32G483xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G484xx, COMP>::T& peripheral_t<STM32G484xx, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G431xx, CORDIC>::T& peripheral_t<STM32G431xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G441xx, CORDIC>::T& peripheral_t<STM32G441xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G471xx, CORDIC>::T& peripheral_t<STM32G471xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G473xx, CORDIC>::T& peripheral_t<STM32G473xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G474xx, CORDIC>::T& peripheral_t<STM32G474xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G483xx, CORDIC>::T& peripheral_t<STM32G483xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G484xx, CORDIC>::T& peripheral_t<STM32G484xx, CORDIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, CORDIC>::T*>(0x40020c00);

typename peripheral_t<STM32G431xx, CRC>::T& peripheral_t<STM32G431xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G441xx, CRC>::T& peripheral_t<STM32G441xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G471xx, CRC>::T& peripheral_t<STM32G471xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G473xx, CRC>::T& peripheral_t<STM32G473xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G474xx, CRC>::T& peripheral_t<STM32G474xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G483xx, CRC>::T& peripheral_t<STM32G483xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G484xx, CRC>::T& peripheral_t<STM32G484xx, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G431xx, CRS>::T& peripheral_t<STM32G431xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G441xx, CRS>::T& peripheral_t<STM32G441xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G471xx, CRS>::T& peripheral_t<STM32G471xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G473xx, CRS>::T& peripheral_t<STM32G473xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G474xx, CRS>::T& peripheral_t<STM32G474xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G483xx, CRS>::T& peripheral_t<STM32G483xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G484xx, CRS>::T& peripheral_t<STM32G484xx, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, CRS>::T*>(0x40002000);

typename peripheral_t<STM32G431xx, DAC1>::T& peripheral_t<STM32G431xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G431xx, DAC2>::T& peripheral_t<STM32G431xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G431xx, DAC3>::T& peripheral_t<STM32G431xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G431xx, DAC4>::T& peripheral_t<STM32G431xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G441xx, DAC1>::T& peripheral_t<STM32G441xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G441xx, DAC2>::T& peripheral_t<STM32G441xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G441xx, DAC3>::T& peripheral_t<STM32G441xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G441xx, DAC4>::T& peripheral_t<STM32G441xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G471xx, DAC1>::T& peripheral_t<STM32G471xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G471xx, DAC2>::T& peripheral_t<STM32G471xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G471xx, DAC3>::T& peripheral_t<STM32G471xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G471xx, DAC4>::T& peripheral_t<STM32G471xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G473xx, DAC1>::T& peripheral_t<STM32G473xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G473xx, DAC2>::T& peripheral_t<STM32G473xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G473xx, DAC3>::T& peripheral_t<STM32G473xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G473xx, DAC4>::T& peripheral_t<STM32G473xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G474xx, DAC1>::T& peripheral_t<STM32G474xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G474xx, DAC2>::T& peripheral_t<STM32G474xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G474xx, DAC3>::T& peripheral_t<STM32G474xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G474xx, DAC4>::T& peripheral_t<STM32G474xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G483xx, DAC1>::T& peripheral_t<STM32G483xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G483xx, DAC2>::T& peripheral_t<STM32G483xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G483xx, DAC3>::T& peripheral_t<STM32G483xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G483xx, DAC4>::T& peripheral_t<STM32G483xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G484xx, DAC1>::T& peripheral_t<STM32G484xx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DAC1>::T*>(0x50000800);

typename peripheral_t<STM32G484xx, DAC2>::T& peripheral_t<STM32G484xx, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DAC2>::T*>(0x50000c00);

typename peripheral_t<STM32G484xx, DAC3>::T& peripheral_t<STM32G484xx, DAC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DAC3>::T*>(0x50001000);

typename peripheral_t<STM32G484xx, DAC4>::T& peripheral_t<STM32G484xx, DAC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DAC4>::T*>(0x50001400);

typename peripheral_t<STM32G431xx, DBGMCU>::T& peripheral_t<STM32G431xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G441xx, DBGMCU>::T& peripheral_t<STM32G441xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G471xx, DBGMCU>::T& peripheral_t<STM32G471xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G473xx, DBGMCU>::T& peripheral_t<STM32G473xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G474xx, DBGMCU>::T& peripheral_t<STM32G474xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G483xx, DBGMCU>::T& peripheral_t<STM32G483xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G484xx, DBGMCU>::T& peripheral_t<STM32G484xx, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32G431xx, DMA1>::T& peripheral_t<STM32G431xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G431xx, DMA2>::T& peripheral_t<STM32G431xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G441xx, DMA1>::T& peripheral_t<STM32G441xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G441xx, DMA2>::T& peripheral_t<STM32G441xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G471xx, DMA1>::T& peripheral_t<STM32G471xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G471xx, DMA2>::T& peripheral_t<STM32G471xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G473xx, DMA1>::T& peripheral_t<STM32G473xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G473xx, DMA2>::T& peripheral_t<STM32G473xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G474xx, DMA1>::T& peripheral_t<STM32G474xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G474xx, DMA2>::T& peripheral_t<STM32G474xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G483xx, DMA1>::T& peripheral_t<STM32G483xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G483xx, DMA2>::T& peripheral_t<STM32G483xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G484xx, DMA1>::T& peripheral_t<STM32G484xx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32G484xx, DMA2>::T& peripheral_t<STM32G484xx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32G431xx, DMAMUX>::T& peripheral_t<STM32G431xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G441xx, DMAMUX>::T& peripheral_t<STM32G441xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G471xx, DMAMUX>::T& peripheral_t<STM32G471xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G473xx, DMAMUX>::T& peripheral_t<STM32G473xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G474xx, DMAMUX>::T& peripheral_t<STM32G474xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G483xx, DMAMUX>::T& peripheral_t<STM32G483xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G484xx, DMAMUX>::T& peripheral_t<STM32G484xx, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G431xx, EXTI>::T& peripheral_t<STM32G431xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G441xx, EXTI>::T& peripheral_t<STM32G441xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G471xx, EXTI>::T& peripheral_t<STM32G471xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G473xx, EXTI>::T& peripheral_t<STM32G473xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G474xx, EXTI>::T& peripheral_t<STM32G474xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G483xx, EXTI>::T& peripheral_t<STM32G483xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G484xx, EXTI>::T& peripheral_t<STM32G484xx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32G431xx, FDCAN>::T& peripheral_t<STM32G431xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G431xx, FDCAN1>::T& peripheral_t<STM32G431xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G441xx, FDCAN>::T& peripheral_t<STM32G441xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G441xx, FDCAN1>::T& peripheral_t<STM32G441xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G471xx, FDCAN>::T& peripheral_t<STM32G471xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G471xx, FDCAN1>::T& peripheral_t<STM32G471xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G471xx, FDCAN2>::T& peripheral_t<STM32G471xx, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FDCAN2>::T*>(0x40006800);

typename peripheral_t<STM32G473xx, FDCAN>::T& peripheral_t<STM32G473xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G473xx, FDCAN1>::T& peripheral_t<STM32G473xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G473xx, FDCAN2>::T& peripheral_t<STM32G473xx, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FDCAN2>::T*>(0x40006800);

typename peripheral_t<STM32G473xx, FDCAN3>::T& peripheral_t<STM32G473xx, FDCAN3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FDCAN3>::T*>(0x40006c00);

typename peripheral_t<STM32G474xx, FDCAN>::T& peripheral_t<STM32G474xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G474xx, FDCAN1>::T& peripheral_t<STM32G474xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G474xx, FDCAN2>::T& peripheral_t<STM32G474xx, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FDCAN2>::T*>(0x40006800);

typename peripheral_t<STM32G474xx, FDCAN3>::T& peripheral_t<STM32G474xx, FDCAN3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FDCAN3>::T*>(0x40006c00);

typename peripheral_t<STM32G483xx, FDCAN>::T& peripheral_t<STM32G483xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G483xx, FDCAN1>::T& peripheral_t<STM32G483xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G483xx, FDCAN2>::T& peripheral_t<STM32G483xx, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FDCAN2>::T*>(0x40006800);

typename peripheral_t<STM32G483xx, FDCAN3>::T& peripheral_t<STM32G483xx, FDCAN3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FDCAN3>::T*>(0x40006c00);

typename peripheral_t<STM32G484xx, FDCAN>::T& peripheral_t<STM32G484xx, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32G484xx, FDCAN1>::T& peripheral_t<STM32G484xx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FDCAN1>::T*>(0x40006400);

typename peripheral_t<STM32G484xx, FDCAN2>::T& peripheral_t<STM32G484xx, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FDCAN2>::T*>(0x40006800);

typename peripheral_t<STM32G484xx, FDCAN3>::T& peripheral_t<STM32G484xx, FDCAN3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FDCAN3>::T*>(0x40006c00);

typename peripheral_t<STM32G431xx, FMAC>::T& peripheral_t<STM32G431xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G441xx, FMAC>::T& peripheral_t<STM32G441xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G471xx, FMAC>::T& peripheral_t<STM32G471xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G473xx, FMAC>::T& peripheral_t<STM32G473xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G474xx, FMAC>::T& peripheral_t<STM32G474xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G483xx, FMAC>::T& peripheral_t<STM32G483xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G484xx, FMAC>::T& peripheral_t<STM32G484xx, FMAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FMAC>::T*>(0x40021400);

typename peripheral_t<STM32G473xx, FMC>::T& peripheral_t<STM32G473xx, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FMC>::T*>(0xa0000000);

typename peripheral_t<STM32G474xx, FMC>::T& peripheral_t<STM32G474xx, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FMC>::T*>(0xa0000000);

typename peripheral_t<STM32G483xx, FMC>::T& peripheral_t<STM32G483xx, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FMC>::T*>(0xa0000000);

typename peripheral_t<STM32G484xx, FMC>::T& peripheral_t<STM32G484xx, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FMC>::T*>(0xa0000000);

typename peripheral_t<STM32G431xx, FPU>::T& peripheral_t<STM32G431xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G441xx, FPU>::T& peripheral_t<STM32G441xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G471xx, FPU>::T& peripheral_t<STM32G471xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G473xx, FPU>::T& peripheral_t<STM32G473xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G474xx, FPU>::T& peripheral_t<STM32G474xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G483xx, FPU>::T& peripheral_t<STM32G483xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G484xx, FPU>::T& peripheral_t<STM32G484xx, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G431xx, FPU_CPACR>::T& peripheral_t<STM32G431xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G441xx, FPU_CPACR>::T& peripheral_t<STM32G441xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G471xx, FPU_CPACR>::T& peripheral_t<STM32G471xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G473xx, FPU_CPACR>::T& peripheral_t<STM32G473xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G474xx, FPU_CPACR>::T& peripheral_t<STM32G474xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G483xx, FPU_CPACR>::T& peripheral_t<STM32G483xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G484xx, FPU_CPACR>::T& peripheral_t<STM32G484xx, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G431xx, FLASH>::T& peripheral_t<STM32G431xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G441xx, FLASH>::T& peripheral_t<STM32G441xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G471xx, FLASH>::T& peripheral_t<STM32G471xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G473xx, FLASH>::T& peripheral_t<STM32G473xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G474xx, FLASH>::T& peripheral_t<STM32G474xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G483xx, FLASH>::T& peripheral_t<STM32G483xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G484xx, FLASH>::T& peripheral_t<STM32G484xx, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G431xx, GPIOA>::T& peripheral_t<STM32G431xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G441xx, GPIOA>::T& peripheral_t<STM32G441xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G471xx, GPIOA>::T& peripheral_t<STM32G471xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G473xx, GPIOA>::T& peripheral_t<STM32G473xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G474xx, GPIOA>::T& peripheral_t<STM32G474xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G483xx, GPIOA>::T& peripheral_t<STM32G483xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G484xx, GPIOA>::T& peripheral_t<STM32G484xx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32G431xx, GPIOB>::T& peripheral_t<STM32G431xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G441xx, GPIOB>::T& peripheral_t<STM32G441xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G471xx, GPIOB>::T& peripheral_t<STM32G471xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G473xx, GPIOB>::T& peripheral_t<STM32G473xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G474xx, GPIOB>::T& peripheral_t<STM32G474xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G483xx, GPIOB>::T& peripheral_t<STM32G483xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G484xx, GPIOB>::T& peripheral_t<STM32G484xx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32G431xx, GPIOC>::T& peripheral_t<STM32G431xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G431xx, GPIOD>::T& peripheral_t<STM32G431xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G431xx, GPIOE>::T& peripheral_t<STM32G431xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G431xx, GPIOF>::T& peripheral_t<STM32G431xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G431xx, GPIOG>::T& peripheral_t<STM32G431xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G441xx, GPIOC>::T& peripheral_t<STM32G441xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G441xx, GPIOD>::T& peripheral_t<STM32G441xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G441xx, GPIOE>::T& peripheral_t<STM32G441xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G441xx, GPIOF>::T& peripheral_t<STM32G441xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G441xx, GPIOG>::T& peripheral_t<STM32G441xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G471xx, GPIOC>::T& peripheral_t<STM32G471xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G471xx, GPIOD>::T& peripheral_t<STM32G471xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G471xx, GPIOE>::T& peripheral_t<STM32G471xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G471xx, GPIOF>::T& peripheral_t<STM32G471xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G471xx, GPIOG>::T& peripheral_t<STM32G471xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G473xx, GPIOC>::T& peripheral_t<STM32G473xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G473xx, GPIOD>::T& peripheral_t<STM32G473xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G473xx, GPIOE>::T& peripheral_t<STM32G473xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G473xx, GPIOF>::T& peripheral_t<STM32G473xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G473xx, GPIOG>::T& peripheral_t<STM32G473xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G474xx, GPIOC>::T& peripheral_t<STM32G474xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G474xx, GPIOD>::T& peripheral_t<STM32G474xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G474xx, GPIOE>::T& peripheral_t<STM32G474xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G474xx, GPIOF>::T& peripheral_t<STM32G474xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G474xx, GPIOG>::T& peripheral_t<STM32G474xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G483xx, GPIOC>::T& peripheral_t<STM32G483xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G483xx, GPIOD>::T& peripheral_t<STM32G483xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G483xx, GPIOE>::T& peripheral_t<STM32G483xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G483xx, GPIOF>::T& peripheral_t<STM32G483xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G483xx, GPIOG>::T& peripheral_t<STM32G483xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G484xx, GPIOC>::T& peripheral_t<STM32G484xx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32G484xx, GPIOD>::T& peripheral_t<STM32G484xx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32G484xx, GPIOE>::T& peripheral_t<STM32G484xx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32G484xx, GPIOF>::T& peripheral_t<STM32G484xx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32G484xx, GPIOG>::T& peripheral_t<STM32G484xx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32G474xx, HRTIM_MASTER>::T& peripheral_t<STM32G474xx, HRTIM_MASTER>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_MASTER>::T*>(0x40016800);

typename peripheral_t<STM32G484xx, HRTIM_MASTER>::T& peripheral_t<STM32G484xx, HRTIM_MASTER>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_MASTER>::T*>(0x40016800);

typename peripheral_t<STM32G474xx, HRTIM_TIMA>::T& peripheral_t<STM32G474xx, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_TIMA>::T*>(0x40016880);

typename peripheral_t<STM32G484xx, HRTIM_TIMA>::T& peripheral_t<STM32G484xx, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_TIMA>::T*>(0x40016880);

typename peripheral_t<STM32G474xx, HRTIM_TIMB>::T& peripheral_t<STM32G474xx, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_TIMB>::T*>(0x40016900);

typename peripheral_t<STM32G484xx, HRTIM_TIMB>::T& peripheral_t<STM32G484xx, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_TIMB>::T*>(0x40016900);

typename peripheral_t<STM32G474xx, HRTIM_TIMC>::T& peripheral_t<STM32G474xx, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_TIMC>::T*>(0x40016980);

typename peripheral_t<STM32G484xx, HRTIM_TIMC>::T& peripheral_t<STM32G484xx, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_TIMC>::T*>(0x40016980);

typename peripheral_t<STM32G474xx, HRTIM_TIMD>::T& peripheral_t<STM32G474xx, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_TIMD>::T*>(0x40016a00);

typename peripheral_t<STM32G484xx, HRTIM_TIMD>::T& peripheral_t<STM32G484xx, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_TIMD>::T*>(0x40016a00);

typename peripheral_t<STM32G474xx, HRTIM_TIME>::T& peripheral_t<STM32G474xx, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_TIME>::T*>(0x40016a80);

typename peripheral_t<STM32G484xx, HRTIM_TIME>::T& peripheral_t<STM32G484xx, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_TIME>::T*>(0x40016a80);

typename peripheral_t<STM32G474xx, HRTIM_TIMF>::T& peripheral_t<STM32G474xx, HRTIM_TIMF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_TIMF>::T*>(0x40016b00);

typename peripheral_t<STM32G484xx, HRTIM_TIMF>::T& peripheral_t<STM32G484xx, HRTIM_TIMF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_TIMF>::T*>(0x40016b00);

typename peripheral_t<STM32G474xx, HRTIM_COMMON>::T& peripheral_t<STM32G474xx, HRTIM_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, HRTIM_COMMON>::T*>(0x40016b80);

typename peripheral_t<STM32G484xx, HRTIM_COMMON>::T& peripheral_t<STM32G484xx, HRTIM_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, HRTIM_COMMON>::T*>(0x40016b80);

typename peripheral_t<STM32G431xx, I2C1>::T& peripheral_t<STM32G431xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G431xx, I2C2>::T& peripheral_t<STM32G431xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G431xx, I2C3>::T& peripheral_t<STM32G431xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G441xx, I2C1>::T& peripheral_t<STM32G441xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G441xx, I2C2>::T& peripheral_t<STM32G441xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G441xx, I2C3>::T& peripheral_t<STM32G441xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G471xx, I2C1>::T& peripheral_t<STM32G471xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G471xx, I2C2>::T& peripheral_t<STM32G471xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G471xx, I2C3>::T& peripheral_t<STM32G471xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G471xx, I2C4>::T& peripheral_t<STM32G471xx, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32G473xx, I2C1>::T& peripheral_t<STM32G473xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G473xx, I2C2>::T& peripheral_t<STM32G473xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G473xx, I2C3>::T& peripheral_t<STM32G473xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G473xx, I2C4>::T& peripheral_t<STM32G473xx, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32G474xx, I2C1>::T& peripheral_t<STM32G474xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G474xx, I2C2>::T& peripheral_t<STM32G474xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G474xx, I2C3>::T& peripheral_t<STM32G474xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G474xx, I2C4>::T& peripheral_t<STM32G474xx, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32G483xx, I2C1>::T& peripheral_t<STM32G483xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G483xx, I2C2>::T& peripheral_t<STM32G483xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G483xx, I2C3>::T& peripheral_t<STM32G483xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G483xx, I2C4>::T& peripheral_t<STM32G483xx, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32G484xx, I2C1>::T& peripheral_t<STM32G484xx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G484xx, I2C2>::T& peripheral_t<STM32G484xx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G484xx, I2C3>::T& peripheral_t<STM32G484xx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32G484xx, I2C4>::T& peripheral_t<STM32G484xx, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32G431xx, IWDG>::T& peripheral_t<STM32G431xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G441xx, IWDG>::T& peripheral_t<STM32G441xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G471xx, IWDG>::T& peripheral_t<STM32G471xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G473xx, IWDG>::T& peripheral_t<STM32G473xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G474xx, IWDG>::T& peripheral_t<STM32G474xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G483xx, IWDG>::T& peripheral_t<STM32G483xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G484xx, IWDG>::T& peripheral_t<STM32G484xx, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G431xx, LPTIMER1>::T& peripheral_t<STM32G431xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G441xx, LPTIMER1>::T& peripheral_t<STM32G441xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G471xx, LPTIMER1>::T& peripheral_t<STM32G471xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G473xx, LPTIMER1>::T& peripheral_t<STM32G473xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G474xx, LPTIMER1>::T& peripheral_t<STM32G474xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G483xx, LPTIMER1>::T& peripheral_t<STM32G483xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G484xx, LPTIMER1>::T& peripheral_t<STM32G484xx, LPTIMER1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, LPTIMER1>::T*>(0x40007c00);

typename peripheral_t<STM32G431xx, MPU>::T& peripheral_t<STM32G431xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G441xx, MPU>::T& peripheral_t<STM32G441xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G471xx, MPU>::T& peripheral_t<STM32G471xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G473xx, MPU>::T& peripheral_t<STM32G473xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G474xx, MPU>::T& peripheral_t<STM32G474xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G483xx, MPU>::T& peripheral_t<STM32G483xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G484xx, MPU>::T& peripheral_t<STM32G484xx, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, MPU>::T*>(0xe000e084);

typename peripheral_t<STM32G431xx, NVIC>::T& peripheral_t<STM32G431xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G441xx, NVIC>::T& peripheral_t<STM32G441xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G471xx, NVIC>::T& peripheral_t<STM32G471xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G473xx, NVIC>::T& peripheral_t<STM32G473xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G474xx, NVIC>::T& peripheral_t<STM32G474xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G483xx, NVIC>::T& peripheral_t<STM32G483xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G484xx, NVIC>::T& peripheral_t<STM32G484xx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G431xx, NVIC_STIR>::T& peripheral_t<STM32G431xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G441xx, NVIC_STIR>::T& peripheral_t<STM32G441xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G471xx, NVIC_STIR>::T& peripheral_t<STM32G471xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G473xx, NVIC_STIR>::T& peripheral_t<STM32G473xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G474xx, NVIC_STIR>::T& peripheral_t<STM32G474xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G483xx, NVIC_STIR>::T& peripheral_t<STM32G483xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G484xx, NVIC_STIR>::T& peripheral_t<STM32G484xx, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G431xx, OPAMP>::T& peripheral_t<STM32G431xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G441xx, OPAMP>::T& peripheral_t<STM32G441xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G471xx, OPAMP>::T& peripheral_t<STM32G471xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G473xx, OPAMP>::T& peripheral_t<STM32G473xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G474xx, OPAMP>::T& peripheral_t<STM32G474xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G483xx, OPAMP>::T& peripheral_t<STM32G483xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G484xx, OPAMP>::T& peripheral_t<STM32G484xx, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, OPAMP>::T*>(0x40010300);

typename peripheral_t<STM32G431xx, PWR>::T& peripheral_t<STM32G431xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G441xx, PWR>::T& peripheral_t<STM32G441xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G471xx, PWR>::T& peripheral_t<STM32G471xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G473xx, PWR>::T& peripheral_t<STM32G473xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G474xx, PWR>::T& peripheral_t<STM32G474xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G483xx, PWR>::T& peripheral_t<STM32G483xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G484xx, PWR>::T& peripheral_t<STM32G484xx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G473xx, QUADSPI>::T& peripheral_t<STM32G473xx, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, QUADSPI>::T*>(0xa0001000);

typename peripheral_t<STM32G474xx, QUADSPI>::T& peripheral_t<STM32G474xx, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, QUADSPI>::T*>(0xa0001000);

typename peripheral_t<STM32G483xx, QUADSPI>::T& peripheral_t<STM32G483xx, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, QUADSPI>::T*>(0xa0001000);

typename peripheral_t<STM32G484xx, QUADSPI>::T& peripheral_t<STM32G484xx, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, QUADSPI>::T*>(0xa0001000);

typename peripheral_t<STM32G431xx, RCC>::T& peripheral_t<STM32G431xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G441xx, RCC>::T& peripheral_t<STM32G441xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G471xx, RCC>::T& peripheral_t<STM32G471xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G473xx, RCC>::T& peripheral_t<STM32G473xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G474xx, RCC>::T& peripheral_t<STM32G474xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G483xx, RCC>::T& peripheral_t<STM32G483xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G484xx, RCC>::T& peripheral_t<STM32G484xx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G431xx, RNG>::T& peripheral_t<STM32G431xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G441xx, RNG>::T& peripheral_t<STM32G441xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G471xx, RNG>::T& peripheral_t<STM32G471xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G473xx, RNG>::T& peripheral_t<STM32G473xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G474xx, RNG>::T& peripheral_t<STM32G474xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G483xx, RNG>::T& peripheral_t<STM32G483xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G484xx, RNG>::T& peripheral_t<STM32G484xx, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, RNG>::T*>(0x50060800);

typename peripheral_t<STM32G431xx, RTC>::T& peripheral_t<STM32G431xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G441xx, RTC>::T& peripheral_t<STM32G441xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G471xx, RTC>::T& peripheral_t<STM32G471xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G473xx, RTC>::T& peripheral_t<STM32G473xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G474xx, RTC>::T& peripheral_t<STM32G474xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G483xx, RTC>::T& peripheral_t<STM32G483xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G484xx, RTC>::T& peripheral_t<STM32G484xx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G431xx, SAI>::T& peripheral_t<STM32G431xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G441xx, SAI>::T& peripheral_t<STM32G441xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G471xx, SAI>::T& peripheral_t<STM32G471xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G473xx, SAI>::T& peripheral_t<STM32G473xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G474xx, SAI>::T& peripheral_t<STM32G474xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G483xx, SAI>::T& peripheral_t<STM32G483xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G484xx, SAI>::T& peripheral_t<STM32G484xx, SAI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SAI>::T*>(0x40015400);

typename peripheral_t<STM32G431xx, SCB>::T& peripheral_t<STM32G431xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G441xx, SCB>::T& peripheral_t<STM32G441xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G471xx, SCB>::T& peripheral_t<STM32G471xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G473xx, SCB>::T& peripheral_t<STM32G473xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G474xx, SCB>::T& peripheral_t<STM32G474xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G483xx, SCB>::T& peripheral_t<STM32G483xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G484xx, SCB>::T& peripheral_t<STM32G484xx, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SCB>::T*>(0xe000e040);

typename peripheral_t<STM32G431xx, SCB_ACTRL>::T& peripheral_t<STM32G431xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G441xx, SCB_ACTRL>::T& peripheral_t<STM32G441xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G471xx, SCB_ACTRL>::T& peripheral_t<STM32G471xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G473xx, SCB_ACTRL>::T& peripheral_t<STM32G473xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G474xx, SCB_ACTRL>::T& peripheral_t<STM32G474xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G483xx, SCB_ACTRL>::T& peripheral_t<STM32G483xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G484xx, SCB_ACTRL>::T& peripheral_t<STM32G484xx, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G431xx, SPI1>::T& peripheral_t<STM32G431xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G431xx, SPI3>::T& peripheral_t<STM32G431xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G431xx, SPI2>::T& peripheral_t<STM32G431xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G441xx, SPI1>::T& peripheral_t<STM32G441xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G441xx, SPI3>::T& peripheral_t<STM32G441xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G441xx, SPI2>::T& peripheral_t<STM32G441xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G471xx, SPI1>::T& peripheral_t<STM32G471xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G473xx, SPI1>::T& peripheral_t<STM32G473xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G474xx, SPI1>::T& peripheral_t<STM32G474xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G483xx, SPI1>::T& peripheral_t<STM32G483xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G484xx, SPI1>::T& peripheral_t<STM32G484xx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G471xx, SPI4>::T& peripheral_t<STM32G471xx, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32G471xx, SPI3>::T& peripheral_t<STM32G471xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G471xx, SPI2>::T& peripheral_t<STM32G471xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G473xx, SPI4>::T& peripheral_t<STM32G473xx, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32G473xx, SPI3>::T& peripheral_t<STM32G473xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G473xx, SPI2>::T& peripheral_t<STM32G473xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G474xx, SPI4>::T& peripheral_t<STM32G474xx, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32G474xx, SPI3>::T& peripheral_t<STM32G474xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G474xx, SPI2>::T& peripheral_t<STM32G474xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G483xx, SPI4>::T& peripheral_t<STM32G483xx, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32G483xx, SPI3>::T& peripheral_t<STM32G483xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G483xx, SPI2>::T& peripheral_t<STM32G483xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G484xx, SPI4>::T& peripheral_t<STM32G484xx, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32G484xx, SPI3>::T& peripheral_t<STM32G484xx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32G484xx, SPI2>::T& peripheral_t<STM32G484xx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G431xx, STK>::T& peripheral_t<STM32G431xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G441xx, STK>::T& peripheral_t<STM32G441xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G471xx, STK>::T& peripheral_t<STM32G471xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G473xx, STK>::T& peripheral_t<STM32G473xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G474xx, STK>::T& peripheral_t<STM32G474xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G483xx, STK>::T& peripheral_t<STM32G483xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G484xx, STK>::T& peripheral_t<STM32G484xx, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G431xx, SYSCFG>::T& peripheral_t<STM32G431xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G441xx, SYSCFG>::T& peripheral_t<STM32G441xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G471xx, SYSCFG>::T& peripheral_t<STM32G471xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G473xx, SYSCFG>::T& peripheral_t<STM32G473xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G474xx, SYSCFG>::T& peripheral_t<STM32G474xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G483xx, SYSCFG>::T& peripheral_t<STM32G483xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G484xx, SYSCFG>::T& peripheral_t<STM32G484xx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G431xx, TAMP>::T& peripheral_t<STM32G431xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G441xx, TAMP>::T& peripheral_t<STM32G441xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G471xx, TAMP>::T& peripheral_t<STM32G471xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G473xx, TAMP>::T& peripheral_t<STM32G473xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G474xx, TAMP>::T& peripheral_t<STM32G474xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G483xx, TAMP>::T& peripheral_t<STM32G483xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G484xx, TAMP>::T& peripheral_t<STM32G484xx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TAMP>::T*>(0x40002400);

typename peripheral_t<STM32G431xx, TIM15>::T& peripheral_t<STM32G431xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G441xx, TIM15>::T& peripheral_t<STM32G441xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G471xx, TIM15>::T& peripheral_t<STM32G471xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G473xx, TIM15>::T& peripheral_t<STM32G473xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G474xx, TIM15>::T& peripheral_t<STM32G474xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G483xx, TIM15>::T& peripheral_t<STM32G483xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G484xx, TIM15>::T& peripheral_t<STM32G484xx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G431xx, TIM16>::T& peripheral_t<STM32G431xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G431xx, TIM17>::T& peripheral_t<STM32G431xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G441xx, TIM16>::T& peripheral_t<STM32G441xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G441xx, TIM17>::T& peripheral_t<STM32G441xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G471xx, TIM16>::T& peripheral_t<STM32G471xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G471xx, TIM17>::T& peripheral_t<STM32G471xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G473xx, TIM16>::T& peripheral_t<STM32G473xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G473xx, TIM17>::T& peripheral_t<STM32G473xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G474xx, TIM16>::T& peripheral_t<STM32G474xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G474xx, TIM17>::T& peripheral_t<STM32G474xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G483xx, TIM16>::T& peripheral_t<STM32G483xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G483xx, TIM17>::T& peripheral_t<STM32G483xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G484xx, TIM16>::T& peripheral_t<STM32G484xx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G484xx, TIM17>::T& peripheral_t<STM32G484xx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G431xx, TIM1>::T& peripheral_t<STM32G431xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G431xx, TIM8>::T& peripheral_t<STM32G431xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G441xx, TIM1>::T& peripheral_t<STM32G441xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G441xx, TIM8>::T& peripheral_t<STM32G441xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G471xx, TIM1>::T& peripheral_t<STM32G471xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G471xx, TIM8>::T& peripheral_t<STM32G471xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G473xx, TIM1>::T& peripheral_t<STM32G473xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G473xx, TIM20>::T& peripheral_t<STM32G473xx, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32G473xx, TIM8>::T& peripheral_t<STM32G473xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G474xx, TIM1>::T& peripheral_t<STM32G474xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G474xx, TIM20>::T& peripheral_t<STM32G474xx, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32G474xx, TIM8>::T& peripheral_t<STM32G474xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G483xx, TIM1>::T& peripheral_t<STM32G483xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G483xx, TIM20>::T& peripheral_t<STM32G483xx, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32G483xx, TIM8>::T& peripheral_t<STM32G483xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G484xx, TIM1>::T& peripheral_t<STM32G484xx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G484xx, TIM20>::T& peripheral_t<STM32G484xx, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32G484xx, TIM8>::T& peripheral_t<STM32G484xx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32G431xx, TIM2>::T& peripheral_t<STM32G431xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G431xx, TIM3>::T& peripheral_t<STM32G431xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G431xx, TIM4>::T& peripheral_t<STM32G431xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G441xx, TIM2>::T& peripheral_t<STM32G441xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G441xx, TIM3>::T& peripheral_t<STM32G441xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G441xx, TIM4>::T& peripheral_t<STM32G441xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G471xx, TIM2>::T& peripheral_t<STM32G471xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G471xx, TIM3>::T& peripheral_t<STM32G471xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G471xx, TIM4>::T& peripheral_t<STM32G471xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G471xx, TIM5>::T& peripheral_t<STM32G471xx, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32G473xx, TIM2>::T& peripheral_t<STM32G473xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G473xx, TIM3>::T& peripheral_t<STM32G473xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G473xx, TIM4>::T& peripheral_t<STM32G473xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G473xx, TIM5>::T& peripheral_t<STM32G473xx, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32G474xx, TIM2>::T& peripheral_t<STM32G474xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G474xx, TIM3>::T& peripheral_t<STM32G474xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G474xx, TIM4>::T& peripheral_t<STM32G474xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G474xx, TIM5>::T& peripheral_t<STM32G474xx, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32G483xx, TIM2>::T& peripheral_t<STM32G483xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G483xx, TIM3>::T& peripheral_t<STM32G483xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G483xx, TIM4>::T& peripheral_t<STM32G483xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G483xx, TIM5>::T& peripheral_t<STM32G483xx, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32G484xx, TIM2>::T& peripheral_t<STM32G484xx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G484xx, TIM3>::T& peripheral_t<STM32G484xx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G484xx, TIM4>::T& peripheral_t<STM32G484xx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32G484xx, TIM5>::T& peripheral_t<STM32G484xx, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32G431xx, TIM6>::T& peripheral_t<STM32G431xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G431xx, TIM7>::T& peripheral_t<STM32G431xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G441xx, TIM6>::T& peripheral_t<STM32G441xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G441xx, TIM7>::T& peripheral_t<STM32G441xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G471xx, TIM6>::T& peripheral_t<STM32G471xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G471xx, TIM7>::T& peripheral_t<STM32G471xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G473xx, TIM6>::T& peripheral_t<STM32G473xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G473xx, TIM7>::T& peripheral_t<STM32G473xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G474xx, TIM6>::T& peripheral_t<STM32G474xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G474xx, TIM7>::T& peripheral_t<STM32G474xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G483xx, TIM6>::T& peripheral_t<STM32G483xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G483xx, TIM7>::T& peripheral_t<STM32G483xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G484xx, TIM6>::T& peripheral_t<STM32G484xx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G484xx, TIM7>::T& peripheral_t<STM32G484xx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G431xx, UCPD1>::T& peripheral_t<STM32G431xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G441xx, UCPD1>::T& peripheral_t<STM32G441xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G471xx, UCPD1>::T& peripheral_t<STM32G471xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G473xx, UCPD1>::T& peripheral_t<STM32G473xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G474xx, UCPD1>::T& peripheral_t<STM32G474xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G483xx, UCPD1>::T& peripheral_t<STM32G483xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G484xx, UCPD1>::T& peripheral_t<STM32G484xx, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G431xx, USART1>::T& peripheral_t<STM32G431xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G431xx, USART2>::T& peripheral_t<STM32G431xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G431xx, USART3>::T& peripheral_t<STM32G431xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G441xx, USART1>::T& peripheral_t<STM32G441xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G441xx, USART2>::T& peripheral_t<STM32G441xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G441xx, USART3>::T& peripheral_t<STM32G441xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G471xx, USART1>::T& peripheral_t<STM32G471xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G471xx, USART2>::T& peripheral_t<STM32G471xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G471xx, USART3>::T& peripheral_t<STM32G471xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G473xx, USART1>::T& peripheral_t<STM32G473xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G473xx, USART2>::T& peripheral_t<STM32G473xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G473xx, USART3>::T& peripheral_t<STM32G473xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G474xx, USART1>::T& peripheral_t<STM32G474xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G474xx, USART2>::T& peripheral_t<STM32G474xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G474xx, USART3>::T& peripheral_t<STM32G474xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G483xx, USART1>::T& peripheral_t<STM32G483xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G483xx, USART2>::T& peripheral_t<STM32G483xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G483xx, USART3>::T& peripheral_t<STM32G483xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G484xx, USART1>::T& peripheral_t<STM32G484xx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G484xx, USART2>::T& peripheral_t<STM32G484xx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G484xx, USART3>::T& peripheral_t<STM32G484xx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G431xx, UART4>::T& peripheral_t<STM32G431xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G441xx, UART4>::T& peripheral_t<STM32G441xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G471xx, UART4>::T& peripheral_t<STM32G471xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G471xx, UART5>::T& peripheral_t<STM32G471xx, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, UART5>::T*>(0x40005000);

typename peripheral_t<STM32G473xx, UART4>::T& peripheral_t<STM32G473xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G473xx, UART5>::T& peripheral_t<STM32G473xx, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, UART5>::T*>(0x40005000);

typename peripheral_t<STM32G474xx, UART4>::T& peripheral_t<STM32G474xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G474xx, UART5>::T& peripheral_t<STM32G474xx, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, UART5>::T*>(0x40005000);

typename peripheral_t<STM32G483xx, UART4>::T& peripheral_t<STM32G483xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G483xx, UART5>::T& peripheral_t<STM32G483xx, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, UART5>::T*>(0x40005000);

typename peripheral_t<STM32G484xx, UART4>::T& peripheral_t<STM32G484xx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32G484xx, UART5>::T& peripheral_t<STM32G484xx, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, UART5>::T*>(0x40005000);

typename peripheral_t<STM32G431xx, LPUART1>::T& peripheral_t<STM32G431xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G441xx, LPUART1>::T& peripheral_t<STM32G441xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G471xx, LPUART1>::T& peripheral_t<STM32G471xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G473xx, LPUART1>::T& peripheral_t<STM32G473xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G474xx, LPUART1>::T& peripheral_t<STM32G474xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G483xx, LPUART1>::T& peripheral_t<STM32G483xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G484xx, LPUART1>::T& peripheral_t<STM32G484xx, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G431xx, USB_FS_DEVICE>::T& peripheral_t<STM32G431xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G441xx, USB_FS_DEVICE>::T& peripheral_t<STM32G441xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G471xx, USB_FS_DEVICE>::T& peripheral_t<STM32G471xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G473xx, USB_FS_DEVICE>::T& peripheral_t<STM32G473xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G474xx, USB_FS_DEVICE>::T& peripheral_t<STM32G474xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G483xx, USB_FS_DEVICE>::T& peripheral_t<STM32G483xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G484xx, USB_FS_DEVICE>::T& peripheral_t<STM32G484xx, USB_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, USB_FS_DEVICE>::T*>(0x40005c00);

typename peripheral_t<STM32G431xx, VREFBUF>::T& peripheral_t<STM32G431xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G441xx, VREFBUF>::T& peripheral_t<STM32G441xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G471xx, VREFBUF>::T& peripheral_t<STM32G471xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G473xx, VREFBUF>::T& peripheral_t<STM32G473xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G474xx, VREFBUF>::T& peripheral_t<STM32G474xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G483xx, VREFBUF>::T& peripheral_t<STM32G483xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G484xx, VREFBUF>::T& peripheral_t<STM32G484xx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G431xx, WWDG>::T& peripheral_t<STM32G431xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G431xx, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G441xx, WWDG>::T& peripheral_t<STM32G441xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G441xx, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G471xx, WWDG>::T& peripheral_t<STM32G471xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G471xx, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G473xx, WWDG>::T& peripheral_t<STM32G473xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G473xx, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G474xx, WWDG>::T& peripheral_t<STM32G474xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G474xx, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G483xx, WWDG>::T& peripheral_t<STM32G483xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G483xx, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G484xx, WWDG>::T& peripheral_t<STM32G484xx, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G484xx, WWDG>::T*>(0x40002c00);

