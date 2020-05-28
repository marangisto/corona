#pragma once

////
//
//      STM32F1 peripherals
//
////

typename peripheral_t<STM32F100, ADC1>::T& peripheral_t<STM32F100, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, ADC1>::T*>(0x40012400);

typename peripheral_t<STM32F102, ADC2>::T& peripheral_t<STM32F102, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, ADC2>::T*>(0x40012800);

typename peripheral_t<STM32F103, ADC2>::T& peripheral_t<STM32F103, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ADC2>::T*>(0x40012800);

typename peripheral_t<STM32F103, ADC3>::T& peripheral_t<STM32F103, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ADC3>::T*>(0x40013c00);

typename peripheral_t<STM32F107, ADC2>::T& peripheral_t<STM32F107, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ADC2>::T*>(0x40012800);

typename peripheral_t<STM32F101, ADC1>::T& peripheral_t<STM32F101, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ADC1>::T*>(0x40012400);

typename peripheral_t<STM32F101, ADC2>::T& peripheral_t<STM32F101, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ADC2>::T*>(0x40012800);

typename peripheral_t<STM32F101, ADC3>::T& peripheral_t<STM32F101, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ADC3>::T*>(0x40013c00);

typename peripheral_t<STM32F102, ADC1>::T& peripheral_t<STM32F102, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, ADC1>::T*>(0x40012400);

typename peripheral_t<STM32F102, ADC3>::T& peripheral_t<STM32F102, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, ADC3>::T*>(0x40013c00);

typename peripheral_t<STM32F107, ADC3>::T& peripheral_t<STM32F107, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ADC3>::T*>(0x40013c00);

typename peripheral_t<STM32F103, ADC1>::T& peripheral_t<STM32F103, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ADC1>::T*>(0x40012400);

typename peripheral_t<STM32F107, ADC1>::T& peripheral_t<STM32F107, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ADC1>::T*>(0x40012400);

typename peripheral_t<STM32F100, AFIO>::T& peripheral_t<STM32F100, AFIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, AFIO>::T*>(0x40010000);

typename peripheral_t<STM32F101, AFIO>::T& peripheral_t<STM32F101, AFIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, AFIO>::T*>(0x40010000);

typename peripheral_t<STM32F102, AFIO>::T& peripheral_t<STM32F102, AFIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, AFIO>::T*>(0x40010000);

typename peripheral_t<STM32F103, AFIO>::T& peripheral_t<STM32F103, AFIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, AFIO>::T*>(0x40010000);

typename peripheral_t<STM32F107, AFIO>::T& peripheral_t<STM32F107, AFIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, AFIO>::T*>(0x40010000);

typename peripheral_t<STM32F100, BKP>::T& peripheral_t<STM32F100, BKP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, BKP>::T*>(0x40006c04);

typename peripheral_t<STM32F101, BKP>::T& peripheral_t<STM32F101, BKP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, BKP>::T*>(0x40006c00);

typename peripheral_t<STM32F102, BKP>::T& peripheral_t<STM32F102, BKP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, BKP>::T*>(0x40006c00);

typename peripheral_t<STM32F103, BKP>::T& peripheral_t<STM32F103, BKP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, BKP>::T*>(0x40006c00);

typename peripheral_t<STM32F107, BKP>::T& peripheral_t<STM32F107, BKP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, BKP>::T*>(0x40006c00);

typename peripheral_t<STM32F101, CAN1>::T& peripheral_t<STM32F101, CAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, CAN1>::T*>(0x40006400);

typename peripheral_t<STM32F101, CAN2>::T& peripheral_t<STM32F101, CAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, CAN2>::T*>(0x40006800);

typename peripheral_t<STM32F102, CAN1>::T& peripheral_t<STM32F102, CAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, CAN1>::T*>(0x40006400);

typename peripheral_t<STM32F102, CAN2>::T& peripheral_t<STM32F102, CAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, CAN2>::T*>(0x40006800);

typename peripheral_t<STM32F103, CAN1>::T& peripheral_t<STM32F103, CAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, CAN1>::T*>(0x40006400);

typename peripheral_t<STM32F103, CAN2>::T& peripheral_t<STM32F103, CAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, CAN2>::T*>(0x40006800);

typename peripheral_t<STM32F107, CAN2>::T& peripheral_t<STM32F107, CAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, CAN2>::T*>(0x40006800);

typename peripheral_t<STM32F107, CAN1>::T& peripheral_t<STM32F107, CAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, CAN1>::T*>(0x40006400);

typename peripheral_t<STM32F100, HDMI_CEC>::T& peripheral_t<STM32F100, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, HDMI_CEC>::T*>(0x40007800);

typename peripheral_t<STM32F100, CRC>::T& peripheral_t<STM32F100, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F101, CRC>::T& peripheral_t<STM32F101, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F102, CRC>::T& peripheral_t<STM32F102, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F103, CRC>::T& peripheral_t<STM32F103, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F107, CRC>::T& peripheral_t<STM32F107, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F100, DAC1>::T& peripheral_t<STM32F100, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F102, DAC1>::T& peripheral_t<STM32F102, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F101, DAC1>::T& peripheral_t<STM32F101, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F103, DAC1>::T& peripheral_t<STM32F103, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F107, DAC1>::T& peripheral_t<STM32F107, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F100, DBG>::T& peripheral_t<STM32F100, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F101, DBG>::T& peripheral_t<STM32F101, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F102, DBG>::T& peripheral_t<STM32F102, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F103, DBG>::T& peripheral_t<STM32F103, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F107, DBG>::T& peripheral_t<STM32F107, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F100, DMA1>::T& peripheral_t<STM32F100, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F100, DMA2>::T& peripheral_t<STM32F100, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F101, DMA1>::T& peripheral_t<STM32F101, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F101, DMA2>::T& peripheral_t<STM32F101, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F102, DMA1>::T& peripheral_t<STM32F102, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F102, DMA2>::T& peripheral_t<STM32F102, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F103, DMA1>::T& peripheral_t<STM32F103, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F103, DMA2>::T& peripheral_t<STM32F103, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F107, DMA1>::T& peripheral_t<STM32F107, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F107, DMA2>::T& peripheral_t<STM32F107, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F101, ETHERNET_MMC>::T& peripheral_t<STM32F101, ETHERNET_MMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ETHERNET_MMC>::T*>(0x40028100);

typename peripheral_t<STM32F103, ETHERNET_MMC>::T& peripheral_t<STM32F103, ETHERNET_MMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ETHERNET_MMC>::T*>(0x40028100);

typename peripheral_t<STM32F107, ETHERNET_MMC>::T& peripheral_t<STM32F107, ETHERNET_MMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ETHERNET_MMC>::T*>(0x40028100);

typename peripheral_t<STM32F101, ETHERNET_MAC>::T& peripheral_t<STM32F101, ETHERNET_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ETHERNET_MAC>::T*>(0x40028000);

typename peripheral_t<STM32F103, ETHERNET_MAC>::T& peripheral_t<STM32F103, ETHERNET_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ETHERNET_MAC>::T*>(0x40028000);

typename peripheral_t<STM32F107, ETHERNET_MAC>::T& peripheral_t<STM32F107, ETHERNET_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ETHERNET_MAC>::T*>(0x40028000);

typename peripheral_t<STM32F101, ETHERNET_PTP>::T& peripheral_t<STM32F101, ETHERNET_PTP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ETHERNET_PTP>::T*>(0x40028700);

typename peripheral_t<STM32F103, ETHERNET_PTP>::T& peripheral_t<STM32F103, ETHERNET_PTP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ETHERNET_PTP>::T*>(0x40028700);

typename peripheral_t<STM32F107, ETHERNET_PTP>::T& peripheral_t<STM32F107, ETHERNET_PTP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ETHERNET_PTP>::T*>(0x40028700);

typename peripheral_t<STM32F101, ETHERNET_DMA>::T& peripheral_t<STM32F101, ETHERNET_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, ETHERNET_DMA>::T*>(0x40029000);

typename peripheral_t<STM32F103, ETHERNET_DMA>::T& peripheral_t<STM32F103, ETHERNET_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, ETHERNET_DMA>::T*>(0x40029000);

typename peripheral_t<STM32F107, ETHERNET_DMA>::T& peripheral_t<STM32F107, ETHERNET_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, ETHERNET_DMA>::T*>(0x40029000);

typename peripheral_t<STM32F100, EXTI>::T& peripheral_t<STM32F100, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F101, EXTI>::T& peripheral_t<STM32F101, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F102, EXTI>::T& peripheral_t<STM32F102, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F103, EXTI>::T& peripheral_t<STM32F103, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F107, EXTI>::T& peripheral_t<STM32F107, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F100, FLASH>::T& peripheral_t<STM32F100, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32F101, FLASH>::T& peripheral_t<STM32F101, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32F102, FLASH>::T& peripheral_t<STM32F102, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32F103, FLASH>::T& peripheral_t<STM32F103, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32F107, FLASH>::T& peripheral_t<STM32F107, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32F100, FSMC>::T& peripheral_t<STM32F100, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F102, FSMC>::T& peripheral_t<STM32F102, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F101, FSMC>::T& peripheral_t<STM32F101, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F103, FSMC>::T& peripheral_t<STM32F103, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F107, FSMC>::T& peripheral_t<STM32F107, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F100, GPIOA>::T& peripheral_t<STM32F100, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOA>::T*>(0x40010800);

typename peripheral_t<STM32F100, GPIOB>::T& peripheral_t<STM32F100, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOB>::T*>(0x40010c00);

typename peripheral_t<STM32F100, GPIOC>::T& peripheral_t<STM32F100, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOC>::T*>(0x40011000);

typename peripheral_t<STM32F100, GPIOD>::T& peripheral_t<STM32F100, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOD>::T*>(0x40011400);

typename peripheral_t<STM32F100, GPIOE>::T& peripheral_t<STM32F100, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOE>::T*>(0x40011800);

typename peripheral_t<STM32F100, GPIOF>::T& peripheral_t<STM32F100, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOF>::T*>(0x40011c00);

typename peripheral_t<STM32F100, GPIOG>::T& peripheral_t<STM32F100, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, GPIOG>::T*>(0x40012000);

typename peripheral_t<STM32F101, GPIOA>::T& peripheral_t<STM32F101, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOA>::T*>(0x40010800);

typename peripheral_t<STM32F101, GPIOB>::T& peripheral_t<STM32F101, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOB>::T*>(0x40010c00);

typename peripheral_t<STM32F101, GPIOC>::T& peripheral_t<STM32F101, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOC>::T*>(0x40011000);

typename peripheral_t<STM32F101, GPIOD>::T& peripheral_t<STM32F101, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOD>::T*>(0x40011400);

typename peripheral_t<STM32F101, GPIOE>::T& peripheral_t<STM32F101, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOE>::T*>(0x40011800);

typename peripheral_t<STM32F101, GPIOF>::T& peripheral_t<STM32F101, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOF>::T*>(0x40011c00);

typename peripheral_t<STM32F101, GPIOG>::T& peripheral_t<STM32F101, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, GPIOG>::T*>(0x40012000);

typename peripheral_t<STM32F102, GPIOA>::T& peripheral_t<STM32F102, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOA>::T*>(0x40010800);

typename peripheral_t<STM32F102, GPIOB>::T& peripheral_t<STM32F102, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOB>::T*>(0x40010c00);

typename peripheral_t<STM32F102, GPIOC>::T& peripheral_t<STM32F102, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOC>::T*>(0x40011000);

typename peripheral_t<STM32F102, GPIOD>::T& peripheral_t<STM32F102, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOD>::T*>(0x40011400);

typename peripheral_t<STM32F102, GPIOE>::T& peripheral_t<STM32F102, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOE>::T*>(0x40011800);

typename peripheral_t<STM32F102, GPIOF>::T& peripheral_t<STM32F102, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOF>::T*>(0x40011c00);

typename peripheral_t<STM32F102, GPIOG>::T& peripheral_t<STM32F102, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, GPIOG>::T*>(0x40012000);

typename peripheral_t<STM32F103, GPIOA>::T& peripheral_t<STM32F103, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOA>::T*>(0x40010800);

typename peripheral_t<STM32F103, GPIOB>::T& peripheral_t<STM32F103, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOB>::T*>(0x40010c00);

typename peripheral_t<STM32F103, GPIOC>::T& peripheral_t<STM32F103, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOC>::T*>(0x40011000);

typename peripheral_t<STM32F103, GPIOD>::T& peripheral_t<STM32F103, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOD>::T*>(0x40011400);

typename peripheral_t<STM32F103, GPIOE>::T& peripheral_t<STM32F103, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOE>::T*>(0x40011800);

typename peripheral_t<STM32F103, GPIOF>::T& peripheral_t<STM32F103, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOF>::T*>(0x40011c00);

typename peripheral_t<STM32F103, GPIOG>::T& peripheral_t<STM32F103, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, GPIOG>::T*>(0x40012000);

typename peripheral_t<STM32F107, GPIOA>::T& peripheral_t<STM32F107, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOA>::T*>(0x40010800);

typename peripheral_t<STM32F107, GPIOB>::T& peripheral_t<STM32F107, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOB>::T*>(0x40010c00);

typename peripheral_t<STM32F107, GPIOC>::T& peripheral_t<STM32F107, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOC>::T*>(0x40011000);

typename peripheral_t<STM32F107, GPIOD>::T& peripheral_t<STM32F107, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOD>::T*>(0x40011400);

typename peripheral_t<STM32F107, GPIOE>::T& peripheral_t<STM32F107, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOE>::T*>(0x40011800);

typename peripheral_t<STM32F107, GPIOF>::T& peripheral_t<STM32F107, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOF>::T*>(0x40011c00);

typename peripheral_t<STM32F107, GPIOG>::T& peripheral_t<STM32F107, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, GPIOG>::T*>(0x40012000);

typename peripheral_t<STM32F100, I2C1>::T& peripheral_t<STM32F100, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F100, I2C2>::T& peripheral_t<STM32F100, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F101, I2C1>::T& peripheral_t<STM32F101, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F101, I2C2>::T& peripheral_t<STM32F101, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F102, I2C1>::T& peripheral_t<STM32F102, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F102, I2C2>::T& peripheral_t<STM32F102, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F103, I2C1>::T& peripheral_t<STM32F103, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F103, I2C2>::T& peripheral_t<STM32F103, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F107, I2C1>::T& peripheral_t<STM32F107, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F107, I2C2>::T& peripheral_t<STM32F107, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F100, IWDG>::T& peripheral_t<STM32F100, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F101, IWDG>::T& peripheral_t<STM32F101, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F102, IWDG>::T& peripheral_t<STM32F102, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F103, IWDG>::T& peripheral_t<STM32F103, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F107, IWDG>::T& peripheral_t<STM32F107, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F100, MPU>::T& peripheral_t<STM32F100, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F101, MPU>::T& peripheral_t<STM32F101, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F102, MPU>::T& peripheral_t<STM32F102, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F103, MPU>::T& peripheral_t<STM32F103, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F107, MPU>::T& peripheral_t<STM32F107, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F100, NVIC>::T& peripheral_t<STM32F100, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F101, NVIC>::T& peripheral_t<STM32F101, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F102, NVIC>::T& peripheral_t<STM32F102, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F103, NVIC>::T& peripheral_t<STM32F103, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F107, NVIC>::T& peripheral_t<STM32F107, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F100, NVIC_STIR>::T& peripheral_t<STM32F100, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F101, NVIC_STIR>::T& peripheral_t<STM32F101, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F102, NVIC_STIR>::T& peripheral_t<STM32F102, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F103, NVIC_STIR>::T& peripheral_t<STM32F103, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F107, NVIC_STIR>::T& peripheral_t<STM32F107, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F100, PWR>::T& peripheral_t<STM32F100, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F101, PWR>::T& peripheral_t<STM32F101, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F102, PWR>::T& peripheral_t<STM32F102, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F103, PWR>::T& peripheral_t<STM32F103, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F107, PWR>::T& peripheral_t<STM32F107, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F100, RCC>::T& peripheral_t<STM32F100, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F101, RCC>::T& peripheral_t<STM32F101, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F102, RCC>::T& peripheral_t<STM32F102, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F103, RCC>::T& peripheral_t<STM32F103, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F107, RCC>::T& peripheral_t<STM32F107, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F100, RTC>::T& peripheral_t<STM32F100, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F101, RTC>::T& peripheral_t<STM32F101, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F102, RTC>::T& peripheral_t<STM32F102, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F103, RTC>::T& peripheral_t<STM32F103, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F107, RTC>::T& peripheral_t<STM32F107, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F100, SCB_ACTRL>::T& peripheral_t<STM32F100, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F101, SCB_ACTRL>::T& peripheral_t<STM32F101, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F102, SCB_ACTRL>::T& peripheral_t<STM32F102, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F103, SCB_ACTRL>::T& peripheral_t<STM32F103, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F107, SCB_ACTRL>::T& peripheral_t<STM32F107, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F100, SCB>::T& peripheral_t<STM32F100, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F101, SCB>::T& peripheral_t<STM32F101, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F102, SCB>::T& peripheral_t<STM32F102, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F103, SCB>::T& peripheral_t<STM32F103, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F107, SCB>::T& peripheral_t<STM32F107, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F101, SDIO>::T& peripheral_t<STM32F101, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, SDIO>::T*>(0x40018000);

typename peripheral_t<STM32F103, SDIO>::T& peripheral_t<STM32F103, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, SDIO>::T*>(0x40018000);

typename peripheral_t<STM32F102, SDIO>::T& peripheral_t<STM32F102, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, SDIO>::T*>(0x40018000);

typename peripheral_t<STM32F107, SDIO>::T& peripheral_t<STM32F107, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, SDIO>::T*>(0x40018000);

typename peripheral_t<STM32F100, SPI1>::T& peripheral_t<STM32F100, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F100, SPI2>::T& peripheral_t<STM32F100, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F100, SPI3>::T& peripheral_t<STM32F100, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F102, SPI2>::T& peripheral_t<STM32F102, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F102, SPI3>::T& peripheral_t<STM32F102, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F101, SPI1>::T& peripheral_t<STM32F101, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F101, SPI2>::T& peripheral_t<STM32F101, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F101, SPI3>::T& peripheral_t<STM32F101, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F102, SPI1>::T& peripheral_t<STM32F102, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F103, SPI1>::T& peripheral_t<STM32F103, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F103, SPI2>::T& peripheral_t<STM32F103, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F103, SPI3>::T& peripheral_t<STM32F103, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F107, SPI1>::T& peripheral_t<STM32F107, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F107, SPI2>::T& peripheral_t<STM32F107, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F107, SPI3>::T& peripheral_t<STM32F107, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F100, STK>::T& peripheral_t<STM32F100, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F101, STK>::T& peripheral_t<STM32F101, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F102, STK>::T& peripheral_t<STM32F102, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F103, STK>::T& peripheral_t<STM32F103, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F107, STK>::T& peripheral_t<STM32F107, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F100, TIM1>::T& peripheral_t<STM32F100, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F101, TIM1>::T& peripheral_t<STM32F101, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F101, TIM8>::T& peripheral_t<STM32F101, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F102, TIM8>::T& peripheral_t<STM32F102, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F102, TIM1>::T& peripheral_t<STM32F102, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F107, TIM8>::T& peripheral_t<STM32F107, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F100, TIM2>::T& peripheral_t<STM32F100, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F100, TIM3>::T& peripheral_t<STM32F100, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F100, TIM4>::T& peripheral_t<STM32F100, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F100, TIM5>::T& peripheral_t<STM32F100, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F102, TIM4>::T& peripheral_t<STM32F102, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F102, TIM5>::T& peripheral_t<STM32F102, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F100, TIM12>::T& peripheral_t<STM32F100, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F100, TIM13>::T& peripheral_t<STM32F100, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F100, TIM14>::T& peripheral_t<STM32F100, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F102, TIM13>::T& peripheral_t<STM32F102, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F102, TIM14>::T& peripheral_t<STM32F102, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F107, TIM13>::T& peripheral_t<STM32F107, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F107, TIM14>::T& peripheral_t<STM32F107, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F100, TIM6>::T& peripheral_t<STM32F100, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F100, TIM7>::T& peripheral_t<STM32F100, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F101, TIM6>::T& peripheral_t<STM32F101, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F101, TIM7>::T& peripheral_t<STM32F101, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F102, TIM6>::T& peripheral_t<STM32F102, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F102, TIM7>::T& peripheral_t<STM32F102, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F103, TIM6>::T& peripheral_t<STM32F103, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F103, TIM7>::T& peripheral_t<STM32F103, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F107, TIM6>::T& peripheral_t<STM32F107, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F107, TIM7>::T& peripheral_t<STM32F107, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F100, TIM15>::T& peripheral_t<STM32F100, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F100, TIM16>::T& peripheral_t<STM32F100, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F100, TIM17>::T& peripheral_t<STM32F100, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F101, TIM2>::T& peripheral_t<STM32F101, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F101, TIM3>::T& peripheral_t<STM32F101, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F101, TIM4>::T& peripheral_t<STM32F101, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F101, TIM5>::T& peripheral_t<STM32F101, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F102, TIM2>::T& peripheral_t<STM32F102, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F102, TIM3>::T& peripheral_t<STM32F102, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F103, TIM2>::T& peripheral_t<STM32F103, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F103, TIM3>::T& peripheral_t<STM32F103, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F103, TIM4>::T& peripheral_t<STM32F103, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F103, TIM5>::T& peripheral_t<STM32F103, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F101, TIM9>::T& peripheral_t<STM32F101, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM9>::T*>(0x40014c00);

typename peripheral_t<STM32F101, TIM12>::T& peripheral_t<STM32F101, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F102, TIM9>::T& peripheral_t<STM32F102, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM9>::T*>(0x40014c00);

typename peripheral_t<STM32F102, TIM12>::T& peripheral_t<STM32F102, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F103, TIM9>::T& peripheral_t<STM32F103, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM9>::T*>(0x40014c00);

typename peripheral_t<STM32F103, TIM12>::T& peripheral_t<STM32F103, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F107, TIM9>::T& peripheral_t<STM32F107, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM9>::T*>(0x40014c00);

typename peripheral_t<STM32F107, TIM12>::T& peripheral_t<STM32F107, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F101, TIM10>::T& peripheral_t<STM32F101, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM10>::T*>(0x40015000);

typename peripheral_t<STM32F101, TIM11>::T& peripheral_t<STM32F101, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM11>::T*>(0x40015400);

typename peripheral_t<STM32F101, TIM13>::T& peripheral_t<STM32F101, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F101, TIM14>::T& peripheral_t<STM32F101, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F102, TIM10>::T& peripheral_t<STM32F102, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM10>::T*>(0x40015000);

typename peripheral_t<STM32F102, TIM11>::T& peripheral_t<STM32F102, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, TIM11>::T*>(0x40015400);

typename peripheral_t<STM32F103, TIM10>::T& peripheral_t<STM32F103, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM10>::T*>(0x40015000);

typename peripheral_t<STM32F103, TIM11>::T& peripheral_t<STM32F103, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM11>::T*>(0x40015400);

typename peripheral_t<STM32F103, TIM13>::T& peripheral_t<STM32F103, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F103, TIM14>::T& peripheral_t<STM32F103, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F103, TIM1>::T& peripheral_t<STM32F103, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F103, TIM8>::T& peripheral_t<STM32F103, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F107, TIM1>::T& peripheral_t<STM32F107, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F107, TIM2>::T& peripheral_t<STM32F107, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F107, TIM3>::T& peripheral_t<STM32F107, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F107, TIM4>::T& peripheral_t<STM32F107, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F107, TIM5>::T& peripheral_t<STM32F107, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F107, TIM11>::T& peripheral_t<STM32F107, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM11>::T*>(0x40015400);

typename peripheral_t<STM32F107, TIM10>::T& peripheral_t<STM32F107, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, TIM10>::T*>(0x40015000);

typename peripheral_t<STM32F100, USART1>::T& peripheral_t<STM32F100, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F100, USART2>::T& peripheral_t<STM32F100, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F100, USART3>::T& peripheral_t<STM32F100, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F101, USART1>::T& peripheral_t<STM32F101, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F101, USART2>::T& peripheral_t<STM32F101, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F101, USART3>::T& peripheral_t<STM32F101, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F102, USART1>::T& peripheral_t<STM32F102, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F102, USART2>::T& peripheral_t<STM32F102, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F103, USART1>::T& peripheral_t<STM32F103, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F103, USART2>::T& peripheral_t<STM32F103, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F103, USART3>::T& peripheral_t<STM32F103, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F107, USART1>::T& peripheral_t<STM32F107, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F107, USART2>::T& peripheral_t<STM32F107, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F107, USART3>::T& peripheral_t<STM32F107, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F100, UART4>::T& peripheral_t<STM32F100, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F101, UART4>::T& peripheral_t<STM32F101, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F102, UART5>::T& peripheral_t<STM32F102, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F102, UART4>::T& peripheral_t<STM32F102, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F103, UART4>::T& peripheral_t<STM32F103, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F107, UART4>::T& peripheral_t<STM32F107, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F100, UART5>::T& peripheral_t<STM32F100, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F101, UART5>::T& peripheral_t<STM32F101, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F103, UART5>::T& peripheral_t<STM32F103, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F107, UART5>::T& peripheral_t<STM32F107, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F101, USB>::T& peripheral_t<STM32F101, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, USB>::T*>(0x40005c00);

typename peripheral_t<STM32F102, USB>::T& peripheral_t<STM32F102, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, USB>::T*>(0x40005c00);

typename peripheral_t<STM32F103, USB>::T& peripheral_t<STM32F103, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, USB>::T*>(0x40005c00);

typename peripheral_t<STM32F107, USB>::T& peripheral_t<STM32F107, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USB>::T*>(0x40005c00);

typename peripheral_t<STM32F107, USB_OTG_GLOBAL>::T& peripheral_t<STM32F107, USB_OTG_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USB_OTG_GLOBAL>::T*>(0x50000000);

typename peripheral_t<STM32F101, OTG_FS_DEVICE>::T& peripheral_t<STM32F101, OTG_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, OTG_FS_DEVICE>::T*>(0x50000800);

typename peripheral_t<STM32F102, OTG_FS_DEVICE>::T& peripheral_t<STM32F102, OTG_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, OTG_FS_DEVICE>::T*>(0x50000800);

typename peripheral_t<STM32F103, OTG_FS_DEVICE>::T& peripheral_t<STM32F103, OTG_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, OTG_FS_DEVICE>::T*>(0x50000800);

typename peripheral_t<STM32F107, USB_OTG_DEVICE>::T& peripheral_t<STM32F107, USB_OTG_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USB_OTG_DEVICE>::T*>(0x50000800);

typename peripheral_t<STM32F101, OTG_FS_GLOBAL>::T& peripheral_t<STM32F101, OTG_FS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, OTG_FS_GLOBAL>::T*>(0x50000000);

typename peripheral_t<STM32F102, OTG_FS_GLOBAL>::T& peripheral_t<STM32F102, OTG_FS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, OTG_FS_GLOBAL>::T*>(0x50000000);

typename peripheral_t<STM32F103, OTG_FS_GLOBAL>::T& peripheral_t<STM32F103, OTG_FS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, OTG_FS_GLOBAL>::T*>(0x50000000);

typename peripheral_t<STM32F101, OTG_FS_HOST>::T& peripheral_t<STM32F101, OTG_FS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, OTG_FS_HOST>::T*>(0x50000400);

typename peripheral_t<STM32F102, OTG_FS_HOST>::T& peripheral_t<STM32F102, OTG_FS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, OTG_FS_HOST>::T*>(0x50000400);

typename peripheral_t<STM32F103, OTG_FS_HOST>::T& peripheral_t<STM32F103, OTG_FS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, OTG_FS_HOST>::T*>(0x50000400);

typename peripheral_t<STM32F107, USB_OTG_HOST>::T& peripheral_t<STM32F107, USB_OTG_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USB_OTG_HOST>::T*>(0x50000400);

typename peripheral_t<STM32F101, OTG_FS_PWRCLK>::T& peripheral_t<STM32F101, OTG_FS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, OTG_FS_PWRCLK>::T*>(0x50000e00);

typename peripheral_t<STM32F102, OTG_FS_PWRCLK>::T& peripheral_t<STM32F102, OTG_FS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, OTG_FS_PWRCLK>::T*>(0x50000e00);

typename peripheral_t<STM32F103, OTG_FS_PWRCLK>::T& peripheral_t<STM32F103, OTG_FS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, OTG_FS_PWRCLK>::T*>(0x50000e00);

typename peripheral_t<STM32F107, USB_OTG_PWRCLK>::T& peripheral_t<STM32F107, USB_OTG_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, USB_OTG_PWRCLK>::T*>(0x50000e00);

typename peripheral_t<STM32F100, WWDG>::T& peripheral_t<STM32F100, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F100, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F101, WWDG>::T& peripheral_t<STM32F101, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F101, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F102, WWDG>::T& peripheral_t<STM32F102, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F102, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F103, WWDG>::T& peripheral_t<STM32F103, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F103, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F107, WWDG>::T& peripheral_t<STM32F107, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F107, WWDG>::T*>(0x40002c00);

