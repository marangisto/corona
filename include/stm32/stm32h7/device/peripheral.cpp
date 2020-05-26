#pragma once

////
//
//      STM32H7 peripherals
//
////

typename peripheral_t<STM32H742x, AC>::T& peripheral_t<STM32H742x, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H743, AC>::T& peripheral_t<STM32H743, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H745_CM4, AC>::T& peripheral_t<STM32H745_CM4, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H745_CM7, AC>::T& peripheral_t<STM32H745_CM7, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H747_CM4, AC>::T& peripheral_t<STM32H747_CM4, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H747_CM7, AC>::T& peripheral_t<STM32H747_CM7, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H750x, AC>::T& peripheral_t<STM32H750x, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H753, AC>::T& peripheral_t<STM32H753, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H755_CM4, AC>::T& peripheral_t<STM32H755_CM4, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H755_CM7, AC>::T& peripheral_t<STM32H755_CM7, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H757_CM4, AC>::T& peripheral_t<STM32H757_CM4, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H757_CM7, AC>::T& peripheral_t<STM32H757_CM7, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H7A3x, AC>::T& peripheral_t<STM32H7A3x, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H7B0x, AC>::T& peripheral_t<STM32H7B0x, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H7B3x, AC>::T& peripheral_t<STM32H7B3x, AC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, AC>::T*>(0xe000ef90);

typename peripheral_t<STM32H742x, ADC3>::T& peripheral_t<STM32H742x, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H742x, ADC1>::T& peripheral_t<STM32H742x, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H742x, ADC2>::T& peripheral_t<STM32H742x, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H743, ADC3>::T& peripheral_t<STM32H743, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H743, ADC1>::T& peripheral_t<STM32H743, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H743, ADC2>::T& peripheral_t<STM32H743, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H753, ADC3>::T& peripheral_t<STM32H753, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H753, ADC1>::T& peripheral_t<STM32H753, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H753, ADC2>::T& peripheral_t<STM32H753, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H742x, ADC3_Common>::T& peripheral_t<STM32H742x, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H742x, ADC12_Common>::T& peripheral_t<STM32H742x, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H743, ADC3_Common>::T& peripheral_t<STM32H743, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H743, ADC12_Common>::T& peripheral_t<STM32H743, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H745_CM4, ADC3_Common>::T& peripheral_t<STM32H745_CM4, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H745_CM4, ADC12_Common>::T& peripheral_t<STM32H745_CM4, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H745_CM7, ADC3_Common>::T& peripheral_t<STM32H745_CM7, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H745_CM7, ADC12_Common>::T& peripheral_t<STM32H745_CM7, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H747_CM4, ADC3_Common>::T& peripheral_t<STM32H747_CM4, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H747_CM4, ADC12_Common>::T& peripheral_t<STM32H747_CM4, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H747_CM7, ADC3_Common>::T& peripheral_t<STM32H747_CM7, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H747_CM7, ADC12_Common>::T& peripheral_t<STM32H747_CM7, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H753, ADC3_Common>::T& peripheral_t<STM32H753, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H753, ADC12_Common>::T& peripheral_t<STM32H753, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H755_CM4, ADC3_Common>::T& peripheral_t<STM32H755_CM4, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H755_CM4, ADC12_Common>::T& peripheral_t<STM32H755_CM4, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H755_CM7, ADC3_Common>::T& peripheral_t<STM32H755_CM7, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H755_CM7, ADC12_Common>::T& peripheral_t<STM32H755_CM7, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H757_CM4, ADC3_Common>::T& peripheral_t<STM32H757_CM4, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H757_CM4, ADC12_Common>::T& peripheral_t<STM32H757_CM4, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H757_CM7, ADC3_Common>::T& peripheral_t<STM32H757_CM7, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H757_CM7, ADC12_Common>::T& peripheral_t<STM32H757_CM7, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H745_CM4, ADC3>::T& peripheral_t<STM32H745_CM4, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H745_CM4, ADC1>::T& peripheral_t<STM32H745_CM4, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H745_CM4, ADC2>::T& peripheral_t<STM32H745_CM4, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H745_CM7, ADC3>::T& peripheral_t<STM32H745_CM7, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H745_CM7, ADC1>::T& peripheral_t<STM32H745_CM7, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H745_CM7, ADC2>::T& peripheral_t<STM32H745_CM7, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H747_CM4, ADC3>::T& peripheral_t<STM32H747_CM4, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H747_CM4, ADC1>::T& peripheral_t<STM32H747_CM4, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H747_CM4, ADC2>::T& peripheral_t<STM32H747_CM4, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H747_CM7, ADC3>::T& peripheral_t<STM32H747_CM7, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H747_CM7, ADC1>::T& peripheral_t<STM32H747_CM7, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H747_CM7, ADC2>::T& peripheral_t<STM32H747_CM7, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H755_CM4, ADC3>::T& peripheral_t<STM32H755_CM4, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H755_CM4, ADC1>::T& peripheral_t<STM32H755_CM4, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H755_CM4, ADC2>::T& peripheral_t<STM32H755_CM4, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H755_CM7, ADC3>::T& peripheral_t<STM32H755_CM7, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H755_CM7, ADC1>::T& peripheral_t<STM32H755_CM7, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H755_CM7, ADC2>::T& peripheral_t<STM32H755_CM7, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H757_CM4, ADC3>::T& peripheral_t<STM32H757_CM4, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H757_CM4, ADC1>::T& peripheral_t<STM32H757_CM4, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H757_CM4, ADC2>::T& peripheral_t<STM32H757_CM4, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H757_CM7, ADC3>::T& peripheral_t<STM32H757_CM7, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H757_CM7, ADC1>::T& peripheral_t<STM32H757_CM7, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H757_CM7, ADC2>::T& peripheral_t<STM32H757_CM7, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H750x, ADC3>::T& peripheral_t<STM32H750x, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, ADC3>::T*>(0x58026000);

typename peripheral_t<STM32H750x, ADC1>::T& peripheral_t<STM32H750x, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H750x, ADC2>::T& peripheral_t<STM32H750x, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H750x, ADC3_Common>::T& peripheral_t<STM32H750x, ADC3_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, ADC3_Common>::T*>(0x58026300);

typename peripheral_t<STM32H750x, ADC12_Common>::T& peripheral_t<STM32H750x, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H7A3x, ADC12_Common>::T& peripheral_t<STM32H7A3x, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H7B0x, ADC12_Common>::T& peripheral_t<STM32H7B0x, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H7B3x, ADC12_Common>::T& peripheral_t<STM32H7B3x, ADC12_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, ADC12_Common>::T*>(0x40022300);

typename peripheral_t<STM32H7A3x, ADC1>::T& peripheral_t<STM32H7A3x, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H7B0x, ADC1>::T& peripheral_t<STM32H7B0x, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H7B3x, ADC1>::T& peripheral_t<STM32H7B3x, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, ADC1>::T*>(0x40022000);

typename peripheral_t<STM32H7A3x, ADC2>::T& peripheral_t<STM32H7A3x, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H7B0x, ADC2>::T& peripheral_t<STM32H7B0x, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H7B3x, ADC2>::T& peripheral_t<STM32H7B3x, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, ADC2>::T*>(0x40022100);

typename peripheral_t<STM32H745_CM4, ART>::T& peripheral_t<STM32H745_CM4, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, ART>::T*>(0x40024400);

typename peripheral_t<STM32H745_CM7, ART>::T& peripheral_t<STM32H745_CM7, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, ART>::T*>(0x40024400);

typename peripheral_t<STM32H747_CM4, ART>::T& peripheral_t<STM32H747_CM4, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, ART>::T*>(0x40024400);

typename peripheral_t<STM32H747_CM7, ART>::T& peripheral_t<STM32H747_CM7, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, ART>::T*>(0x40024400);

typename peripheral_t<STM32H755_CM4, ART>::T& peripheral_t<STM32H755_CM4, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, ART>::T*>(0x40024400);

typename peripheral_t<STM32H755_CM7, ART>::T& peripheral_t<STM32H755_CM7, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, ART>::T*>(0x40024400);

typename peripheral_t<STM32H757_CM4, ART>::T& peripheral_t<STM32H757_CM4, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, ART>::T*>(0x40024400);

typename peripheral_t<STM32H757_CM7, ART>::T& peripheral_t<STM32H757_CM7, ART>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, ART>::T*>(0x40024400);

typename peripheral_t<STM32H742x, AXI>::T& peripheral_t<STM32H742x, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H743, AXI>::T& peripheral_t<STM32H743, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H745_CM4, AXI>::T& peripheral_t<STM32H745_CM4, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H745_CM7, AXI>::T& peripheral_t<STM32H745_CM7, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H747_CM4, AXI>::T& peripheral_t<STM32H747_CM4, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H747_CM7, AXI>::T& peripheral_t<STM32H747_CM7, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H750x, AXI>::T& peripheral_t<STM32H750x, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H753, AXI>::T& peripheral_t<STM32H753, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H755_CM4, AXI>::T& peripheral_t<STM32H755_CM4, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H755_CM7, AXI>::T& peripheral_t<STM32H755_CM7, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H757_CM4, AXI>::T& peripheral_t<STM32H757_CM4, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H757_CM7, AXI>::T& peripheral_t<STM32H757_CM7, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H7A3x, AXI>::T& peripheral_t<STM32H7A3x, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H7B0x, AXI>::T& peripheral_t<STM32H7B0x, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H7B3x, AXI>::T& peripheral_t<STM32H7B3x, AXI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, AXI>::T*>(0x51000000);

typename peripheral_t<STM32H742x, BDMA>::T& peripheral_t<STM32H742x, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H743, BDMA>::T& peripheral_t<STM32H743, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H745_CM4, BDMA>::T& peripheral_t<STM32H745_CM4, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H745_CM7, BDMA>::T& peripheral_t<STM32H745_CM7, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H747_CM4, BDMA>::T& peripheral_t<STM32H747_CM4, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H747_CM7, BDMA>::T& peripheral_t<STM32H747_CM7, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H753, BDMA>::T& peripheral_t<STM32H753, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H755_CM4, BDMA>::T& peripheral_t<STM32H755_CM4, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H755_CM7, BDMA>::T& peripheral_t<STM32H755_CM7, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H757_CM4, BDMA>::T& peripheral_t<STM32H757_CM4, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H757_CM7, BDMA>::T& peripheral_t<STM32H757_CM7, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H750x, BDMA>::T& peripheral_t<STM32H750x, BDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, BDMA>::T*>(0x58025400);

typename peripheral_t<STM32H7A3x, BDMA1>::T& peripheral_t<STM32H7A3x, BDMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, BDMA1>::T*>(0x48022c00);

typename peripheral_t<STM32H7A3x, BDMA2>::T& peripheral_t<STM32H7A3x, BDMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, BDMA2>::T*>(0x58025400);

typename peripheral_t<STM32H7B0x, BDMA2>::T& peripheral_t<STM32H7B0x, BDMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, BDMA2>::T*>(0x58025400);

typename peripheral_t<STM32H7B0x, BDMA1>::T& peripheral_t<STM32H7B0x, BDMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, BDMA1>::T*>(0x48022c00);

typename peripheral_t<STM32H7B3x, BDMA2>::T& peripheral_t<STM32H7B3x, BDMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, BDMA2>::T*>(0x58025400);

typename peripheral_t<STM32H7B3x, BDMA1>::T& peripheral_t<STM32H7B3x, BDMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, BDMA1>::T*>(0x48022c00);

typename peripheral_t<STM32H742x, HDMI_CEC>::T& peripheral_t<STM32H742x, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H743, HDMI_CEC>::T& peripheral_t<STM32H743, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H745_CM4, HDMI_CEC>::T& peripheral_t<STM32H745_CM4, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H745_CM7, HDMI_CEC>::T& peripheral_t<STM32H745_CM7, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H747_CM4, HDMI_CEC>::T& peripheral_t<STM32H747_CM4, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H747_CM7, HDMI_CEC>::T& peripheral_t<STM32H747_CM7, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H753, HDMI_CEC>::T& peripheral_t<STM32H753, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H755_CM4, HDMI_CEC>::T& peripheral_t<STM32H755_CM4, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H755_CM7, HDMI_CEC>::T& peripheral_t<STM32H755_CM7, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H757_CM4, HDMI_CEC>::T& peripheral_t<STM32H757_CM4, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H757_CM7, HDMI_CEC>::T& peripheral_t<STM32H757_CM7, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H7A3x, HDMI_CEC>::T& peripheral_t<STM32H7A3x, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H750x, HDMI_CEC>::T& peripheral_t<STM32H750x, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H7B0x, HDMI_CEC>::T& peripheral_t<STM32H7B0x, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H7B3x, HDMI_CEC>::T& peripheral_t<STM32H7B3x, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HDMI_CEC>::T*>(0x40006c00);

typename peripheral_t<STM32H742x, COMP1>::T& peripheral_t<STM32H742x, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H743, COMP1>::T& peripheral_t<STM32H743, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H745_CM4, COMP1>::T& peripheral_t<STM32H745_CM4, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H745_CM7, COMP1>::T& peripheral_t<STM32H745_CM7, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H747_CM4, COMP1>::T& peripheral_t<STM32H747_CM4, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H747_CM7, COMP1>::T& peripheral_t<STM32H747_CM7, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H753, COMP1>::T& peripheral_t<STM32H753, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H755_CM4, COMP1>::T& peripheral_t<STM32H755_CM4, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H755_CM7, COMP1>::T& peripheral_t<STM32H755_CM7, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H757_CM4, COMP1>::T& peripheral_t<STM32H757_CM4, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H757_CM7, COMP1>::T& peripheral_t<STM32H757_CM7, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H7A3x, COMP1>::T& peripheral_t<STM32H7A3x, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H750x, COMP1>::T& peripheral_t<STM32H750x, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H7B0x, COMP1>::T& peripheral_t<STM32H7B0x, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H7B3x, COMP1>::T& peripheral_t<STM32H7B3x, COMP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, COMP1>::T*>(0x58003800);

typename peripheral_t<STM32H742x, CRC>::T& peripheral_t<STM32H742x, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H743, CRC>::T& peripheral_t<STM32H743, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H745_CM4, CRC>::T& peripheral_t<STM32H745_CM4, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H745_CM7, CRC>::T& peripheral_t<STM32H745_CM7, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H747_CM4, CRC>::T& peripheral_t<STM32H747_CM4, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H747_CM7, CRC>::T& peripheral_t<STM32H747_CM7, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H750x, CRC>::T& peripheral_t<STM32H750x, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H753, CRC>::T& peripheral_t<STM32H753, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H755_CM4, CRC>::T& peripheral_t<STM32H755_CM4, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H755_CM7, CRC>::T& peripheral_t<STM32H755_CM7, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H757_CM4, CRC>::T& peripheral_t<STM32H757_CM4, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H757_CM7, CRC>::T& peripheral_t<STM32H757_CM7, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, CRC>::T*>(0x58024c00);

typename peripheral_t<STM32H7A3x, CRC>::T& peripheral_t<STM32H7A3x, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, CRC>::T*>(0x40023000);

typename peripheral_t<STM32H7B0x, CRC>::T& peripheral_t<STM32H7B0x, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, CRC>::T*>(0x40023000);

typename peripheral_t<STM32H7B3x, CRC>::T& peripheral_t<STM32H7B3x, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, CRC>::T*>(0x40023000);

typename peripheral_t<STM32H742x, CRS>::T& peripheral_t<STM32H742x, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H743, CRS>::T& peripheral_t<STM32H743, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H745_CM4, CRS>::T& peripheral_t<STM32H745_CM4, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H745_CM7, CRS>::T& peripheral_t<STM32H745_CM7, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H747_CM4, CRS>::T& peripheral_t<STM32H747_CM4, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H747_CM7, CRS>::T& peripheral_t<STM32H747_CM7, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H753, CRS>::T& peripheral_t<STM32H753, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H755_CM4, CRS>::T& peripheral_t<STM32H755_CM4, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H755_CM7, CRS>::T& peripheral_t<STM32H755_CM7, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H757_CM4, CRS>::T& peripheral_t<STM32H757_CM4, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H757_CM7, CRS>::T& peripheral_t<STM32H757_CM7, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H7A3x, CRS>::T& peripheral_t<STM32H7A3x, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H750x, CRS>::T& peripheral_t<STM32H750x, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H7B0x, CRS>::T& peripheral_t<STM32H7B0x, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H7B3x, CRS>::T& peripheral_t<STM32H7B3x, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, CRS>::T*>(0x40008400);

typename peripheral_t<STM32H750x, CRYP>::T& peripheral_t<STM32H750x, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H755_CM4, CRYP>::T& peripheral_t<STM32H755_CM4, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H755_CM7, CRYP>::T& peripheral_t<STM32H755_CM7, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H757_CM4, CRYP>::T& peripheral_t<STM32H757_CM4, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H757_CM7, CRYP>::T& peripheral_t<STM32H757_CM7, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H7B0x, CRYP>::T& peripheral_t<STM32H7B0x, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H7B3x, CRYP>::T& peripheral_t<STM32H7B3x, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H753, CRYP>::T& peripheral_t<STM32H753, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, CRYP>::T*>(0x48021000);

typename peripheral_t<STM32H742x, DAC>::T& peripheral_t<STM32H742x, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H743, DAC>::T& peripheral_t<STM32H743, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H745_CM4, DAC>::T& peripheral_t<STM32H745_CM4, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H745_CM7, DAC>::T& peripheral_t<STM32H745_CM7, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H747_CM4, DAC>::T& peripheral_t<STM32H747_CM4, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H747_CM7, DAC>::T& peripheral_t<STM32H747_CM7, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H753, DAC>::T& peripheral_t<STM32H753, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H755_CM4, DAC>::T& peripheral_t<STM32H755_CM4, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H755_CM7, DAC>::T& peripheral_t<STM32H755_CM7, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H757_CM4, DAC>::T& peripheral_t<STM32H757_CM4, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H757_CM7, DAC>::T& peripheral_t<STM32H757_CM7, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H7A3x, DAC>::T& peripheral_t<STM32H7A3x, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H750x, DAC>::T& peripheral_t<STM32H750x, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H7B0x, DAC>::T& peripheral_t<STM32H7B0x, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H7B3x, DAC>::T& peripheral_t<STM32H7B3x, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DAC>::T*>(0x40007400);

typename peripheral_t<STM32H742x, DBGMCU>::T& peripheral_t<STM32H742x, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H750x, DBGMCU>::T& peripheral_t<STM32H750x, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H753, DBGMCU>::T& peripheral_t<STM32H753, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H743, DBGMCU>::T& peripheral_t<STM32H743, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H745_CM4, DBGMCU>::T& peripheral_t<STM32H745_CM4, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H745_CM7, DBGMCU>::T& peripheral_t<STM32H745_CM7, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H747_CM4, DBGMCU>::T& peripheral_t<STM32H747_CM4, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H747_CM7, DBGMCU>::T& peripheral_t<STM32H747_CM7, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H755_CM4, DBGMCU>::T& peripheral_t<STM32H755_CM4, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H755_CM7, DBGMCU>::T& peripheral_t<STM32H755_CM7, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H757_CM4, DBGMCU>::T& peripheral_t<STM32H757_CM4, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H757_CM7, DBGMCU>::T& peripheral_t<STM32H757_CM7, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H7A3x, DBGMCU>::T& peripheral_t<STM32H7A3x, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H7B0x, DBGMCU>::T& peripheral_t<STM32H7B0x, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H7B3x, DBGMCU>::T& peripheral_t<STM32H7B3x, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DBGMCU>::T*>(0x5c001000);

typename peripheral_t<STM32H742x, DCMI>::T& peripheral_t<STM32H742x, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H743, DCMI>::T& peripheral_t<STM32H743, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H745_CM4, DCMI>::T& peripheral_t<STM32H745_CM4, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H745_CM7, DCMI>::T& peripheral_t<STM32H745_CM7, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H747_CM4, DCMI>::T& peripheral_t<STM32H747_CM4, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H747_CM7, DCMI>::T& peripheral_t<STM32H747_CM7, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H750x, DCMI>::T& peripheral_t<STM32H750x, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H753, DCMI>::T& peripheral_t<STM32H753, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H755_CM4, DCMI>::T& peripheral_t<STM32H755_CM4, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H755_CM7, DCMI>::T& peripheral_t<STM32H755_CM7, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H757_CM4, DCMI>::T& peripheral_t<STM32H757_CM4, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H757_CM7, DCMI>::T& peripheral_t<STM32H757_CM7, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H7A3x, DCMI>::T& peripheral_t<STM32H7A3x, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H7B0x, DCMI>::T& peripheral_t<STM32H7B0x, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H7B3x, DCMI>::T& peripheral_t<STM32H7B3x, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DCMI>::T*>(0x48020000);

typename peripheral_t<STM32H742x, DFSDM>::T& peripheral_t<STM32H742x, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H745_CM4, DFSDM>::T& peripheral_t<STM32H745_CM4, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H745_CM7, DFSDM>::T& peripheral_t<STM32H745_CM7, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H747_CM4, DFSDM>::T& peripheral_t<STM32H747_CM4, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H747_CM7, DFSDM>::T& peripheral_t<STM32H747_CM7, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H750x, DFSDM>::T& peripheral_t<STM32H750x, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H753, DFSDM>::T& peripheral_t<STM32H753, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H755_CM4, DFSDM>::T& peripheral_t<STM32H755_CM4, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H755_CM7, DFSDM>::T& peripheral_t<STM32H755_CM7, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H757_CM4, DFSDM>::T& peripheral_t<STM32H757_CM4, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H757_CM7, DFSDM>::T& peripheral_t<STM32H757_CM7, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H7A3x, DFSDM>::T& peripheral_t<STM32H7A3x, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H7B0x, DFSDM>::T& peripheral_t<STM32H7B0x, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H7B3x, DFSDM>::T& peripheral_t<STM32H7B3x, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H743, DFSDM>::T& peripheral_t<STM32H743, DFSDM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DFSDM>::T*>(0x40017000);

typename peripheral_t<STM32H742x, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H742x, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H742x, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H742x, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H742x, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H742x, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H743, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H743, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H743, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H743, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H743, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H743, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H745_CM4, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H745_CM4, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H745_CM7, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H745_CM7, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H747_CM4, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H747_CM4, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H747_CM7, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H747_CM7, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H750x, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H750x, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H750x, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H750x, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H750x, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H750x, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H753, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H753, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H753, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H753, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H753, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H753, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H755_CM4, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H755_CM4, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H755_CM7, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H755_CM7, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H757_CM4, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H757_CM4, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H757_CM7, DELAY_Block_QUADSPI>::T& peripheral_t<STM32H757_CM7, DELAY_Block_QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DELAY_Block_QUADSPI>::T*>(0x52006000);

typename peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H7A3x, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H7A3x, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H7A3x, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H7A3x, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI1>::T& peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI1>::T*>(0x52006000);

typename peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI2>::T& peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI2>::T*>(0x5200b000);

typename peripheral_t<STM32H7B0x, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H7B0x, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H7B0x, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H7B0x, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI1>::T& peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI1>::T*>(0x52006000);

typename peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI2>::T& peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI2>::T*>(0x5200b000);

typename peripheral_t<STM32H7B3x, DELAY_Block_SDMMC1>::T& peripheral_t<STM32H7B3x, DELAY_Block_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DELAY_Block_SDMMC1>::T*>(0x52008000);

typename peripheral_t<STM32H7B3x, DELAY_Block_SDMMC2>::T& peripheral_t<STM32H7B3x, DELAY_Block_SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DELAY_Block_SDMMC2>::T*>(0x48022800);

typename peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI1>::T& peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI1>::T*>(0x52006000);

typename peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI2>::T& peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI2>::T*>(0x5200b000);

typename peripheral_t<STM32H742x, DMA1>::T& peripheral_t<STM32H742x, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H742x, DMA2>::T& peripheral_t<STM32H742x, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H743, DMA1>::T& peripheral_t<STM32H743, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H743, DMA2>::T& peripheral_t<STM32H743, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H745_CM4, DMA1>::T& peripheral_t<STM32H745_CM4, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H745_CM4, DMA2>::T& peripheral_t<STM32H745_CM4, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H745_CM7, DMA1>::T& peripheral_t<STM32H745_CM7, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H745_CM7, DMA2>::T& peripheral_t<STM32H745_CM7, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H747_CM4, DMA1>::T& peripheral_t<STM32H747_CM4, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H747_CM4, DMA2>::T& peripheral_t<STM32H747_CM4, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H747_CM7, DMA1>::T& peripheral_t<STM32H747_CM7, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H747_CM7, DMA2>::T& peripheral_t<STM32H747_CM7, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H750x, DMA1>::T& peripheral_t<STM32H750x, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H750x, DMA2>::T& peripheral_t<STM32H750x, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H753, DMA1>::T& peripheral_t<STM32H753, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H753, DMA2>::T& peripheral_t<STM32H753, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H755_CM4, DMA1>::T& peripheral_t<STM32H755_CM4, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H755_CM4, DMA2>::T& peripheral_t<STM32H755_CM4, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H755_CM7, DMA1>::T& peripheral_t<STM32H755_CM7, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H755_CM7, DMA2>::T& peripheral_t<STM32H755_CM7, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H757_CM4, DMA1>::T& peripheral_t<STM32H757_CM4, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H757_CM4, DMA2>::T& peripheral_t<STM32H757_CM4, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H757_CM7, DMA1>::T& peripheral_t<STM32H757_CM7, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H757_CM7, DMA2>::T& peripheral_t<STM32H757_CM7, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H7A3x, DMA1>::T& peripheral_t<STM32H7A3x, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H7A3x, DMA2>::T& peripheral_t<STM32H7A3x, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H7B0x, DMA1>::T& peripheral_t<STM32H7B0x, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H7B0x, DMA2>::T& peripheral_t<STM32H7B0x, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H7B3x, DMA1>::T& peripheral_t<STM32H7B3x, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32H7B3x, DMA2>::T& peripheral_t<STM32H7B3x, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32H742x, DMA2D>::T& peripheral_t<STM32H742x, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H743, DMA2D>::T& peripheral_t<STM32H743, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H745_CM4, DMA2D>::T& peripheral_t<STM32H745_CM4, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H745_CM7, DMA2D>::T& peripheral_t<STM32H745_CM7, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H747_CM4, DMA2D>::T& peripheral_t<STM32H747_CM4, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H747_CM7, DMA2D>::T& peripheral_t<STM32H747_CM7, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H753, DMA2D>::T& peripheral_t<STM32H753, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H755_CM4, DMA2D>::T& peripheral_t<STM32H755_CM4, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H755_CM7, DMA2D>::T& peripheral_t<STM32H755_CM7, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H757_CM4, DMA2D>::T& peripheral_t<STM32H757_CM4, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H757_CM7, DMA2D>::T& peripheral_t<STM32H757_CM7, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H750x, DMA2D>::T& peripheral_t<STM32H750x, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H7B0x, DMA2D>::T& peripheral_t<STM32H7B0x, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H7B3x, DMA2D>::T& peripheral_t<STM32H7B3x, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H7A3x, DMA2D>::T& peripheral_t<STM32H7A3x, DMA2D>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DMA2D>::T*>(0x52001000);

typename peripheral_t<STM32H742x, DMAMUX2>::T& peripheral_t<STM32H742x, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H743, DMAMUX2>::T& peripheral_t<STM32H743, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H745_CM4, DMAMUX2>::T& peripheral_t<STM32H745_CM4, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H745_CM7, DMAMUX2>::T& peripheral_t<STM32H745_CM7, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H747_CM4, DMAMUX2>::T& peripheral_t<STM32H747_CM4, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H747_CM7, DMAMUX2>::T& peripheral_t<STM32H747_CM7, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H753, DMAMUX2>::T& peripheral_t<STM32H753, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H755_CM4, DMAMUX2>::T& peripheral_t<STM32H755_CM4, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H755_CM7, DMAMUX2>::T& peripheral_t<STM32H755_CM7, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H757_CM4, DMAMUX2>::T& peripheral_t<STM32H757_CM4, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H757_CM7, DMAMUX2>::T& peripheral_t<STM32H757_CM7, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H7A3x, DMAMUX2>::T& peripheral_t<STM32H7A3x, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H742x, DMAMUX1>::T& peripheral_t<STM32H742x, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H743, DMAMUX1>::T& peripheral_t<STM32H743, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H745_CM4, DMAMUX1>::T& peripheral_t<STM32H745_CM4, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H745_CM7, DMAMUX1>::T& peripheral_t<STM32H745_CM7, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H747_CM4, DMAMUX1>::T& peripheral_t<STM32H747_CM4, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H747_CM7, DMAMUX1>::T& peripheral_t<STM32H747_CM7, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H753, DMAMUX1>::T& peripheral_t<STM32H753, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H755_CM4, DMAMUX1>::T& peripheral_t<STM32H755_CM4, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H755_CM7, DMAMUX1>::T& peripheral_t<STM32H755_CM7, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H757_CM4, DMAMUX1>::T& peripheral_t<STM32H757_CM4, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H757_CM7, DMAMUX1>::T& peripheral_t<STM32H757_CM7, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H750x, DMAMUX2>::T& peripheral_t<STM32H750x, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H7B0x, DMAMUX2>::T& peripheral_t<STM32H7B0x, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H7B3x, DMAMUX2>::T& peripheral_t<STM32H7B3x, DMAMUX2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DMAMUX2>::T*>(0x58025800);

typename peripheral_t<STM32H750x, DMAMUX1>::T& peripheral_t<STM32H750x, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H7A3x, DMAMUX1>::T& peripheral_t<STM32H7A3x, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H7B0x, DMAMUX1>::T& peripheral_t<STM32H7B0x, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H7B3x, DMAMUX1>::T& peripheral_t<STM32H7B3x, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32H745_CM4, DSIHOST>::T& peripheral_t<STM32H745_CM4, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H745_CM7, DSIHOST>::T& peripheral_t<STM32H745_CM7, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H747_CM4, DSIHOST>::T& peripheral_t<STM32H747_CM4, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H747_CM7, DSIHOST>::T& peripheral_t<STM32H747_CM7, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H755_CM4, DSIHOST>::T& peripheral_t<STM32H755_CM4, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H755_CM7, DSIHOST>::T& peripheral_t<STM32H755_CM7, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H757_CM4, DSIHOST>::T& peripheral_t<STM32H757_CM4, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H757_CM7, DSIHOST>::T& peripheral_t<STM32H757_CM7, DSIHOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, DSIHOST>::T*>(0x50000000);

typename peripheral_t<STM32H742x, EXTI>::T& peripheral_t<STM32H742x, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H743, EXTI>::T& peripheral_t<STM32H743, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H745_CM4, EXTI>::T& peripheral_t<STM32H745_CM4, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H745_CM7, EXTI>::T& peripheral_t<STM32H745_CM7, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H747_CM4, EXTI>::T& peripheral_t<STM32H747_CM4, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H747_CM7, EXTI>::T& peripheral_t<STM32H747_CM7, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H750x, EXTI>::T& peripheral_t<STM32H750x, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H753, EXTI>::T& peripheral_t<STM32H753, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H755_CM4, EXTI>::T& peripheral_t<STM32H755_CM4, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H755_CM7, EXTI>::T& peripheral_t<STM32H755_CM7, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H757_CM4, EXTI>::T& peripheral_t<STM32H757_CM4, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H757_CM7, EXTI>::T& peripheral_t<STM32H757_CM7, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H7A3x, EXTI>::T& peripheral_t<STM32H7A3x, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H7B0x, EXTI>::T& peripheral_t<STM32H7B0x, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H7B3x, EXTI>::T& peripheral_t<STM32H7B3x, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, EXTI>::T*>(0x58000000);

typename peripheral_t<STM32H742x, Ethernet_DMA>::T& peripheral_t<STM32H742x, Ethernet_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, Ethernet_DMA>::T*>(0x40029000);

typename peripheral_t<STM32H743, Ethernet_DMA>::T& peripheral_t<STM32H743, Ethernet_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, Ethernet_DMA>::T*>(0x40029000);

typename peripheral_t<STM32H753, Ethernet_DMA>::T& peripheral_t<STM32H753, Ethernet_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, Ethernet_DMA>::T*>(0x40029000);

typename peripheral_t<STM32H742x, Ethernet_MTL>::T& peripheral_t<STM32H742x, Ethernet_MTL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, Ethernet_MTL>::T*>(0x40028c00);

typename peripheral_t<STM32H743, Ethernet_MTL>::T& peripheral_t<STM32H743, Ethernet_MTL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, Ethernet_MTL>::T*>(0x40028c00);

typename peripheral_t<STM32H753, Ethernet_MTL>::T& peripheral_t<STM32H753, Ethernet_MTL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, Ethernet_MTL>::T*>(0x40028c00);

typename peripheral_t<STM32H742x, Ethernet_MAC>::T& peripheral_t<STM32H742x, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H743, Ethernet_MAC>::T& peripheral_t<STM32H743, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H753, Ethernet_MAC>::T& peripheral_t<STM32H753, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H745_CM4, Ethernet_MAC>::T& peripheral_t<STM32H745_CM4, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H745_CM7, Ethernet_MAC>::T& peripheral_t<STM32H745_CM7, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H747_CM4, Ethernet_MAC>::T& peripheral_t<STM32H747_CM4, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H747_CM7, Ethernet_MAC>::T& peripheral_t<STM32H747_CM7, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H755_CM4, Ethernet_MAC>::T& peripheral_t<STM32H755_CM4, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H755_CM7, Ethernet_MAC>::T& peripheral_t<STM32H755_CM7, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H757_CM4, Ethernet_MAC>::T& peripheral_t<STM32H757_CM4, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H757_CM7, Ethernet_MAC>::T& peripheral_t<STM32H757_CM7, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H750x, Ethernet_MAC>::T& peripheral_t<STM32H750x, Ethernet_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, Ethernet_MAC>::T*>(0x40028000);

typename peripheral_t<STM32H742x, FDCAN1>::T& peripheral_t<STM32H742x, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H742x, FDCAN2>::T& peripheral_t<STM32H742x, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H743, FDCAN1>::T& peripheral_t<STM32H743, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H743, FDCAN2>::T& peripheral_t<STM32H743, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H745_CM4, FDCAN1>::T& peripheral_t<STM32H745_CM4, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H745_CM4, FDCAN2>::T& peripheral_t<STM32H745_CM4, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H745_CM7, FDCAN1>::T& peripheral_t<STM32H745_CM7, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H745_CM7, FDCAN2>::T& peripheral_t<STM32H745_CM7, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H747_CM4, FDCAN1>::T& peripheral_t<STM32H747_CM4, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H747_CM4, FDCAN2>::T& peripheral_t<STM32H747_CM4, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H747_CM7, FDCAN1>::T& peripheral_t<STM32H747_CM7, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H747_CM7, FDCAN2>::T& peripheral_t<STM32H747_CM7, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H750x, FDCAN1>::T& peripheral_t<STM32H750x, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H750x, FDCAN2>::T& peripheral_t<STM32H750x, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H753, FDCAN1>::T& peripheral_t<STM32H753, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H753, FDCAN2>::T& peripheral_t<STM32H753, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H755_CM4, FDCAN1>::T& peripheral_t<STM32H755_CM4, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H755_CM4, FDCAN2>::T& peripheral_t<STM32H755_CM4, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H755_CM7, FDCAN1>::T& peripheral_t<STM32H755_CM7, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H755_CM7, FDCAN2>::T& peripheral_t<STM32H755_CM7, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H757_CM4, FDCAN1>::T& peripheral_t<STM32H757_CM4, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H757_CM4, FDCAN2>::T& peripheral_t<STM32H757_CM4, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H757_CM7, FDCAN1>::T& peripheral_t<STM32H757_CM7, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, FDCAN1>::T*>(0x4000a000);

typename peripheral_t<STM32H757_CM7, FDCAN2>::T& peripheral_t<STM32H757_CM7, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, FDCAN2>::T*>(0x4000a400);

typename peripheral_t<STM32H742x, CAN_CCU>::T& peripheral_t<STM32H742x, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H743, CAN_CCU>::T& peripheral_t<STM32H743, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H745_CM4, CAN_CCU>::T& peripheral_t<STM32H745_CM4, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H745_CM7, CAN_CCU>::T& peripheral_t<STM32H745_CM7, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H747_CM4, CAN_CCU>::T& peripheral_t<STM32H747_CM4, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H747_CM7, CAN_CCU>::T& peripheral_t<STM32H747_CM7, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H750x, CAN_CCU>::T& peripheral_t<STM32H750x, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H753, CAN_CCU>::T& peripheral_t<STM32H753, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H755_CM4, CAN_CCU>::T& peripheral_t<STM32H755_CM4, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H755_CM7, CAN_CCU>::T& peripheral_t<STM32H755_CM7, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H757_CM4, CAN_CCU>::T& peripheral_t<STM32H757_CM4, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H757_CM7, CAN_CCU>::T& peripheral_t<STM32H757_CM7, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H7A3x, FDCAN>::T& peripheral_t<STM32H7A3x, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32H7B0x, FDCAN>::T& peripheral_t<STM32H7B0x, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32H7B3x, FDCAN>::T& peripheral_t<STM32H7B3x, FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, FDCAN>::T*>(0x4000a400);

typename peripheral_t<STM32H7A3x, TT_FDCAN>::T& peripheral_t<STM32H7A3x, TT_FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TT_FDCAN>::T*>(0x4000a000);

typename peripheral_t<STM32H7B0x, TT_FDCAN>::T& peripheral_t<STM32H7B0x, TT_FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TT_FDCAN>::T*>(0x4000a000);

typename peripheral_t<STM32H7B3x, TT_FDCAN>::T& peripheral_t<STM32H7B3x, TT_FDCAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TT_FDCAN>::T*>(0x4000a000);

typename peripheral_t<STM32H7A3x, CAN_CCU>::T& peripheral_t<STM32H7A3x, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H7B0x, CAN_CCU>::T& peripheral_t<STM32H7B0x, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H7B3x, CAN_CCU>::T& peripheral_t<STM32H7B3x, CAN_CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, CAN_CCU>::T*>(0x4000a800);

typename peripheral_t<STM32H742x, FMC>::T& peripheral_t<STM32H742x, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H743, FMC>::T& peripheral_t<STM32H743, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H745_CM4, FMC>::T& peripheral_t<STM32H745_CM4, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H745_CM7, FMC>::T& peripheral_t<STM32H745_CM7, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H747_CM4, FMC>::T& peripheral_t<STM32H747_CM4, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H747_CM7, FMC>::T& peripheral_t<STM32H747_CM7, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H753, FMC>::T& peripheral_t<STM32H753, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H755_CM4, FMC>::T& peripheral_t<STM32H755_CM4, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H755_CM7, FMC>::T& peripheral_t<STM32H755_CM7, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H757_CM4, FMC>::T& peripheral_t<STM32H757_CM4, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H757_CM7, FMC>::T& peripheral_t<STM32H757_CM7, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H7A3x, FMC>::T& peripheral_t<STM32H7A3x, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H750x, FMC>::T& peripheral_t<STM32H750x, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H7B0x, FMC>::T& peripheral_t<STM32H7B0x, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H7B3x, FMC>::T& peripheral_t<STM32H7B3x, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, FMC>::T*>(0x52004000);

typename peripheral_t<STM32H742x, FPU_CPACR>::T& peripheral_t<STM32H742x, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H743, FPU_CPACR>::T& peripheral_t<STM32H743, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H745_CM4, FPU_CPACR>::T& peripheral_t<STM32H745_CM4, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H745_CM7, FPU_CPACR>::T& peripheral_t<STM32H745_CM7, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H747_CM4, FPU_CPACR>::T& peripheral_t<STM32H747_CM4, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H747_CM7, FPU_CPACR>::T& peripheral_t<STM32H747_CM7, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H750x, FPU_CPACR>::T& peripheral_t<STM32H750x, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H753, FPU_CPACR>::T& peripheral_t<STM32H753, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H755_CM4, FPU_CPACR>::T& peripheral_t<STM32H755_CM4, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H755_CM7, FPU_CPACR>::T& peripheral_t<STM32H755_CM7, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H757_CM4, FPU_CPACR>::T& peripheral_t<STM32H757_CM4, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H757_CM7, FPU_CPACR>::T& peripheral_t<STM32H757_CM7, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H7A3x, FPU_CPACR>::T& peripheral_t<STM32H7A3x, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H7B0x, FPU_CPACR>::T& peripheral_t<STM32H7B0x, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H7B3x, FPU_CPACR>::T& peripheral_t<STM32H7B3x, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32H742x, FPU>::T& peripheral_t<STM32H742x, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H743, FPU>::T& peripheral_t<STM32H743, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H745_CM4, FPU>::T& peripheral_t<STM32H745_CM4, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H745_CM7, FPU>::T& peripheral_t<STM32H745_CM7, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H747_CM4, FPU>::T& peripheral_t<STM32H747_CM4, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H747_CM7, FPU>::T& peripheral_t<STM32H747_CM7, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H750x, FPU>::T& peripheral_t<STM32H750x, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H753, FPU>::T& peripheral_t<STM32H753, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H755_CM4, FPU>::T& peripheral_t<STM32H755_CM4, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H755_CM7, FPU>::T& peripheral_t<STM32H755_CM7, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H757_CM4, FPU>::T& peripheral_t<STM32H757_CM4, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H757_CM7, FPU>::T& peripheral_t<STM32H757_CM7, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H7A3x, FPU>::T& peripheral_t<STM32H7A3x, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H7B0x, FPU>::T& peripheral_t<STM32H7B0x, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H7B3x, FPU>::T& peripheral_t<STM32H7B3x, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32H742x, Flash>::T& peripheral_t<STM32H742x, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H743, Flash>::T& peripheral_t<STM32H743, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H745_CM4, Flash>::T& peripheral_t<STM32H745_CM4, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H745_CM7, Flash>::T& peripheral_t<STM32H745_CM7, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H747_CM4, Flash>::T& peripheral_t<STM32H747_CM4, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H747_CM7, Flash>::T& peripheral_t<STM32H747_CM7, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H750x, Flash>::T& peripheral_t<STM32H750x, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H753, Flash>::T& peripheral_t<STM32H753, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H755_CM4, Flash>::T& peripheral_t<STM32H755_CM4, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H755_CM7, Flash>::T& peripheral_t<STM32H755_CM7, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H757_CM4, Flash>::T& peripheral_t<STM32H757_CM4, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H757_CM7, Flash>::T& peripheral_t<STM32H757_CM7, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H7B0x, Flash>::T& peripheral_t<STM32H7B0x, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H7B3x, Flash>::T& peripheral_t<STM32H7B3x, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H7A3x, Flash>::T& peripheral_t<STM32H7A3x, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, Flash>::T*>(0x52002000);

typename peripheral_t<STM32H742x, GPIOA>::T& peripheral_t<STM32H742x, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H742x, GPIOB>::T& peripheral_t<STM32H742x, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H742x, GPIOC>::T& peripheral_t<STM32H742x, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H742x, GPIOD>::T& peripheral_t<STM32H742x, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H742x, GPIOE>::T& peripheral_t<STM32H742x, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H742x, GPIOF>::T& peripheral_t<STM32H742x, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H742x, GPIOG>::T& peripheral_t<STM32H742x, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H742x, GPIOH>::T& peripheral_t<STM32H742x, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H742x, GPIOI>::T& peripheral_t<STM32H742x, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H742x, GPIOJ>::T& peripheral_t<STM32H742x, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H742x, GPIOK>::T& peripheral_t<STM32H742x, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H743, GPIOA>::T& peripheral_t<STM32H743, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H743, GPIOB>::T& peripheral_t<STM32H743, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H743, GPIOC>::T& peripheral_t<STM32H743, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H743, GPIOD>::T& peripheral_t<STM32H743, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H743, GPIOE>::T& peripheral_t<STM32H743, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H743, GPIOF>::T& peripheral_t<STM32H743, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H743, GPIOG>::T& peripheral_t<STM32H743, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H743, GPIOH>::T& peripheral_t<STM32H743, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H743, GPIOI>::T& peripheral_t<STM32H743, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H743, GPIOJ>::T& peripheral_t<STM32H743, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H743, GPIOK>::T& peripheral_t<STM32H743, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H745_CM4, GPIOA>::T& peripheral_t<STM32H745_CM4, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H745_CM4, GPIOB>::T& peripheral_t<STM32H745_CM4, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H745_CM4, GPIOC>::T& peripheral_t<STM32H745_CM4, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H745_CM4, GPIOD>::T& peripheral_t<STM32H745_CM4, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H745_CM4, GPIOE>::T& peripheral_t<STM32H745_CM4, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H745_CM4, GPIOF>::T& peripheral_t<STM32H745_CM4, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H745_CM4, GPIOG>::T& peripheral_t<STM32H745_CM4, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H745_CM4, GPIOH>::T& peripheral_t<STM32H745_CM4, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H745_CM4, GPIOI>::T& peripheral_t<STM32H745_CM4, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H745_CM4, GPIOJ>::T& peripheral_t<STM32H745_CM4, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H745_CM4, GPIOK>::T& peripheral_t<STM32H745_CM4, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H745_CM7, GPIOA>::T& peripheral_t<STM32H745_CM7, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H745_CM7, GPIOB>::T& peripheral_t<STM32H745_CM7, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H745_CM7, GPIOC>::T& peripheral_t<STM32H745_CM7, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H745_CM7, GPIOD>::T& peripheral_t<STM32H745_CM7, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H745_CM7, GPIOE>::T& peripheral_t<STM32H745_CM7, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H745_CM7, GPIOF>::T& peripheral_t<STM32H745_CM7, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H745_CM7, GPIOG>::T& peripheral_t<STM32H745_CM7, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H745_CM7, GPIOH>::T& peripheral_t<STM32H745_CM7, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H745_CM7, GPIOI>::T& peripheral_t<STM32H745_CM7, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H745_CM7, GPIOJ>::T& peripheral_t<STM32H745_CM7, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H745_CM7, GPIOK>::T& peripheral_t<STM32H745_CM7, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H747_CM4, GPIOA>::T& peripheral_t<STM32H747_CM4, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H747_CM4, GPIOB>::T& peripheral_t<STM32H747_CM4, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H747_CM4, GPIOC>::T& peripheral_t<STM32H747_CM4, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H747_CM4, GPIOD>::T& peripheral_t<STM32H747_CM4, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H747_CM4, GPIOE>::T& peripheral_t<STM32H747_CM4, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H747_CM4, GPIOF>::T& peripheral_t<STM32H747_CM4, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H747_CM4, GPIOG>::T& peripheral_t<STM32H747_CM4, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H747_CM4, GPIOH>::T& peripheral_t<STM32H747_CM4, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H747_CM4, GPIOI>::T& peripheral_t<STM32H747_CM4, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H747_CM4, GPIOJ>::T& peripheral_t<STM32H747_CM4, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H747_CM4, GPIOK>::T& peripheral_t<STM32H747_CM4, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H747_CM7, GPIOA>::T& peripheral_t<STM32H747_CM7, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H747_CM7, GPIOB>::T& peripheral_t<STM32H747_CM7, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H747_CM7, GPIOC>::T& peripheral_t<STM32H747_CM7, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H747_CM7, GPIOD>::T& peripheral_t<STM32H747_CM7, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H747_CM7, GPIOE>::T& peripheral_t<STM32H747_CM7, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H747_CM7, GPIOF>::T& peripheral_t<STM32H747_CM7, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H747_CM7, GPIOG>::T& peripheral_t<STM32H747_CM7, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H747_CM7, GPIOH>::T& peripheral_t<STM32H747_CM7, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H747_CM7, GPIOI>::T& peripheral_t<STM32H747_CM7, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H747_CM7, GPIOJ>::T& peripheral_t<STM32H747_CM7, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H747_CM7, GPIOK>::T& peripheral_t<STM32H747_CM7, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H753, GPIOA>::T& peripheral_t<STM32H753, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H753, GPIOB>::T& peripheral_t<STM32H753, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H753, GPIOC>::T& peripheral_t<STM32H753, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H753, GPIOD>::T& peripheral_t<STM32H753, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H753, GPIOE>::T& peripheral_t<STM32H753, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H753, GPIOF>::T& peripheral_t<STM32H753, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H753, GPIOG>::T& peripheral_t<STM32H753, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H753, GPIOH>::T& peripheral_t<STM32H753, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H753, GPIOI>::T& peripheral_t<STM32H753, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H753, GPIOJ>::T& peripheral_t<STM32H753, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H753, GPIOK>::T& peripheral_t<STM32H753, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H755_CM4, GPIOA>::T& peripheral_t<STM32H755_CM4, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H755_CM4, GPIOB>::T& peripheral_t<STM32H755_CM4, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H755_CM4, GPIOC>::T& peripheral_t<STM32H755_CM4, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H755_CM4, GPIOD>::T& peripheral_t<STM32H755_CM4, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H755_CM4, GPIOE>::T& peripheral_t<STM32H755_CM4, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H755_CM4, GPIOF>::T& peripheral_t<STM32H755_CM4, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H755_CM4, GPIOG>::T& peripheral_t<STM32H755_CM4, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H755_CM4, GPIOH>::T& peripheral_t<STM32H755_CM4, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H755_CM4, GPIOI>::T& peripheral_t<STM32H755_CM4, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H755_CM4, GPIOJ>::T& peripheral_t<STM32H755_CM4, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H755_CM4, GPIOK>::T& peripheral_t<STM32H755_CM4, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H755_CM7, GPIOA>::T& peripheral_t<STM32H755_CM7, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H755_CM7, GPIOB>::T& peripheral_t<STM32H755_CM7, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H755_CM7, GPIOC>::T& peripheral_t<STM32H755_CM7, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H755_CM7, GPIOD>::T& peripheral_t<STM32H755_CM7, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H755_CM7, GPIOE>::T& peripheral_t<STM32H755_CM7, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H755_CM7, GPIOF>::T& peripheral_t<STM32H755_CM7, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H755_CM7, GPIOG>::T& peripheral_t<STM32H755_CM7, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H755_CM7, GPIOH>::T& peripheral_t<STM32H755_CM7, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H755_CM7, GPIOI>::T& peripheral_t<STM32H755_CM7, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H755_CM7, GPIOJ>::T& peripheral_t<STM32H755_CM7, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H755_CM7, GPIOK>::T& peripheral_t<STM32H755_CM7, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H757_CM4, GPIOA>::T& peripheral_t<STM32H757_CM4, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H757_CM4, GPIOB>::T& peripheral_t<STM32H757_CM4, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H757_CM4, GPIOC>::T& peripheral_t<STM32H757_CM4, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H757_CM4, GPIOD>::T& peripheral_t<STM32H757_CM4, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H757_CM4, GPIOE>::T& peripheral_t<STM32H757_CM4, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H757_CM4, GPIOF>::T& peripheral_t<STM32H757_CM4, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H757_CM4, GPIOG>::T& peripheral_t<STM32H757_CM4, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H757_CM4, GPIOH>::T& peripheral_t<STM32H757_CM4, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H757_CM4, GPIOI>::T& peripheral_t<STM32H757_CM4, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H757_CM4, GPIOJ>::T& peripheral_t<STM32H757_CM4, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H757_CM4, GPIOK>::T& peripheral_t<STM32H757_CM4, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H757_CM7, GPIOA>::T& peripheral_t<STM32H757_CM7, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H757_CM7, GPIOB>::T& peripheral_t<STM32H757_CM7, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H757_CM7, GPIOC>::T& peripheral_t<STM32H757_CM7, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H757_CM7, GPIOD>::T& peripheral_t<STM32H757_CM7, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H757_CM7, GPIOE>::T& peripheral_t<STM32H757_CM7, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H757_CM7, GPIOF>::T& peripheral_t<STM32H757_CM7, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H757_CM7, GPIOG>::T& peripheral_t<STM32H757_CM7, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H757_CM7, GPIOH>::T& peripheral_t<STM32H757_CM7, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H757_CM7, GPIOI>::T& peripheral_t<STM32H757_CM7, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H757_CM7, GPIOJ>::T& peripheral_t<STM32H757_CM7, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H757_CM7, GPIOK>::T& peripheral_t<STM32H757_CM7, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H7A3x, GPIOA>::T& peripheral_t<STM32H7A3x, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H7A3x, GPIOB>::T& peripheral_t<STM32H7A3x, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H7A3x, GPIOC>::T& peripheral_t<STM32H7A3x, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H7A3x, GPIOD>::T& peripheral_t<STM32H7A3x, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H7A3x, GPIOE>::T& peripheral_t<STM32H7A3x, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H7A3x, GPIOF>::T& peripheral_t<STM32H7A3x, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H7A3x, GPIOG>::T& peripheral_t<STM32H7A3x, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H7A3x, GPIOH>::T& peripheral_t<STM32H7A3x, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H7A3x, GPIOI>::T& peripheral_t<STM32H7A3x, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H7A3x, GPIOJ>::T& peripheral_t<STM32H7A3x, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H7A3x, GPIOK>::T& peripheral_t<STM32H7A3x, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H7B0x, GPIOA>::T& peripheral_t<STM32H7B0x, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H7B0x, GPIOB>::T& peripheral_t<STM32H7B0x, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H7B0x, GPIOC>::T& peripheral_t<STM32H7B0x, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H7B0x, GPIOD>::T& peripheral_t<STM32H7B0x, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H7B0x, GPIOE>::T& peripheral_t<STM32H7B0x, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H7B0x, GPIOF>::T& peripheral_t<STM32H7B0x, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H7B0x, GPIOG>::T& peripheral_t<STM32H7B0x, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H7B0x, GPIOH>::T& peripheral_t<STM32H7B0x, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H7B0x, GPIOI>::T& peripheral_t<STM32H7B0x, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H7B0x, GPIOJ>::T& peripheral_t<STM32H7B0x, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H7B0x, GPIOK>::T& peripheral_t<STM32H7B0x, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H7B3x, GPIOA>::T& peripheral_t<STM32H7B3x, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H7B3x, GPIOB>::T& peripheral_t<STM32H7B3x, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H7B3x, GPIOC>::T& peripheral_t<STM32H7B3x, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H7B3x, GPIOD>::T& peripheral_t<STM32H7B3x, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H7B3x, GPIOE>::T& peripheral_t<STM32H7B3x, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H7B3x, GPIOF>::T& peripheral_t<STM32H7B3x, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H7B3x, GPIOG>::T& peripheral_t<STM32H7B3x, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H7B3x, GPIOH>::T& peripheral_t<STM32H7B3x, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H7B3x, GPIOI>::T& peripheral_t<STM32H7B3x, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H7B3x, GPIOJ>::T& peripheral_t<STM32H7B3x, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H7B3x, GPIOK>::T& peripheral_t<STM32H7B3x, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H750x, GPIOA>::T& peripheral_t<STM32H750x, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOA>::T*>(0x58020000);

typename peripheral_t<STM32H750x, GPIOB>::T& peripheral_t<STM32H750x, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOB>::T*>(0x58020400);

typename peripheral_t<STM32H750x, GPIOC>::T& peripheral_t<STM32H750x, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOC>::T*>(0x58020800);

typename peripheral_t<STM32H750x, GPIOD>::T& peripheral_t<STM32H750x, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOD>::T*>(0x58020c00);

typename peripheral_t<STM32H750x, GPIOE>::T& peripheral_t<STM32H750x, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOE>::T*>(0x58021000);

typename peripheral_t<STM32H750x, GPIOF>::T& peripheral_t<STM32H750x, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOF>::T*>(0x58021400);

typename peripheral_t<STM32H750x, GPIOG>::T& peripheral_t<STM32H750x, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOG>::T*>(0x58021800);

typename peripheral_t<STM32H750x, GPIOH>::T& peripheral_t<STM32H750x, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOH>::T*>(0x58021c00);

typename peripheral_t<STM32H750x, GPIOI>::T& peripheral_t<STM32H750x, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOI>::T*>(0x58022000);

typename peripheral_t<STM32H750x, GPIOJ>::T& peripheral_t<STM32H750x, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOJ>::T*>(0x58022400);

typename peripheral_t<STM32H750x, GPIOK>::T& peripheral_t<STM32H750x, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, GPIOK>::T*>(0x58022800);

typename peripheral_t<STM32H750x, HASH>::T& peripheral_t<STM32H750x, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H753, HASH>::T& peripheral_t<STM32H753, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H755_CM4, HASH>::T& peripheral_t<STM32H755_CM4, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H755_CM7, HASH>::T& peripheral_t<STM32H755_CM7, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H757_CM4, HASH>::T& peripheral_t<STM32H757_CM4, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H757_CM7, HASH>::T& peripheral_t<STM32H757_CM7, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H7B0x, HASH>::T& peripheral_t<STM32H7B0x, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H7B3x, HASH>::T& peripheral_t<STM32H7B3x, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HASH>::T*>(0x48021400);

typename peripheral_t<STM32H742x, HRTIM_Master>::T& peripheral_t<STM32H742x, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H743, HRTIM_Master>::T& peripheral_t<STM32H743, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H745_CM4, HRTIM_Master>::T& peripheral_t<STM32H745_CM4, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H745_CM7, HRTIM_Master>::T& peripheral_t<STM32H745_CM7, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H747_CM4, HRTIM_Master>::T& peripheral_t<STM32H747_CM4, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H747_CM7, HRTIM_Master>::T& peripheral_t<STM32H747_CM7, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H750x, HRTIM_Master>::T& peripheral_t<STM32H750x, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H753, HRTIM_Master>::T& peripheral_t<STM32H753, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H755_CM4, HRTIM_Master>::T& peripheral_t<STM32H755_CM4, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H755_CM7, HRTIM_Master>::T& peripheral_t<STM32H755_CM7, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H757_CM4, HRTIM_Master>::T& peripheral_t<STM32H757_CM4, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H757_CM7, HRTIM_Master>::T& peripheral_t<STM32H757_CM7, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H7A3x, HRTIM_Master>::T& peripheral_t<STM32H7A3x, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H7B0x, HRTIM_Master>::T& peripheral_t<STM32H7B0x, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H7B3x, HRTIM_Master>::T& peripheral_t<STM32H7B3x, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32H742x, HRTIM_TIMA>::T& peripheral_t<STM32H742x, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H743, HRTIM_TIMA>::T& peripheral_t<STM32H743, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H745_CM4, HRTIM_TIMA>::T& peripheral_t<STM32H745_CM4, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H745_CM7, HRTIM_TIMA>::T& peripheral_t<STM32H745_CM7, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H747_CM4, HRTIM_TIMA>::T& peripheral_t<STM32H747_CM4, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H747_CM7, HRTIM_TIMA>::T& peripheral_t<STM32H747_CM7, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H750x, HRTIM_TIMA>::T& peripheral_t<STM32H750x, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H753, HRTIM_TIMA>::T& peripheral_t<STM32H753, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H755_CM4, HRTIM_TIMA>::T& peripheral_t<STM32H755_CM4, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H755_CM7, HRTIM_TIMA>::T& peripheral_t<STM32H755_CM7, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H757_CM4, HRTIM_TIMA>::T& peripheral_t<STM32H757_CM4, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H757_CM7, HRTIM_TIMA>::T& peripheral_t<STM32H757_CM7, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H7A3x, HRTIM_TIMA>::T& peripheral_t<STM32H7A3x, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H7B0x, HRTIM_TIMA>::T& peripheral_t<STM32H7B0x, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H7B3x, HRTIM_TIMA>::T& peripheral_t<STM32H7B3x, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32H742x, HRTIM_TIMB>::T& peripheral_t<STM32H742x, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H743, HRTIM_TIMB>::T& peripheral_t<STM32H743, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H745_CM4, HRTIM_TIMB>::T& peripheral_t<STM32H745_CM4, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H745_CM7, HRTIM_TIMB>::T& peripheral_t<STM32H745_CM7, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H747_CM4, HRTIM_TIMB>::T& peripheral_t<STM32H747_CM4, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H747_CM7, HRTIM_TIMB>::T& peripheral_t<STM32H747_CM7, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H750x, HRTIM_TIMB>::T& peripheral_t<STM32H750x, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H753, HRTIM_TIMB>::T& peripheral_t<STM32H753, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H755_CM4, HRTIM_TIMB>::T& peripheral_t<STM32H755_CM4, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H755_CM7, HRTIM_TIMB>::T& peripheral_t<STM32H755_CM7, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H757_CM4, HRTIM_TIMB>::T& peripheral_t<STM32H757_CM4, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H757_CM7, HRTIM_TIMB>::T& peripheral_t<STM32H757_CM7, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H7A3x, HRTIM_TIMB>::T& peripheral_t<STM32H7A3x, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H7B0x, HRTIM_TIMB>::T& peripheral_t<STM32H7B0x, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H7B3x, HRTIM_TIMB>::T& peripheral_t<STM32H7B3x, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32H742x, HRTIM_TIMC>::T& peripheral_t<STM32H742x, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H743, HRTIM_TIMC>::T& peripheral_t<STM32H743, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H745_CM4, HRTIM_TIMC>::T& peripheral_t<STM32H745_CM4, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H745_CM7, HRTIM_TIMC>::T& peripheral_t<STM32H745_CM7, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H747_CM4, HRTIM_TIMC>::T& peripheral_t<STM32H747_CM4, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H747_CM7, HRTIM_TIMC>::T& peripheral_t<STM32H747_CM7, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H750x, HRTIM_TIMC>::T& peripheral_t<STM32H750x, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H753, HRTIM_TIMC>::T& peripheral_t<STM32H753, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H755_CM4, HRTIM_TIMC>::T& peripheral_t<STM32H755_CM4, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H755_CM7, HRTIM_TIMC>::T& peripheral_t<STM32H755_CM7, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H757_CM4, HRTIM_TIMC>::T& peripheral_t<STM32H757_CM4, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H757_CM7, HRTIM_TIMC>::T& peripheral_t<STM32H757_CM7, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H7A3x, HRTIM_TIMC>::T& peripheral_t<STM32H7A3x, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H7B0x, HRTIM_TIMC>::T& peripheral_t<STM32H7B0x, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H7B3x, HRTIM_TIMC>::T& peripheral_t<STM32H7B3x, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32H742x, HRTIM_TIMD>::T& peripheral_t<STM32H742x, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H743, HRTIM_TIMD>::T& peripheral_t<STM32H743, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H745_CM4, HRTIM_TIMD>::T& peripheral_t<STM32H745_CM4, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H745_CM7, HRTIM_TIMD>::T& peripheral_t<STM32H745_CM7, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H747_CM4, HRTIM_TIMD>::T& peripheral_t<STM32H747_CM4, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H747_CM7, HRTIM_TIMD>::T& peripheral_t<STM32H747_CM7, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H750x, HRTIM_TIMD>::T& peripheral_t<STM32H750x, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H753, HRTIM_TIMD>::T& peripheral_t<STM32H753, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H755_CM4, HRTIM_TIMD>::T& peripheral_t<STM32H755_CM4, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H755_CM7, HRTIM_TIMD>::T& peripheral_t<STM32H755_CM7, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H757_CM4, HRTIM_TIMD>::T& peripheral_t<STM32H757_CM4, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H757_CM7, HRTIM_TIMD>::T& peripheral_t<STM32H757_CM7, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H7A3x, HRTIM_TIMD>::T& peripheral_t<STM32H7A3x, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H7B0x, HRTIM_TIMD>::T& peripheral_t<STM32H7B0x, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H7B3x, HRTIM_TIMD>::T& peripheral_t<STM32H7B3x, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32H742x, HRTIM_TIME>::T& peripheral_t<STM32H742x, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H743, HRTIM_TIME>::T& peripheral_t<STM32H743, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H745_CM4, HRTIM_TIME>::T& peripheral_t<STM32H745_CM4, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H745_CM7, HRTIM_TIME>::T& peripheral_t<STM32H745_CM7, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H747_CM4, HRTIM_TIME>::T& peripheral_t<STM32H747_CM4, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H747_CM7, HRTIM_TIME>::T& peripheral_t<STM32H747_CM7, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H750x, HRTIM_TIME>::T& peripheral_t<STM32H750x, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H753, HRTIM_TIME>::T& peripheral_t<STM32H753, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H755_CM4, HRTIM_TIME>::T& peripheral_t<STM32H755_CM4, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H755_CM7, HRTIM_TIME>::T& peripheral_t<STM32H755_CM7, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H757_CM4, HRTIM_TIME>::T& peripheral_t<STM32H757_CM4, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H757_CM7, HRTIM_TIME>::T& peripheral_t<STM32H757_CM7, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H7A3x, HRTIM_TIME>::T& peripheral_t<STM32H7A3x, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H7B0x, HRTIM_TIME>::T& peripheral_t<STM32H7B0x, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H7B3x, HRTIM_TIME>::T& peripheral_t<STM32H7B3x, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32H742x, HRTIM_Common>::T& peripheral_t<STM32H742x, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H743, HRTIM_Common>::T& peripheral_t<STM32H743, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H745_CM4, HRTIM_Common>::T& peripheral_t<STM32H745_CM4, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H745_CM7, HRTIM_Common>::T& peripheral_t<STM32H745_CM7, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H747_CM4, HRTIM_Common>::T& peripheral_t<STM32H747_CM4, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H747_CM7, HRTIM_Common>::T& peripheral_t<STM32H747_CM7, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H750x, HRTIM_Common>::T& peripheral_t<STM32H750x, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H753, HRTIM_Common>::T& peripheral_t<STM32H753, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H755_CM4, HRTIM_Common>::T& peripheral_t<STM32H755_CM4, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H755_CM7, HRTIM_Common>::T& peripheral_t<STM32H755_CM7, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H757_CM4, HRTIM_Common>::T& peripheral_t<STM32H757_CM4, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H757_CM7, HRTIM_Common>::T& peripheral_t<STM32H757_CM7, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H7A3x, HRTIM_Common>::T& peripheral_t<STM32H7A3x, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H7B0x, HRTIM_Common>::T& peripheral_t<STM32H7B0x, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H7B3x, HRTIM_Common>::T& peripheral_t<STM32H7B3x, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32H742x, HSEM>::T& peripheral_t<STM32H742x, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H743, HSEM>::T& peripheral_t<STM32H743, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H745_CM4, HSEM>::T& peripheral_t<STM32H745_CM4, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H745_CM7, HSEM>::T& peripheral_t<STM32H745_CM7, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H747_CM4, HSEM>::T& peripheral_t<STM32H747_CM4, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H747_CM7, HSEM>::T& peripheral_t<STM32H747_CM7, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H750x, HSEM>::T& peripheral_t<STM32H750x, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H753, HSEM>::T& peripheral_t<STM32H753, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H755_CM4, HSEM>::T& peripheral_t<STM32H755_CM4, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H755_CM7, HSEM>::T& peripheral_t<STM32H755_CM7, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H757_CM4, HSEM>::T& peripheral_t<STM32H757_CM4, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H757_CM7, HSEM>::T& peripheral_t<STM32H757_CM7, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, HSEM>::T*>(0x58026400);

typename peripheral_t<STM32H7B0x, HSEM>::T& peripheral_t<STM32H7B0x, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, HSEM>::T*>(0x48020800);

typename peripheral_t<STM32H7B3x, HSEM>::T& peripheral_t<STM32H7B3x, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, HSEM>::T*>(0x48020800);

typename peripheral_t<STM32H7A3x, HSEM>::T& peripheral_t<STM32H7A3x, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, HSEM>::T*>(0x48020800);

typename peripheral_t<STM32H742x, I2C1>::T& peripheral_t<STM32H742x, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H742x, I2C2>::T& peripheral_t<STM32H742x, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H742x, I2C3>::T& peripheral_t<STM32H742x, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H742x, I2C4>::T& peripheral_t<STM32H742x, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H743, I2C1>::T& peripheral_t<STM32H743, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H743, I2C2>::T& peripheral_t<STM32H743, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H743, I2C3>::T& peripheral_t<STM32H743, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H743, I2C4>::T& peripheral_t<STM32H743, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H745_CM4, I2C1>::T& peripheral_t<STM32H745_CM4, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H745_CM4, I2C2>::T& peripheral_t<STM32H745_CM4, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H745_CM4, I2C3>::T& peripheral_t<STM32H745_CM4, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H745_CM4, I2C4>::T& peripheral_t<STM32H745_CM4, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H745_CM7, I2C1>::T& peripheral_t<STM32H745_CM7, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H745_CM7, I2C2>::T& peripheral_t<STM32H745_CM7, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H745_CM7, I2C3>::T& peripheral_t<STM32H745_CM7, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H745_CM7, I2C4>::T& peripheral_t<STM32H745_CM7, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H747_CM4, I2C1>::T& peripheral_t<STM32H747_CM4, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H747_CM4, I2C2>::T& peripheral_t<STM32H747_CM4, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H747_CM4, I2C3>::T& peripheral_t<STM32H747_CM4, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H747_CM4, I2C4>::T& peripheral_t<STM32H747_CM4, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H747_CM7, I2C1>::T& peripheral_t<STM32H747_CM7, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H747_CM7, I2C2>::T& peripheral_t<STM32H747_CM7, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H747_CM7, I2C3>::T& peripheral_t<STM32H747_CM7, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H747_CM7, I2C4>::T& peripheral_t<STM32H747_CM7, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H753, I2C1>::T& peripheral_t<STM32H753, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H753, I2C2>::T& peripheral_t<STM32H753, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H753, I2C3>::T& peripheral_t<STM32H753, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H753, I2C4>::T& peripheral_t<STM32H753, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H755_CM4, I2C1>::T& peripheral_t<STM32H755_CM4, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H755_CM4, I2C2>::T& peripheral_t<STM32H755_CM4, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H755_CM4, I2C3>::T& peripheral_t<STM32H755_CM4, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H755_CM4, I2C4>::T& peripheral_t<STM32H755_CM4, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H755_CM7, I2C1>::T& peripheral_t<STM32H755_CM7, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H755_CM7, I2C2>::T& peripheral_t<STM32H755_CM7, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H755_CM7, I2C3>::T& peripheral_t<STM32H755_CM7, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H755_CM7, I2C4>::T& peripheral_t<STM32H755_CM7, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H757_CM4, I2C1>::T& peripheral_t<STM32H757_CM4, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H757_CM4, I2C2>::T& peripheral_t<STM32H757_CM4, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H757_CM4, I2C3>::T& peripheral_t<STM32H757_CM4, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H757_CM4, I2C4>::T& peripheral_t<STM32H757_CM4, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H757_CM7, I2C1>::T& peripheral_t<STM32H757_CM7, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H757_CM7, I2C2>::T& peripheral_t<STM32H757_CM7, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H757_CM7, I2C3>::T& peripheral_t<STM32H757_CM7, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H757_CM7, I2C4>::T& peripheral_t<STM32H757_CM7, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H7A3x, I2C1>::T& peripheral_t<STM32H7A3x, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H7A3x, I2C2>::T& peripheral_t<STM32H7A3x, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H7B0x, I2C1>::T& peripheral_t<STM32H7B0x, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H7B0x, I2C2>::T& peripheral_t<STM32H7B0x, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H7B3x, I2C1>::T& peripheral_t<STM32H7B3x, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H7B3x, I2C2>::T& peripheral_t<STM32H7B3x, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H750x, I2C1>::T& peripheral_t<STM32H750x, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32H750x, I2C2>::T& peripheral_t<STM32H750x, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32H750x, I2C3>::T& peripheral_t<STM32H750x, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H750x, I2C4>::T& peripheral_t<STM32H750x, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H7A3x, I2C3>::T& peripheral_t<STM32H7A3x, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H7A3x, I2C4>::T& peripheral_t<STM32H7A3x, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H7B0x, I2C3>::T& peripheral_t<STM32H7B0x, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H7B0x, I2C4>::T& peripheral_t<STM32H7B0x, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H7B3x, I2C3>::T& peripheral_t<STM32H7B3x, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32H7B3x, I2C4>::T& peripheral_t<STM32H7B3x, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, I2C4>::T*>(0x58001c00);

typename peripheral_t<STM32H742x, IWDG>::T& peripheral_t<STM32H742x, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H743, IWDG>::T& peripheral_t<STM32H743, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H745_CM4, IWDG1>::T& peripheral_t<STM32H745_CM4, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H745_CM4, IWDG2>::T& peripheral_t<STM32H745_CM4, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H745_CM7, IWDG1>::T& peripheral_t<STM32H745_CM7, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H745_CM7, IWDG2>::T& peripheral_t<STM32H745_CM7, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H747_CM4, IWDG1>::T& peripheral_t<STM32H747_CM4, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H747_CM4, IWDG2>::T& peripheral_t<STM32H747_CM4, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H747_CM7, IWDG1>::T& peripheral_t<STM32H747_CM7, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H747_CM7, IWDG2>::T& peripheral_t<STM32H747_CM7, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H753, IWDG>::T& peripheral_t<STM32H753, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H755_CM4, IWDG1>::T& peripheral_t<STM32H755_CM4, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H755_CM4, IWDG2>::T& peripheral_t<STM32H755_CM4, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H755_CM7, IWDG1>::T& peripheral_t<STM32H755_CM7, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H755_CM7, IWDG2>::T& peripheral_t<STM32H755_CM7, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H757_CM4, IWDG1>::T& peripheral_t<STM32H757_CM4, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H757_CM4, IWDG2>::T& peripheral_t<STM32H757_CM4, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H757_CM7, IWDG1>::T& peripheral_t<STM32H757_CM7, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, IWDG1>::T*>(0x58004800);

typename peripheral_t<STM32H757_CM7, IWDG2>::T& peripheral_t<STM32H757_CM7, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, IWDG2>::T*>(0x58004c00);

typename peripheral_t<STM32H750x, IWDG>::T& peripheral_t<STM32H750x, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H7A3x, IWDG>::T& peripheral_t<STM32H7A3x, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H7B0x, IWDG>::T& peripheral_t<STM32H7B0x, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H7B3x, IWDG>::T& peripheral_t<STM32H7B3x, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, IWDG>::T*>(0x58004800);

typename peripheral_t<STM32H742x, JPEG>::T& peripheral_t<STM32H742x, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H743, JPEG>::T& peripheral_t<STM32H743, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H745_CM4, JPEG>::T& peripheral_t<STM32H745_CM4, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H745_CM7, JPEG>::T& peripheral_t<STM32H745_CM7, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H747_CM4, JPEG>::T& peripheral_t<STM32H747_CM4, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H747_CM7, JPEG>::T& peripheral_t<STM32H747_CM7, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H753, JPEG>::T& peripheral_t<STM32H753, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H755_CM4, JPEG>::T& peripheral_t<STM32H755_CM4, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H755_CM7, JPEG>::T& peripheral_t<STM32H755_CM7, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H757_CM4, JPEG>::T& peripheral_t<STM32H757_CM4, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H757_CM7, JPEG>::T& peripheral_t<STM32H757_CM7, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H7A3x, JPEG>::T& peripheral_t<STM32H7A3x, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H750x, JPEG>::T& peripheral_t<STM32H750x, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H7B0x, JPEG>::T& peripheral_t<STM32H7B0x, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H7B3x, JPEG>::T& peripheral_t<STM32H7B3x, JPEG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, JPEG>::T*>(0x52003000);

typename peripheral_t<STM32H742x, LPTIM1>::T& peripheral_t<STM32H742x, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H742x, LPTIM2>::T& peripheral_t<STM32H742x, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H743, LPTIM1>::T& peripheral_t<STM32H743, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H743, LPTIM2>::T& peripheral_t<STM32H743, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H745_CM4, LPTIM1>::T& peripheral_t<STM32H745_CM4, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H745_CM4, LPTIM2>::T& peripheral_t<STM32H745_CM4, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H745_CM7, LPTIM1>::T& peripheral_t<STM32H745_CM7, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H745_CM7, LPTIM2>::T& peripheral_t<STM32H745_CM7, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H747_CM4, LPTIM1>::T& peripheral_t<STM32H747_CM4, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H747_CM4, LPTIM2>::T& peripheral_t<STM32H747_CM4, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H747_CM7, LPTIM1>::T& peripheral_t<STM32H747_CM7, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H747_CM7, LPTIM2>::T& peripheral_t<STM32H747_CM7, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H753, LPTIM1>::T& peripheral_t<STM32H753, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H753, LPTIM2>::T& peripheral_t<STM32H753, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H755_CM4, LPTIM1>::T& peripheral_t<STM32H755_CM4, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H755_CM4, LPTIM2>::T& peripheral_t<STM32H755_CM4, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H755_CM7, LPTIM1>::T& peripheral_t<STM32H755_CM7, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H755_CM7, LPTIM2>::T& peripheral_t<STM32H755_CM7, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H757_CM4, LPTIM1>::T& peripheral_t<STM32H757_CM4, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H757_CM4, LPTIM2>::T& peripheral_t<STM32H757_CM4, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H757_CM7, LPTIM1>::T& peripheral_t<STM32H757_CM7, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H757_CM7, LPTIM2>::T& peripheral_t<STM32H757_CM7, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H742x, LPTIM3>::T& peripheral_t<STM32H742x, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H742x, LPTIM4>::T& peripheral_t<STM32H742x, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H742x, LPTIM5>::T& peripheral_t<STM32H742x, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H743, LPTIM3>::T& peripheral_t<STM32H743, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H743, LPTIM4>::T& peripheral_t<STM32H743, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H743, LPTIM5>::T& peripheral_t<STM32H743, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H745_CM4, LPTIM3>::T& peripheral_t<STM32H745_CM4, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H745_CM4, LPTIM4>::T& peripheral_t<STM32H745_CM4, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H745_CM4, LPTIM5>::T& peripheral_t<STM32H745_CM4, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H745_CM7, LPTIM3>::T& peripheral_t<STM32H745_CM7, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H745_CM7, LPTIM4>::T& peripheral_t<STM32H745_CM7, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H745_CM7, LPTIM5>::T& peripheral_t<STM32H745_CM7, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H747_CM4, LPTIM3>::T& peripheral_t<STM32H747_CM4, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H747_CM4, LPTIM4>::T& peripheral_t<STM32H747_CM4, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H747_CM4, LPTIM5>::T& peripheral_t<STM32H747_CM4, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H747_CM7, LPTIM3>::T& peripheral_t<STM32H747_CM7, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H747_CM7, LPTIM4>::T& peripheral_t<STM32H747_CM7, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H747_CM7, LPTIM5>::T& peripheral_t<STM32H747_CM7, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H753, LPTIM3>::T& peripheral_t<STM32H753, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H753, LPTIM4>::T& peripheral_t<STM32H753, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H753, LPTIM5>::T& peripheral_t<STM32H753, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H755_CM4, LPTIM3>::T& peripheral_t<STM32H755_CM4, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H755_CM4, LPTIM4>::T& peripheral_t<STM32H755_CM4, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H755_CM4, LPTIM5>::T& peripheral_t<STM32H755_CM4, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H755_CM7, LPTIM3>::T& peripheral_t<STM32H755_CM7, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H755_CM7, LPTIM4>::T& peripheral_t<STM32H755_CM7, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H755_CM7, LPTIM5>::T& peripheral_t<STM32H755_CM7, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H757_CM4, LPTIM3>::T& peripheral_t<STM32H757_CM4, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H757_CM4, LPTIM4>::T& peripheral_t<STM32H757_CM4, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H757_CM4, LPTIM5>::T& peripheral_t<STM32H757_CM4, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H757_CM7, LPTIM3>::T& peripheral_t<STM32H757_CM7, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H757_CM7, LPTIM4>::T& peripheral_t<STM32H757_CM7, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H757_CM7, LPTIM5>::T& peripheral_t<STM32H757_CM7, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H750x, LPTIM1>::T& peripheral_t<STM32H750x, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H750x, LPTIM2>::T& peripheral_t<STM32H750x, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H7A3x, LPTIM1>::T& peripheral_t<STM32H7A3x, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H7A3x, LPTIM2>::T& peripheral_t<STM32H7A3x, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H7B0x, LPTIM1>::T& peripheral_t<STM32H7B0x, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H7B0x, LPTIM2>::T& peripheral_t<STM32H7B0x, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H7B3x, LPTIM1>::T& peripheral_t<STM32H7B3x, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, LPTIM1>::T*>(0x40002400);

typename peripheral_t<STM32H7B3x, LPTIM2>::T& peripheral_t<STM32H7B3x, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, LPTIM2>::T*>(0x58002400);

typename peripheral_t<STM32H750x, LPTIM3>::T& peripheral_t<STM32H750x, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H750x, LPTIM4>::T& peripheral_t<STM32H750x, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LPTIM4>::T*>(0x58002c00);

typename peripheral_t<STM32H750x, LPTIM5>::T& peripheral_t<STM32H750x, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LPTIM5>::T*>(0x58003000);

typename peripheral_t<STM32H7A3x, LPTIM3>::T& peripheral_t<STM32H7A3x, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H7B0x, LPTIM3>::T& peripheral_t<STM32H7B0x, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H7B3x, LPTIM3>::T& peripheral_t<STM32H7B3x, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, LPTIM3>::T*>(0x58002800);

typename peripheral_t<STM32H742x, LPUART1>::T& peripheral_t<STM32H742x, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H743, LPUART1>::T& peripheral_t<STM32H743, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H745_CM4, LPUART1>::T& peripheral_t<STM32H745_CM4, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H745_CM7, LPUART1>::T& peripheral_t<STM32H745_CM7, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H747_CM4, LPUART1>::T& peripheral_t<STM32H747_CM4, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H747_CM7, LPUART1>::T& peripheral_t<STM32H747_CM7, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H750x, LPUART1>::T& peripheral_t<STM32H750x, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H753, LPUART1>::T& peripheral_t<STM32H753, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H755_CM4, LPUART1>::T& peripheral_t<STM32H755_CM4, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H755_CM7, LPUART1>::T& peripheral_t<STM32H755_CM7, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H757_CM4, LPUART1>::T& peripheral_t<STM32H757_CM4, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H757_CM7, LPUART1>::T& peripheral_t<STM32H757_CM7, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H7A3x, LPUART1>::T& peripheral_t<STM32H7A3x, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H7B0x, LPUART1>::T& peripheral_t<STM32H7B0x, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H7B3x, LPUART1>::T& peripheral_t<STM32H7B3x, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, LPUART1>::T*>(0x58000c00);

typename peripheral_t<STM32H742x, LTDC>::T& peripheral_t<STM32H742x, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H743, LTDC>::T& peripheral_t<STM32H743, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H745_CM4, LTDC>::T& peripheral_t<STM32H745_CM4, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H745_CM7, LTDC>::T& peripheral_t<STM32H745_CM7, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H747_CM4, LTDC>::T& peripheral_t<STM32H747_CM4, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H747_CM7, LTDC>::T& peripheral_t<STM32H747_CM7, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H750x, LTDC>::T& peripheral_t<STM32H750x, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H753, LTDC>::T& peripheral_t<STM32H753, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H755_CM4, LTDC>::T& peripheral_t<STM32H755_CM4, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H755_CM7, LTDC>::T& peripheral_t<STM32H755_CM7, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H757_CM4, LTDC>::T& peripheral_t<STM32H757_CM4, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H757_CM7, LTDC>::T& peripheral_t<STM32H757_CM7, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H7A3x, LTDC>::T& peripheral_t<STM32H7A3x, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H7B0x, LTDC>::T& peripheral_t<STM32H7B0x, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H7B3x, LTDC>::T& peripheral_t<STM32H7B3x, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, LTDC>::T*>(0x50001000);

typename peripheral_t<STM32H742x, MDIOS>::T& peripheral_t<STM32H742x, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H743, MDIOS>::T& peripheral_t<STM32H743, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H753, MDIOS>::T& peripheral_t<STM32H753, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H745_CM4, MDIOS>::T& peripheral_t<STM32H745_CM4, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H745_CM7, MDIOS>::T& peripheral_t<STM32H745_CM7, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H747_CM4, MDIOS>::T& peripheral_t<STM32H747_CM4, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H747_CM7, MDIOS>::T& peripheral_t<STM32H747_CM7, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H750x, MDIOS>::T& peripheral_t<STM32H750x, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H755_CM4, MDIOS>::T& peripheral_t<STM32H755_CM4, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H755_CM7, MDIOS>::T& peripheral_t<STM32H755_CM7, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H757_CM4, MDIOS>::T& peripheral_t<STM32H757_CM4, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H757_CM7, MDIOS>::T& peripheral_t<STM32H757_CM7, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H7A3x, MDIOS>::T& peripheral_t<STM32H7A3x, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H7B0x, MDIOS>::T& peripheral_t<STM32H7B0x, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H7B3x, MDIOS>::T& peripheral_t<STM32H7B3x, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, MDIOS>::T*>(0x40009400);

typename peripheral_t<STM32H742x, MDMA>::T& peripheral_t<STM32H742x, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H743, MDMA>::T& peripheral_t<STM32H743, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H745_CM4, MDMA>::T& peripheral_t<STM32H745_CM4, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H745_CM7, MDMA>::T& peripheral_t<STM32H745_CM7, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H747_CM4, MDMA>::T& peripheral_t<STM32H747_CM4, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H747_CM7, MDMA>::T& peripheral_t<STM32H747_CM7, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H750x, MDMA>::T& peripheral_t<STM32H750x, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H753, MDMA>::T& peripheral_t<STM32H753, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H755_CM4, MDMA>::T& peripheral_t<STM32H755_CM4, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H755_CM7, MDMA>::T& peripheral_t<STM32H755_CM7, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H757_CM4, MDMA>::T& peripheral_t<STM32H757_CM4, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H757_CM7, MDMA>::T& peripheral_t<STM32H757_CM7, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H7B0x, MDMA>::T& peripheral_t<STM32H7B0x, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H7B3x, MDMA>::T& peripheral_t<STM32H7B3x, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H7A3x, MDMA>::T& peripheral_t<STM32H7A3x, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, MDMA>::T*>(0x52000000);

typename peripheral_t<STM32H742x, MPU>::T& peripheral_t<STM32H742x, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H743, MPU>::T& peripheral_t<STM32H743, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H745_CM4, MPU>::T& peripheral_t<STM32H745_CM4, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H745_CM7, MPU>::T& peripheral_t<STM32H745_CM7, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H747_CM4, MPU>::T& peripheral_t<STM32H747_CM4, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H747_CM7, MPU>::T& peripheral_t<STM32H747_CM7, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H750x, MPU>::T& peripheral_t<STM32H750x, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H753, MPU>::T& peripheral_t<STM32H753, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H755_CM4, MPU>::T& peripheral_t<STM32H755_CM4, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H755_CM7, MPU>::T& peripheral_t<STM32H755_CM7, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H757_CM4, MPU>::T& peripheral_t<STM32H757_CM4, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H757_CM7, MPU>::T& peripheral_t<STM32H757_CM7, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H7A3x, MPU>::T& peripheral_t<STM32H7A3x, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H7B0x, MPU>::T& peripheral_t<STM32H7B0x, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H7B3x, MPU>::T& peripheral_t<STM32H7B3x, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32H742x, NVIC>::T& peripheral_t<STM32H742x, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H743, NVIC>::T& peripheral_t<STM32H743, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H753, NVIC>::T& peripheral_t<STM32H753, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H742x, NVIC_STIR>::T& peripheral_t<STM32H742x, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H743, NVIC_STIR>::T& peripheral_t<STM32H743, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H745_CM4, NVIC_STIR>::T& peripheral_t<STM32H745_CM4, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H745_CM7, NVIC_STIR>::T& peripheral_t<STM32H745_CM7, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H747_CM4, NVIC_STIR>::T& peripheral_t<STM32H747_CM4, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H747_CM7, NVIC_STIR>::T& peripheral_t<STM32H747_CM7, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H750x, NVIC_STIR>::T& peripheral_t<STM32H750x, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H753, NVIC_STIR>::T& peripheral_t<STM32H753, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H755_CM4, NVIC_STIR>::T& peripheral_t<STM32H755_CM4, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H755_CM7, NVIC_STIR>::T& peripheral_t<STM32H755_CM7, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H757_CM4, NVIC_STIR>::T& peripheral_t<STM32H757_CM4, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H757_CM7, NVIC_STIR>::T& peripheral_t<STM32H757_CM7, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H7A3x, NVIC_STIR>::T& peripheral_t<STM32H7A3x, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H7B0x, NVIC_STIR>::T& peripheral_t<STM32H7B0x, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H7B3x, NVIC_STIR>::T& peripheral_t<STM32H7B3x, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32H745_CM4, NVIC>::T& peripheral_t<STM32H745_CM4, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H745_CM7, NVIC>::T& peripheral_t<STM32H745_CM7, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H747_CM4, NVIC>::T& peripheral_t<STM32H747_CM4, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H747_CM7, NVIC>::T& peripheral_t<STM32H747_CM7, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H755_CM4, NVIC>::T& peripheral_t<STM32H755_CM4, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H755_CM7, NVIC>::T& peripheral_t<STM32H755_CM7, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H757_CM4, NVIC>::T& peripheral_t<STM32H757_CM4, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H757_CM7, NVIC>::T& peripheral_t<STM32H757_CM7, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H750x, NVIC>::T& peripheral_t<STM32H750x, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H7A3x, NVIC>::T& peripheral_t<STM32H7A3x, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H7B0x, NVIC>::T& peripheral_t<STM32H7B0x, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H7B3x, NVIC>::T& peripheral_t<STM32H7B3x, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32H742x, OPAMP>::T& peripheral_t<STM32H742x, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H743, OPAMP>::T& peripheral_t<STM32H743, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H745_CM4, OPAMP>::T& peripheral_t<STM32H745_CM4, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H745_CM7, OPAMP>::T& peripheral_t<STM32H745_CM7, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H747_CM4, OPAMP>::T& peripheral_t<STM32H747_CM4, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H747_CM7, OPAMP>::T& peripheral_t<STM32H747_CM7, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H750x, OPAMP>::T& peripheral_t<STM32H750x, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H753, OPAMP>::T& peripheral_t<STM32H753, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H755_CM4, OPAMP>::T& peripheral_t<STM32H755_CM4, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H755_CM7, OPAMP>::T& peripheral_t<STM32H755_CM7, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H757_CM4, OPAMP>::T& peripheral_t<STM32H757_CM4, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H757_CM7, OPAMP>::T& peripheral_t<STM32H757_CM7, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H7A3x, OPAMP>::T& peripheral_t<STM32H7A3x, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H7B0x, OPAMP>::T& peripheral_t<STM32H7B0x, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H7B3x, OPAMP>::T& peripheral_t<STM32H7B3x, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OPAMP>::T*>(0x40009000);

typename peripheral_t<STM32H7B0x, OTFDEC1>::T& peripheral_t<STM32H7B0x, OTFDEC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OTFDEC1>::T*>(0x5200b800);

typename peripheral_t<STM32H7B0x, OTFDEC2>::T& peripheral_t<STM32H7B0x, OTFDEC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OTFDEC2>::T*>(0x5200bc00);

typename peripheral_t<STM32H7B3x, OTFDEC1>::T& peripheral_t<STM32H7B3x, OTFDEC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OTFDEC1>::T*>(0x5200b800);

typename peripheral_t<STM32H7B3x, OTFDEC2>::T& peripheral_t<STM32H7B3x, OTFDEC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OTFDEC2>::T*>(0x5200bc00);

typename peripheral_t<STM32H7A3x, OCTOSPI2>::T& peripheral_t<STM32H7A3x, OCTOSPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OCTOSPI2>::T*>(0x5200a000);

typename peripheral_t<STM32H7A3x, OCTOSPI1_CONTROL_REGISTER>::T& peripheral_t<STM32H7A3x, OCTOSPI1_CONTROL_REGISTER>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OCTOSPI1_CONTROL_REGISTER>::T*>(0x52005000);

typename peripheral_t<STM32H7B0x, OCTOSPI2>::T& peripheral_t<STM32H7B0x, OCTOSPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OCTOSPI2>::T*>(0x5200a000);

typename peripheral_t<STM32H7B0x, OCTOSPI1_CONTROL_REGISTER>::T& peripheral_t<STM32H7B0x, OCTOSPI1_CONTROL_REGISTER>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OCTOSPI1_CONTROL_REGISTER>::T*>(0x52005000);

typename peripheral_t<STM32H7B3x, OCTOSPI2>::T& peripheral_t<STM32H7B3x, OCTOSPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OCTOSPI2>::T*>(0x5200a000);

typename peripheral_t<STM32H7B3x, OCTOSPI1_CONTROL_REGISTER>::T& peripheral_t<STM32H7B3x, OCTOSPI1_CONTROL_REGISTER>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OCTOSPI1_CONTROL_REGISTER>::T*>(0x52005000);

typename peripheral_t<STM32H7A3x, OctoSPII_O_Manager>::T& peripheral_t<STM32H7A3x, OctoSPII_O_Manager>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OctoSPII_O_Manager>::T*>(0x5200b400);

typename peripheral_t<STM32H7B0x, OctoSPII_O_Manager>::T& peripheral_t<STM32H7B0x, OctoSPII_O_Manager>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OctoSPII_O_Manager>::T*>(0x5200b400);

typename peripheral_t<STM32H7B3x, OctoSPII_O_Manager>::T& peripheral_t<STM32H7B3x, OctoSPII_O_Manager>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OctoSPII_O_Manager>::T*>(0x5200b400);

typename peripheral_t<STM32H742x, PF>::T& peripheral_t<STM32H742x, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H743, PF>::T& peripheral_t<STM32H743, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H745_CM4, PF>::T& peripheral_t<STM32H745_CM4, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H745_CM7, PF>::T& peripheral_t<STM32H745_CM7, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H747_CM4, PF>::T& peripheral_t<STM32H747_CM4, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H747_CM7, PF>::T& peripheral_t<STM32H747_CM7, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H750x, PF>::T& peripheral_t<STM32H750x, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H753, PF>::T& peripheral_t<STM32H753, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H755_CM4, PF>::T& peripheral_t<STM32H755_CM4, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H755_CM7, PF>::T& peripheral_t<STM32H755_CM7, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H757_CM4, PF>::T& peripheral_t<STM32H757_CM4, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H757_CM7, PF>::T& peripheral_t<STM32H757_CM7, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H7A3x, PF>::T& peripheral_t<STM32H7A3x, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H7B0x, PF>::T& peripheral_t<STM32H7B0x, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H7B3x, PF>::T& peripheral_t<STM32H7B3x, PF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, PF>::T*>(0xe000ed78);

typename peripheral_t<STM32H742x, PWR>::T& peripheral_t<STM32H742x, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H743, PWR>::T& peripheral_t<STM32H743, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H753, PWR>::T& peripheral_t<STM32H753, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H745_CM4, PWR>::T& peripheral_t<STM32H745_CM4, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H745_CM7, PWR>::T& peripheral_t<STM32H745_CM7, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H747_CM4, PWR>::T& peripheral_t<STM32H747_CM4, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H747_CM7, PWR>::T& peripheral_t<STM32H747_CM7, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H755_CM4, PWR>::T& peripheral_t<STM32H755_CM4, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H755_CM7, PWR>::T& peripheral_t<STM32H755_CM7, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H757_CM4, PWR>::T& peripheral_t<STM32H757_CM4, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H757_CM7, PWR>::T& peripheral_t<STM32H757_CM7, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H750x, PWR>::T& peripheral_t<STM32H750x, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H7A3x, PWR>::T& peripheral_t<STM32H7A3x, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H7B0x, PWR>::T& peripheral_t<STM32H7B0x, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H7B3x, PWR>::T& peripheral_t<STM32H7B3x, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, PWR>::T*>(0x58024800);

typename peripheral_t<STM32H742x, QUADSPI>::T& peripheral_t<STM32H742x, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H743, QUADSPI>::T& peripheral_t<STM32H743, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H745_CM4, QUADSPI>::T& peripheral_t<STM32H745_CM4, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H745_CM7, QUADSPI>::T& peripheral_t<STM32H745_CM7, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H747_CM4, QUADSPI>::T& peripheral_t<STM32H747_CM4, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H747_CM7, QUADSPI>::T& peripheral_t<STM32H747_CM7, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H753, QUADSPI>::T& peripheral_t<STM32H753, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H755_CM4, QUADSPI>::T& peripheral_t<STM32H755_CM4, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H755_CM7, QUADSPI>::T& peripheral_t<STM32H755_CM7, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H757_CM4, QUADSPI>::T& peripheral_t<STM32H757_CM4, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H757_CM7, QUADSPI>::T& peripheral_t<STM32H757_CM7, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H750x, QUADSPI>::T& peripheral_t<STM32H750x, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, QUADSPI>::T*>(0x52005000);

typename peripheral_t<STM32H745_CM4, RAMECC1>::T& peripheral_t<STM32H745_CM4, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H745_CM7, RAMECC1>::T& peripheral_t<STM32H745_CM7, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H747_CM4, RAMECC1>::T& peripheral_t<STM32H747_CM4, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H747_CM7, RAMECC1>::T& peripheral_t<STM32H747_CM7, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H755_CM4, RAMECC1>::T& peripheral_t<STM32H755_CM4, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H755_CM7, RAMECC1>::T& peripheral_t<STM32H755_CM7, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H757_CM4, RAMECC1>::T& peripheral_t<STM32H757_CM4, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H757_CM7, RAMECC1>::T& peripheral_t<STM32H757_CM7, RAMECC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, RAMECC1>::T*>(0x52009000);

typename peripheral_t<STM32H7A3x, RAMECC>::T& peripheral_t<STM32H7A3x, RAMECC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, RAMECC>::T*>(0x52009000);

typename peripheral_t<STM32H7B0x, RAMECC>::T& peripheral_t<STM32H7B0x, RAMECC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, RAMECC>::T*>(0x52009000);

typename peripheral_t<STM32H7B3x, RAMECC>::T& peripheral_t<STM32H7B3x, RAMECC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, RAMECC>::T*>(0x52009000);

typename peripheral_t<STM32H745_CM4, RAMECC2>::T& peripheral_t<STM32H745_CM4, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H745_CM7, RAMECC2>::T& peripheral_t<STM32H745_CM7, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H747_CM4, RAMECC2>::T& peripheral_t<STM32H747_CM4, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H747_CM7, RAMECC2>::T& peripheral_t<STM32H747_CM7, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H755_CM4, RAMECC2>::T& peripheral_t<STM32H755_CM4, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H755_CM7, RAMECC2>::T& peripheral_t<STM32H755_CM7, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H757_CM4, RAMECC2>::T& peripheral_t<STM32H757_CM4, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H757_CM7, RAMECC2>::T& peripheral_t<STM32H757_CM7, RAMECC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, RAMECC2>::T*>(0x48023000);

typename peripheral_t<STM32H745_CM4, RAMECC3>::T& peripheral_t<STM32H745_CM4, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H745_CM7, RAMECC3>::T& peripheral_t<STM32H745_CM7, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H747_CM4, RAMECC3>::T& peripheral_t<STM32H747_CM4, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H747_CM7, RAMECC3>::T& peripheral_t<STM32H747_CM7, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H755_CM4, RAMECC3>::T& peripheral_t<STM32H755_CM4, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H755_CM7, RAMECC3>::T& peripheral_t<STM32H755_CM7, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H757_CM4, RAMECC3>::T& peripheral_t<STM32H757_CM4, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H757_CM7, RAMECC3>::T& peripheral_t<STM32H757_CM7, RAMECC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, RAMECC3>::T*>(0x58027000);

typename peripheral_t<STM32H742x, RCC>::T& peripheral_t<STM32H742x, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H743, RCC>::T& peripheral_t<STM32H743, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H753, RCC>::T& peripheral_t<STM32H753, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H745_CM4, RCC>::T& peripheral_t<STM32H745_CM4, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H745_CM7, RCC>::T& peripheral_t<STM32H745_CM7, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H747_CM4, RCC>::T& peripheral_t<STM32H747_CM4, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H747_CM7, RCC>::T& peripheral_t<STM32H747_CM7, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H750x, RCC>::T& peripheral_t<STM32H750x, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H755_CM4, RCC>::T& peripheral_t<STM32H755_CM4, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H755_CM7, RCC>::T& peripheral_t<STM32H755_CM7, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H757_CM4, RCC>::T& peripheral_t<STM32H757_CM4, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H757_CM7, RCC>::T& peripheral_t<STM32H757_CM7, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H7A3x, RCC>::T& peripheral_t<STM32H7A3x, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H7B0x, RCC>::T& peripheral_t<STM32H7B0x, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H7B3x, RCC>::T& peripheral_t<STM32H7B3x, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, RCC>::T*>(0x58024400);

typename peripheral_t<STM32H742x, RNG>::T& peripheral_t<STM32H742x, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H743, RNG>::T& peripheral_t<STM32H743, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H745_CM4, RNG>::T& peripheral_t<STM32H745_CM4, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H745_CM7, RNG>::T& peripheral_t<STM32H745_CM7, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H747_CM4, RNG>::T& peripheral_t<STM32H747_CM4, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H747_CM7, RNG>::T& peripheral_t<STM32H747_CM7, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H753, RNG>::T& peripheral_t<STM32H753, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H755_CM4, RNG>::T& peripheral_t<STM32H755_CM4, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H755_CM7, RNG>::T& peripheral_t<STM32H755_CM7, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H757_CM4, RNG>::T& peripheral_t<STM32H757_CM4, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H757_CM7, RNG>::T& peripheral_t<STM32H757_CM7, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H7A3x, RNG>::T& peripheral_t<STM32H7A3x, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H750x, RNG>::T& peripheral_t<STM32H750x, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H7B0x, RNG>::T& peripheral_t<STM32H7B0x, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H7B3x, RNG>::T& peripheral_t<STM32H7B3x, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, RNG>::T*>(0x48021800);

typename peripheral_t<STM32H742x, RTC>::T& peripheral_t<STM32H742x, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H743, RTC>::T& peripheral_t<STM32H743, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H745_CM4, RTC>::T& peripheral_t<STM32H745_CM4, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H745_CM7, RTC>::T& peripheral_t<STM32H745_CM7, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H747_CM4, RTC>::T& peripheral_t<STM32H747_CM4, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H747_CM7, RTC>::T& peripheral_t<STM32H747_CM7, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H750x, RTC>::T& peripheral_t<STM32H750x, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H753, RTC>::T& peripheral_t<STM32H753, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H755_CM4, RTC>::T& peripheral_t<STM32H755_CM4, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H755_CM7, RTC>::T& peripheral_t<STM32H755_CM7, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H757_CM4, RTC>::T& peripheral_t<STM32H757_CM4, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H757_CM7, RTC>::T& peripheral_t<STM32H757_CM7, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H7A3x, RTC>::T& peripheral_t<STM32H7A3x, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H7B0x, RTC>::T& peripheral_t<STM32H7B0x, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H7B3x, RTC>::T& peripheral_t<STM32H7B3x, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, RTC>::T*>(0x58004000);

typename peripheral_t<STM32H742x, SAI4>::T& peripheral_t<STM32H742x, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H742x, SAI1>::T& peripheral_t<STM32H742x, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H742x, SAI2>::T& peripheral_t<STM32H742x, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H742x, SAI3>::T& peripheral_t<STM32H742x, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H743, SAI4>::T& peripheral_t<STM32H743, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H743, SAI1>::T& peripheral_t<STM32H743, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H743, SAI2>::T& peripheral_t<STM32H743, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H743, SAI3>::T& peripheral_t<STM32H743, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H745_CM4, SAI4>::T& peripheral_t<STM32H745_CM4, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H745_CM4, SAI1>::T& peripheral_t<STM32H745_CM4, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H745_CM4, SAI2>::T& peripheral_t<STM32H745_CM4, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H745_CM4, SAI3>::T& peripheral_t<STM32H745_CM4, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H745_CM7, SAI4>::T& peripheral_t<STM32H745_CM7, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H745_CM7, SAI1>::T& peripheral_t<STM32H745_CM7, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H745_CM7, SAI2>::T& peripheral_t<STM32H745_CM7, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H745_CM7, SAI3>::T& peripheral_t<STM32H745_CM7, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H747_CM4, SAI4>::T& peripheral_t<STM32H747_CM4, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H747_CM4, SAI1>::T& peripheral_t<STM32H747_CM4, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H747_CM4, SAI2>::T& peripheral_t<STM32H747_CM4, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H747_CM4, SAI3>::T& peripheral_t<STM32H747_CM4, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H747_CM7, SAI4>::T& peripheral_t<STM32H747_CM7, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H747_CM7, SAI1>::T& peripheral_t<STM32H747_CM7, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H747_CM7, SAI2>::T& peripheral_t<STM32H747_CM7, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H747_CM7, SAI3>::T& peripheral_t<STM32H747_CM7, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H750x, SAI4>::T& peripheral_t<STM32H750x, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H750x, SAI1>::T& peripheral_t<STM32H750x, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H750x, SAI2>::T& peripheral_t<STM32H750x, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H750x, SAI3>::T& peripheral_t<STM32H750x, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H753, SAI4>::T& peripheral_t<STM32H753, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H753, SAI1>::T& peripheral_t<STM32H753, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H753, SAI2>::T& peripheral_t<STM32H753, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H753, SAI3>::T& peripheral_t<STM32H753, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H755_CM4, SAI4>::T& peripheral_t<STM32H755_CM4, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H755_CM4, SAI1>::T& peripheral_t<STM32H755_CM4, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H755_CM4, SAI2>::T& peripheral_t<STM32H755_CM4, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H755_CM4, SAI3>::T& peripheral_t<STM32H755_CM4, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H755_CM7, SAI4>::T& peripheral_t<STM32H755_CM7, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H755_CM7, SAI1>::T& peripheral_t<STM32H755_CM7, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H755_CM7, SAI2>::T& peripheral_t<STM32H755_CM7, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H755_CM7, SAI3>::T& peripheral_t<STM32H755_CM7, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H757_CM4, SAI4>::T& peripheral_t<STM32H757_CM4, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H757_CM4, SAI1>::T& peripheral_t<STM32H757_CM4, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H757_CM4, SAI2>::T& peripheral_t<STM32H757_CM4, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H757_CM4, SAI3>::T& peripheral_t<STM32H757_CM4, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H757_CM7, SAI4>::T& peripheral_t<STM32H757_CM7, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SAI4>::T*>(0x58005400);

typename peripheral_t<STM32H757_CM7, SAI1>::T& peripheral_t<STM32H757_CM7, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H757_CM7, SAI2>::T& peripheral_t<STM32H757_CM7, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H757_CM7, SAI3>::T& peripheral_t<STM32H757_CM7, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SAI3>::T*>(0x40016000);

typename peripheral_t<STM32H7A3x, SAI1>::T& peripheral_t<STM32H7A3x, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H7A3x, SAI2>::T& peripheral_t<STM32H7A3x, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H7B0x, SAI1>::T& peripheral_t<STM32H7B0x, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H7B0x, SAI2>::T& peripheral_t<STM32H7B0x, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H7B3x, SAI1>::T& peripheral_t<STM32H7B3x, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SAI1>::T*>(0x40015800);

typename peripheral_t<STM32H7B3x, SAI2>::T& peripheral_t<STM32H7B3x, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SAI2>::T*>(0x40015c00);

typename peripheral_t<STM32H742x, SCB_ACTRL>::T& peripheral_t<STM32H742x, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H743, SCB_ACTRL>::T& peripheral_t<STM32H743, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H745_CM4, SCB_ACTRL>::T& peripheral_t<STM32H745_CM4, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H745_CM7, SCB_ACTRL>::T& peripheral_t<STM32H745_CM7, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H747_CM4, SCB_ACTRL>::T& peripheral_t<STM32H747_CM4, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H747_CM7, SCB_ACTRL>::T& peripheral_t<STM32H747_CM7, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H750x, SCB_ACTRL>::T& peripheral_t<STM32H750x, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H753, SCB_ACTRL>::T& peripheral_t<STM32H753, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H755_CM4, SCB_ACTRL>::T& peripheral_t<STM32H755_CM4, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H755_CM7, SCB_ACTRL>::T& peripheral_t<STM32H755_CM7, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H757_CM4, SCB_ACTRL>::T& peripheral_t<STM32H757_CM4, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H757_CM7, SCB_ACTRL>::T& peripheral_t<STM32H757_CM7, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H7A3x, SCB_ACTRL>::T& peripheral_t<STM32H7A3x, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H7B0x, SCB_ACTRL>::T& peripheral_t<STM32H7B0x, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H7B3x, SCB_ACTRL>::T& peripheral_t<STM32H7B3x, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32H742x, SCB>::T& peripheral_t<STM32H742x, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H743, SCB>::T& peripheral_t<STM32H743, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H745_CM4, SCB>::T& peripheral_t<STM32H745_CM4, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H745_CM7, SCB>::T& peripheral_t<STM32H745_CM7, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H747_CM4, SCB>::T& peripheral_t<STM32H747_CM4, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H747_CM7, SCB>::T& peripheral_t<STM32H747_CM7, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H750x, SCB>::T& peripheral_t<STM32H750x, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H753, SCB>::T& peripheral_t<STM32H753, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H755_CM4, SCB>::T& peripheral_t<STM32H755_CM4, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H755_CM7, SCB>::T& peripheral_t<STM32H755_CM7, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H757_CM4, SCB>::T& peripheral_t<STM32H757_CM4, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H757_CM7, SCB>::T& peripheral_t<STM32H757_CM7, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H7A3x, SCB>::T& peripheral_t<STM32H7A3x, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H7B0x, SCB>::T& peripheral_t<STM32H7B0x, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H7B3x, SCB>::T& peripheral_t<STM32H7B3x, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32H742x, SDMMC1>::T& peripheral_t<STM32H742x, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H742x, SDMMC2>::T& peripheral_t<STM32H742x, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H743, SDMMC1>::T& peripheral_t<STM32H743, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H743, SDMMC2>::T& peripheral_t<STM32H743, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H753, SDMMC1>::T& peripheral_t<STM32H753, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H753, SDMMC2>::T& peripheral_t<STM32H753, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H745_CM4, SDMMC1>::T& peripheral_t<STM32H745_CM4, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H745_CM4, SDMMC2>::T& peripheral_t<STM32H745_CM4, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H745_CM7, SDMMC1>::T& peripheral_t<STM32H745_CM7, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H745_CM7, SDMMC2>::T& peripheral_t<STM32H745_CM7, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H747_CM4, SDMMC1>::T& peripheral_t<STM32H747_CM4, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H747_CM4, SDMMC2>::T& peripheral_t<STM32H747_CM4, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H747_CM7, SDMMC1>::T& peripheral_t<STM32H747_CM7, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H747_CM7, SDMMC2>::T& peripheral_t<STM32H747_CM7, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H755_CM4, SDMMC1>::T& peripheral_t<STM32H755_CM4, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H755_CM4, SDMMC2>::T& peripheral_t<STM32H755_CM4, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H755_CM7, SDMMC1>::T& peripheral_t<STM32H755_CM7, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H755_CM7, SDMMC2>::T& peripheral_t<STM32H755_CM7, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H757_CM4, SDMMC1>::T& peripheral_t<STM32H757_CM4, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H757_CM4, SDMMC2>::T& peripheral_t<STM32H757_CM4, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H757_CM7, SDMMC1>::T& peripheral_t<STM32H757_CM7, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H757_CM7, SDMMC2>::T& peripheral_t<STM32H757_CM7, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H750x, SDMMC1>::T& peripheral_t<STM32H750x, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H750x, SDMMC2>::T& peripheral_t<STM32H750x, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H7A3x, SDMMC1>::T& peripheral_t<STM32H7A3x, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H7A3x, SDMMC2>::T& peripheral_t<STM32H7A3x, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H7B0x, SDMMC1>::T& peripheral_t<STM32H7B0x, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H7B0x, SDMMC2>::T& peripheral_t<STM32H7B0x, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H7B3x, SDMMC1>::T& peripheral_t<STM32H7B3x, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SDMMC1>::T*>(0x52007000);

typename peripheral_t<STM32H7B3x, SDMMC2>::T& peripheral_t<STM32H7B3x, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SDMMC2>::T*>(0x48022400);

typename peripheral_t<STM32H742x, SPDIFRX>::T& peripheral_t<STM32H742x, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H743, SPDIFRX>::T& peripheral_t<STM32H743, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H745_CM4, SPDIFRX>::T& peripheral_t<STM32H745_CM4, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H745_CM7, SPDIFRX>::T& peripheral_t<STM32H745_CM7, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H747_CM4, SPDIFRX>::T& peripheral_t<STM32H747_CM4, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H747_CM7, SPDIFRX>::T& peripheral_t<STM32H747_CM7, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H750x, SPDIFRX>::T& peripheral_t<STM32H750x, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H753, SPDIFRX>::T& peripheral_t<STM32H753, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H755_CM4, SPDIFRX>::T& peripheral_t<STM32H755_CM4, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H755_CM7, SPDIFRX>::T& peripheral_t<STM32H755_CM7, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H757_CM4, SPDIFRX>::T& peripheral_t<STM32H757_CM4, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H757_CM7, SPDIFRX>::T& peripheral_t<STM32H757_CM7, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H7A3x, SPDIFRX>::T& peripheral_t<STM32H7A3x, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H7B0x, SPDIFRX>::T& peripheral_t<STM32H7B0x, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H7B3x, SPDIFRX>::T& peripheral_t<STM32H7B3x, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPDIFRX>::T*>(0x40004000);

typename peripheral_t<STM32H742x, SPI1>::T& peripheral_t<STM32H742x, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H742x, SPI2>::T& peripheral_t<STM32H742x, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H742x, SPI3>::T& peripheral_t<STM32H742x, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H742x, SPI4>::T& peripheral_t<STM32H742x, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H742x, SPI5>::T& peripheral_t<STM32H742x, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H742x, SPI6>::T& peripheral_t<STM32H742x, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H743, SPI1>::T& peripheral_t<STM32H743, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H743, SPI2>::T& peripheral_t<STM32H743, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H743, SPI3>::T& peripheral_t<STM32H743, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H743, SPI4>::T& peripheral_t<STM32H743, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H743, SPI5>::T& peripheral_t<STM32H743, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H743, SPI6>::T& peripheral_t<STM32H743, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H745_CM4, SPI1>::T& peripheral_t<STM32H745_CM4, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H745_CM4, SPI2>::T& peripheral_t<STM32H745_CM4, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H745_CM4, SPI3>::T& peripheral_t<STM32H745_CM4, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H745_CM4, SPI4>::T& peripheral_t<STM32H745_CM4, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H745_CM4, SPI5>::T& peripheral_t<STM32H745_CM4, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H745_CM4, SPI6>::T& peripheral_t<STM32H745_CM4, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H745_CM7, SPI1>::T& peripheral_t<STM32H745_CM7, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H745_CM7, SPI2>::T& peripheral_t<STM32H745_CM7, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H745_CM7, SPI3>::T& peripheral_t<STM32H745_CM7, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H745_CM7, SPI4>::T& peripheral_t<STM32H745_CM7, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H745_CM7, SPI5>::T& peripheral_t<STM32H745_CM7, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H745_CM7, SPI6>::T& peripheral_t<STM32H745_CM7, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H747_CM4, SPI1>::T& peripheral_t<STM32H747_CM4, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H747_CM4, SPI2>::T& peripheral_t<STM32H747_CM4, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H747_CM4, SPI3>::T& peripheral_t<STM32H747_CM4, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H747_CM4, SPI4>::T& peripheral_t<STM32H747_CM4, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H747_CM4, SPI5>::T& peripheral_t<STM32H747_CM4, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H747_CM4, SPI6>::T& peripheral_t<STM32H747_CM4, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H747_CM7, SPI1>::T& peripheral_t<STM32H747_CM7, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H747_CM7, SPI2>::T& peripheral_t<STM32H747_CM7, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H747_CM7, SPI3>::T& peripheral_t<STM32H747_CM7, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H747_CM7, SPI4>::T& peripheral_t<STM32H747_CM7, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H747_CM7, SPI5>::T& peripheral_t<STM32H747_CM7, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H747_CM7, SPI6>::T& peripheral_t<STM32H747_CM7, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H750x, SPI1>::T& peripheral_t<STM32H750x, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H750x, SPI2>::T& peripheral_t<STM32H750x, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H750x, SPI3>::T& peripheral_t<STM32H750x, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H750x, SPI4>::T& peripheral_t<STM32H750x, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H750x, SPI5>::T& peripheral_t<STM32H750x, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H750x, SPI6>::T& peripheral_t<STM32H750x, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H753, SPI1>::T& peripheral_t<STM32H753, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H753, SPI2>::T& peripheral_t<STM32H753, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H753, SPI3>::T& peripheral_t<STM32H753, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H753, SPI4>::T& peripheral_t<STM32H753, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H753, SPI5>::T& peripheral_t<STM32H753, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H753, SPI6>::T& peripheral_t<STM32H753, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H755_CM4, SPI1>::T& peripheral_t<STM32H755_CM4, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H755_CM4, SPI2>::T& peripheral_t<STM32H755_CM4, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H755_CM4, SPI3>::T& peripheral_t<STM32H755_CM4, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H755_CM4, SPI4>::T& peripheral_t<STM32H755_CM4, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H755_CM4, SPI5>::T& peripheral_t<STM32H755_CM4, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H755_CM4, SPI6>::T& peripheral_t<STM32H755_CM4, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H755_CM7, SPI1>::T& peripheral_t<STM32H755_CM7, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H755_CM7, SPI2>::T& peripheral_t<STM32H755_CM7, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H755_CM7, SPI3>::T& peripheral_t<STM32H755_CM7, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H755_CM7, SPI4>::T& peripheral_t<STM32H755_CM7, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H755_CM7, SPI5>::T& peripheral_t<STM32H755_CM7, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H755_CM7, SPI6>::T& peripheral_t<STM32H755_CM7, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H757_CM4, SPI1>::T& peripheral_t<STM32H757_CM4, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H757_CM4, SPI2>::T& peripheral_t<STM32H757_CM4, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H757_CM4, SPI3>::T& peripheral_t<STM32H757_CM4, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H757_CM4, SPI4>::T& peripheral_t<STM32H757_CM4, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H757_CM4, SPI5>::T& peripheral_t<STM32H757_CM4, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H757_CM4, SPI6>::T& peripheral_t<STM32H757_CM4, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H757_CM7, SPI1>::T& peripheral_t<STM32H757_CM7, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H757_CM7, SPI2>::T& peripheral_t<STM32H757_CM7, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H757_CM7, SPI3>::T& peripheral_t<STM32H757_CM7, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H757_CM7, SPI4>::T& peripheral_t<STM32H757_CM7, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H757_CM7, SPI5>::T& peripheral_t<STM32H757_CM7, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H757_CM7, SPI6>::T& peripheral_t<STM32H757_CM7, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H7A3x, SPI1>::T& peripheral_t<STM32H7A3x, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H7A3x, SPI2>::T& peripheral_t<STM32H7A3x, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H7A3x, SPI3>::T& peripheral_t<STM32H7A3x, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H7A3x, SPI4>::T& peripheral_t<STM32H7A3x, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H7A3x, SPI5>::T& peripheral_t<STM32H7A3x, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H7A3x, SPI6>::T& peripheral_t<STM32H7A3x, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H7B0x, SPI1>::T& peripheral_t<STM32H7B0x, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H7B0x, SPI2>::T& peripheral_t<STM32H7B0x, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H7B0x, SPI3>::T& peripheral_t<STM32H7B0x, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H7B0x, SPI4>::T& peripheral_t<STM32H7B0x, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H7B0x, SPI5>::T& peripheral_t<STM32H7B0x, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H7B0x, SPI6>::T& peripheral_t<STM32H7B0x, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H7B3x, SPI1>::T& peripheral_t<STM32H7B3x, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32H7B3x, SPI2>::T& peripheral_t<STM32H7B3x, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32H7B3x, SPI3>::T& peripheral_t<STM32H7B3x, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32H7B3x, SPI4>::T& peripheral_t<STM32H7B3x, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPI4>::T*>(0x40013400);

typename peripheral_t<STM32H7B3x, SPI5>::T& peripheral_t<STM32H7B3x, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPI5>::T*>(0x40015000);

typename peripheral_t<STM32H7B3x, SPI6>::T& peripheral_t<STM32H7B3x, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SPI6>::T*>(0x58001400);

typename peripheral_t<STM32H742x, STK>::T& peripheral_t<STM32H742x, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H743, STK>::T& peripheral_t<STM32H743, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H745_CM4, STK>::T& peripheral_t<STM32H745_CM4, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H745_CM7, STK>::T& peripheral_t<STM32H745_CM7, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H747_CM4, STK>::T& peripheral_t<STM32H747_CM4, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H747_CM7, STK>::T& peripheral_t<STM32H747_CM7, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H750x, STK>::T& peripheral_t<STM32H750x, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H753, STK>::T& peripheral_t<STM32H753, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H755_CM4, STK>::T& peripheral_t<STM32H755_CM4, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H755_CM7, STK>::T& peripheral_t<STM32H755_CM7, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H757_CM4, STK>::T& peripheral_t<STM32H757_CM4, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H757_CM7, STK>::T& peripheral_t<STM32H757_CM7, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H7A3x, STK>::T& peripheral_t<STM32H7A3x, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H7B0x, STK>::T& peripheral_t<STM32H7B0x, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H7B3x, STK>::T& peripheral_t<STM32H7B3x, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, STK>::T*>(0xe000e010);

typename peripheral_t<STM32H742x, SWPMI>::T& peripheral_t<STM32H742x, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H743, SWPMI>::T& peripheral_t<STM32H743, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H745_CM4, SWPMI>::T& peripheral_t<STM32H745_CM4, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H745_CM7, SWPMI>::T& peripheral_t<STM32H745_CM7, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H747_CM4, SWPMI>::T& peripheral_t<STM32H747_CM4, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H747_CM7, SWPMI>::T& peripheral_t<STM32H747_CM7, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H750x, SWPMI>::T& peripheral_t<STM32H750x, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H753, SWPMI>::T& peripheral_t<STM32H753, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H755_CM4, SWPMI>::T& peripheral_t<STM32H755_CM4, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H755_CM7, SWPMI>::T& peripheral_t<STM32H755_CM7, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H757_CM4, SWPMI>::T& peripheral_t<STM32H757_CM4, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H757_CM7, SWPMI>::T& peripheral_t<STM32H757_CM7, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H7A3x, SWPMI>::T& peripheral_t<STM32H7A3x, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H7B0x, SWPMI>::T& peripheral_t<STM32H7B0x, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H7B3x, SWPMI>::T& peripheral_t<STM32H7B3x, SWPMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SWPMI>::T*>(0x40008800);

typename peripheral_t<STM32H742x, SYSCFG>::T& peripheral_t<STM32H742x, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H743, SYSCFG>::T& peripheral_t<STM32H743, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H753, SYSCFG>::T& peripheral_t<STM32H753, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H745_CM4, SYSCFG>::T& peripheral_t<STM32H745_CM4, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H745_CM7, SYSCFG>::T& peripheral_t<STM32H745_CM7, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H747_CM4, SYSCFG>::T& peripheral_t<STM32H747_CM4, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H747_CM7, SYSCFG>::T& peripheral_t<STM32H747_CM7, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H750x, SYSCFG>::T& peripheral_t<STM32H750x, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H755_CM4, SYSCFG>::T& peripheral_t<STM32H755_CM4, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H755_CM7, SYSCFG>::T& peripheral_t<STM32H755_CM7, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H757_CM4, SYSCFG>::T& peripheral_t<STM32H757_CM4, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H757_CM7, SYSCFG>::T& peripheral_t<STM32H757_CM7, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H7A3x, SYSCFG>::T& peripheral_t<STM32H7A3x, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H7B0x, SYSCFG>::T& peripheral_t<STM32H7B0x, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H7B3x, SYSCFG>::T& peripheral_t<STM32H7B3x, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, SYSCFG>::T*>(0x58000400);

typename peripheral_t<STM32H742x, TIM1>::T& peripheral_t<STM32H742x, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H742x, TIM8>::T& peripheral_t<STM32H742x, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H743, TIM1>::T& peripheral_t<STM32H743, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H743, TIM8>::T& peripheral_t<STM32H743, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H745_CM4, TIM1>::T& peripheral_t<STM32H745_CM4, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H745_CM4, TIM8>::T& peripheral_t<STM32H745_CM4, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H745_CM7, TIM1>::T& peripheral_t<STM32H745_CM7, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H745_CM7, TIM8>::T& peripheral_t<STM32H745_CM7, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H747_CM4, TIM1>::T& peripheral_t<STM32H747_CM4, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H747_CM4, TIM8>::T& peripheral_t<STM32H747_CM4, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H747_CM7, TIM1>::T& peripheral_t<STM32H747_CM7, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H747_CM7, TIM8>::T& peripheral_t<STM32H747_CM7, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H750x, TIM1>::T& peripheral_t<STM32H750x, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H750x, TIM8>::T& peripheral_t<STM32H750x, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H753, TIM1>::T& peripheral_t<STM32H753, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H753, TIM8>::T& peripheral_t<STM32H753, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H755_CM4, TIM1>::T& peripheral_t<STM32H755_CM4, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H755_CM4, TIM8>::T& peripheral_t<STM32H755_CM4, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H755_CM7, TIM1>::T& peripheral_t<STM32H755_CM7, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H755_CM7, TIM8>::T& peripheral_t<STM32H755_CM7, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H757_CM4, TIM1>::T& peripheral_t<STM32H757_CM4, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H757_CM4, TIM8>::T& peripheral_t<STM32H757_CM4, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H757_CM7, TIM1>::T& peripheral_t<STM32H757_CM7, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H757_CM7, TIM8>::T& peripheral_t<STM32H757_CM7, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H7A3x, TIM1>::T& peripheral_t<STM32H7A3x, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H7A3x, TIM8>::T& peripheral_t<STM32H7A3x, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H7B0x, TIM1>::T& peripheral_t<STM32H7B0x, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H7B0x, TIM8>::T& peripheral_t<STM32H7B0x, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H7B3x, TIM1>::T& peripheral_t<STM32H7B3x, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32H7B3x, TIM8>::T& peripheral_t<STM32H7B3x, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32H742x, TIM2>::T& peripheral_t<STM32H742x, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H742x, TIM3>::T& peripheral_t<STM32H742x, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H742x, TIM4>::T& peripheral_t<STM32H742x, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H742x, TIM5>::T& peripheral_t<STM32H742x, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H742x, TIM12>::T& peripheral_t<STM32H742x, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H742x, TIM13>::T& peripheral_t<STM32H742x, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H742x, TIM14>::T& peripheral_t<STM32H742x, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H745_CM4, TIM2>::T& peripheral_t<STM32H745_CM4, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H745_CM4, TIM3>::T& peripheral_t<STM32H745_CM4, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H745_CM4, TIM4>::T& peripheral_t<STM32H745_CM4, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H745_CM4, TIM5>::T& peripheral_t<STM32H745_CM4, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H745_CM4, TIM12>::T& peripheral_t<STM32H745_CM4, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H745_CM4, TIM13>::T& peripheral_t<STM32H745_CM4, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H745_CM4, TIM14>::T& peripheral_t<STM32H745_CM4, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H745_CM7, TIM2>::T& peripheral_t<STM32H745_CM7, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H745_CM7, TIM3>::T& peripheral_t<STM32H745_CM7, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H745_CM7, TIM4>::T& peripheral_t<STM32H745_CM7, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H745_CM7, TIM5>::T& peripheral_t<STM32H745_CM7, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H745_CM7, TIM12>::T& peripheral_t<STM32H745_CM7, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H745_CM7, TIM13>::T& peripheral_t<STM32H745_CM7, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H745_CM7, TIM14>::T& peripheral_t<STM32H745_CM7, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H747_CM4, TIM2>::T& peripheral_t<STM32H747_CM4, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H747_CM4, TIM3>::T& peripheral_t<STM32H747_CM4, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H747_CM4, TIM4>::T& peripheral_t<STM32H747_CM4, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H747_CM4, TIM5>::T& peripheral_t<STM32H747_CM4, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H747_CM4, TIM12>::T& peripheral_t<STM32H747_CM4, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H747_CM4, TIM13>::T& peripheral_t<STM32H747_CM4, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H747_CM4, TIM14>::T& peripheral_t<STM32H747_CM4, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H747_CM7, TIM2>::T& peripheral_t<STM32H747_CM7, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H747_CM7, TIM3>::T& peripheral_t<STM32H747_CM7, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H747_CM7, TIM4>::T& peripheral_t<STM32H747_CM7, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H747_CM7, TIM5>::T& peripheral_t<STM32H747_CM7, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H747_CM7, TIM12>::T& peripheral_t<STM32H747_CM7, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H747_CM7, TIM13>::T& peripheral_t<STM32H747_CM7, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H747_CM7, TIM14>::T& peripheral_t<STM32H747_CM7, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H750x, TIM2>::T& peripheral_t<STM32H750x, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H750x, TIM3>::T& peripheral_t<STM32H750x, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H750x, TIM4>::T& peripheral_t<STM32H750x, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H750x, TIM5>::T& peripheral_t<STM32H750x, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H750x, TIM12>::T& peripheral_t<STM32H750x, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H750x, TIM13>::T& peripheral_t<STM32H750x, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H750x, TIM14>::T& peripheral_t<STM32H750x, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H755_CM4, TIM2>::T& peripheral_t<STM32H755_CM4, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H755_CM4, TIM3>::T& peripheral_t<STM32H755_CM4, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H755_CM4, TIM4>::T& peripheral_t<STM32H755_CM4, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H755_CM4, TIM5>::T& peripheral_t<STM32H755_CM4, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H755_CM4, TIM12>::T& peripheral_t<STM32H755_CM4, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H755_CM4, TIM13>::T& peripheral_t<STM32H755_CM4, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H755_CM4, TIM14>::T& peripheral_t<STM32H755_CM4, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H755_CM7, TIM2>::T& peripheral_t<STM32H755_CM7, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H755_CM7, TIM3>::T& peripheral_t<STM32H755_CM7, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H755_CM7, TIM4>::T& peripheral_t<STM32H755_CM7, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H755_CM7, TIM5>::T& peripheral_t<STM32H755_CM7, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H755_CM7, TIM12>::T& peripheral_t<STM32H755_CM7, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H755_CM7, TIM13>::T& peripheral_t<STM32H755_CM7, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H755_CM7, TIM14>::T& peripheral_t<STM32H755_CM7, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H757_CM4, TIM2>::T& peripheral_t<STM32H757_CM4, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H757_CM4, TIM3>::T& peripheral_t<STM32H757_CM4, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H757_CM4, TIM4>::T& peripheral_t<STM32H757_CM4, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H757_CM4, TIM5>::T& peripheral_t<STM32H757_CM4, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H757_CM4, TIM12>::T& peripheral_t<STM32H757_CM4, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H757_CM4, TIM13>::T& peripheral_t<STM32H757_CM4, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H757_CM4, TIM14>::T& peripheral_t<STM32H757_CM4, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H757_CM7, TIM2>::T& peripheral_t<STM32H757_CM7, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H757_CM7, TIM3>::T& peripheral_t<STM32H757_CM7, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H757_CM7, TIM4>::T& peripheral_t<STM32H757_CM7, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H757_CM7, TIM5>::T& peripheral_t<STM32H757_CM7, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H757_CM7, TIM12>::T& peripheral_t<STM32H757_CM7, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H757_CM7, TIM13>::T& peripheral_t<STM32H757_CM7, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H757_CM7, TIM14>::T& peripheral_t<STM32H757_CM7, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H7A3x, TIM2>::T& peripheral_t<STM32H7A3x, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H7A3x, TIM5>::T& peripheral_t<STM32H7A3x, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H7A3x, TIM3>::T& peripheral_t<STM32H7A3x, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H7A3x, TIM4>::T& peripheral_t<STM32H7A3x, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H7A3x, TIM12>::T& peripheral_t<STM32H7A3x, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H7A3x, TIM13>::T& peripheral_t<STM32H7A3x, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H7A3x, TIM14>::T& peripheral_t<STM32H7A3x, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H7B0x, TIM2>::T& peripheral_t<STM32H7B0x, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H7B0x, TIM5>::T& peripheral_t<STM32H7B0x, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H7B0x, TIM3>::T& peripheral_t<STM32H7B0x, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H7B0x, TIM4>::T& peripheral_t<STM32H7B0x, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H7B0x, TIM12>::T& peripheral_t<STM32H7B0x, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H7B0x, TIM13>::T& peripheral_t<STM32H7B0x, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H7B0x, TIM14>::T& peripheral_t<STM32H7B0x, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H7B3x, TIM2>::T& peripheral_t<STM32H7B3x, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H7B3x, TIM5>::T& peripheral_t<STM32H7B3x, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H7B3x, TIM3>::T& peripheral_t<STM32H7B3x, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H7B3x, TIM4>::T& peripheral_t<STM32H7B3x, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H7B3x, TIM12>::T& peripheral_t<STM32H7B3x, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H7B3x, TIM13>::T& peripheral_t<STM32H7B3x, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H7B3x, TIM14>::T& peripheral_t<STM32H7B3x, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H742x, TIM6>::T& peripheral_t<STM32H742x, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H742x, TIM7>::T& peripheral_t<STM32H742x, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H743, TIM6>::T& peripheral_t<STM32H743, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H743, TIM7>::T& peripheral_t<STM32H743, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H745_CM4, TIM6>::T& peripheral_t<STM32H745_CM4, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H745_CM4, TIM7>::T& peripheral_t<STM32H745_CM4, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H745_CM7, TIM6>::T& peripheral_t<STM32H745_CM7, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H745_CM7, TIM7>::T& peripheral_t<STM32H745_CM7, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H747_CM4, TIM6>::T& peripheral_t<STM32H747_CM4, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H747_CM4, TIM7>::T& peripheral_t<STM32H747_CM4, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H747_CM7, TIM6>::T& peripheral_t<STM32H747_CM7, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H747_CM7, TIM7>::T& peripheral_t<STM32H747_CM7, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H750x, TIM6>::T& peripheral_t<STM32H750x, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H750x, TIM7>::T& peripheral_t<STM32H750x, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H753, TIM6>::T& peripheral_t<STM32H753, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H753, TIM7>::T& peripheral_t<STM32H753, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H755_CM4, TIM6>::T& peripheral_t<STM32H755_CM4, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H755_CM4, TIM7>::T& peripheral_t<STM32H755_CM4, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H755_CM7, TIM6>::T& peripheral_t<STM32H755_CM7, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H755_CM7, TIM7>::T& peripheral_t<STM32H755_CM7, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H757_CM4, TIM6>::T& peripheral_t<STM32H757_CM4, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H757_CM4, TIM7>::T& peripheral_t<STM32H757_CM4, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H757_CM7, TIM6>::T& peripheral_t<STM32H757_CM7, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H757_CM7, TIM7>::T& peripheral_t<STM32H757_CM7, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H7A3x, TIM6>::T& peripheral_t<STM32H7A3x, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H7A3x, TIM7>::T& peripheral_t<STM32H7A3x, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H7B0x, TIM6>::T& peripheral_t<STM32H7B0x, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H7B0x, TIM7>::T& peripheral_t<STM32H7B0x, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H7B3x, TIM6>::T& peripheral_t<STM32H7B3x, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32H7B3x, TIM7>::T& peripheral_t<STM32H7B3x, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32H743, TIM2>::T& peripheral_t<STM32H743, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H743, TIM3>::T& peripheral_t<STM32H743, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H743, TIM4>::T& peripheral_t<STM32H743, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H743, TIM5>::T& peripheral_t<STM32H743, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H743, TIM12>::T& peripheral_t<STM32H743, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H743, TIM13>::T& peripheral_t<STM32H743, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H743, TIM14>::T& peripheral_t<STM32H743, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H753, TIM2>::T& peripheral_t<STM32H753, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32H753, TIM3>::T& peripheral_t<STM32H753, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32H753, TIM4>::T& peripheral_t<STM32H753, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32H753, TIM5>::T& peripheral_t<STM32H753, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32H753, TIM12>::T& peripheral_t<STM32H753, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32H753, TIM13>::T& peripheral_t<STM32H753, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32H753, TIM14>::T& peripheral_t<STM32H753, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32H742x, TIM16>::T& peripheral_t<STM32H742x, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H743, TIM16>::T& peripheral_t<STM32H743, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H745_CM4, TIM16>::T& peripheral_t<STM32H745_CM4, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H745_CM7, TIM16>::T& peripheral_t<STM32H745_CM7, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H747_CM4, TIM16>::T& peripheral_t<STM32H747_CM4, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H747_CM7, TIM16>::T& peripheral_t<STM32H747_CM7, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H750x, TIM16>::T& peripheral_t<STM32H750x, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H753, TIM16>::T& peripheral_t<STM32H753, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H755_CM4, TIM16>::T& peripheral_t<STM32H755_CM4, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H755_CM7, TIM16>::T& peripheral_t<STM32H755_CM7, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H757_CM4, TIM16>::T& peripheral_t<STM32H757_CM4, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H757_CM7, TIM16>::T& peripheral_t<STM32H757_CM7, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H7A3x, TIM16>::T& peripheral_t<STM32H7A3x, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H7B0x, TIM16>::T& peripheral_t<STM32H7B0x, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H7B3x, TIM16>::T& peripheral_t<STM32H7B3x, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32H742x, TIM17>::T& peripheral_t<STM32H742x, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H743, TIM17>::T& peripheral_t<STM32H743, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H745_CM4, TIM17>::T& peripheral_t<STM32H745_CM4, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H745_CM7, TIM17>::T& peripheral_t<STM32H745_CM7, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H747_CM4, TIM17>::T& peripheral_t<STM32H747_CM4, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H747_CM7, TIM17>::T& peripheral_t<STM32H747_CM7, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H750x, TIM17>::T& peripheral_t<STM32H750x, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H753, TIM17>::T& peripheral_t<STM32H753, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H755_CM4, TIM17>::T& peripheral_t<STM32H755_CM4, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H755_CM7, TIM17>::T& peripheral_t<STM32H755_CM7, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H757_CM4, TIM17>::T& peripheral_t<STM32H757_CM4, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H757_CM7, TIM17>::T& peripheral_t<STM32H757_CM7, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H7A3x, TIM17>::T& peripheral_t<STM32H7A3x, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H7B0x, TIM17>::T& peripheral_t<STM32H7B0x, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H7B3x, TIM17>::T& peripheral_t<STM32H7B3x, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32H742x, TIM15>::T& peripheral_t<STM32H742x, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H743, TIM15>::T& peripheral_t<STM32H743, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H745_CM4, TIM15>::T& peripheral_t<STM32H745_CM4, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H745_CM7, TIM15>::T& peripheral_t<STM32H745_CM7, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H747_CM4, TIM15>::T& peripheral_t<STM32H747_CM4, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H747_CM7, TIM15>::T& peripheral_t<STM32H747_CM7, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H750x, TIM15>::T& peripheral_t<STM32H750x, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H753, TIM15>::T& peripheral_t<STM32H753, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H755_CM4, TIM15>::T& peripheral_t<STM32H755_CM4, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H755_CM7, TIM15>::T& peripheral_t<STM32H755_CM7, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H757_CM4, TIM15>::T& peripheral_t<STM32H757_CM4, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H757_CM7, TIM15>::T& peripheral_t<STM32H757_CM7, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H7A3x, TIM15>::T& peripheral_t<STM32H7A3x, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H7B0x, TIM15>::T& peripheral_t<STM32H7B0x, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H7B3x, TIM15>::T& peripheral_t<STM32H7B3x, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32H742x, USART1>::T& peripheral_t<STM32H742x, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H742x, USART2>::T& peripheral_t<STM32H742x, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H742x, USART3>::T& peripheral_t<STM32H742x, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H742x, UART4>::T& peripheral_t<STM32H742x, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H742x, UART5>::T& peripheral_t<STM32H742x, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H742x, USART6>::T& peripheral_t<STM32H742x, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H742x, UART7>::T& peripheral_t<STM32H742x, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H742x, UART8>::T& peripheral_t<STM32H742x, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H743, USART1>::T& peripheral_t<STM32H743, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H743, USART2>::T& peripheral_t<STM32H743, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H743, USART3>::T& peripheral_t<STM32H743, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H743, UART4>::T& peripheral_t<STM32H743, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H743, UART5>::T& peripheral_t<STM32H743, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H743, USART6>::T& peripheral_t<STM32H743, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H743, UART7>::T& peripheral_t<STM32H743, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H743, UART8>::T& peripheral_t<STM32H743, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H745_CM4, USART1>::T& peripheral_t<STM32H745_CM4, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H745_CM4, USART2>::T& peripheral_t<STM32H745_CM4, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H745_CM4, USART3>::T& peripheral_t<STM32H745_CM4, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H745_CM4, UART4>::T& peripheral_t<STM32H745_CM4, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H745_CM4, UART5>::T& peripheral_t<STM32H745_CM4, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H745_CM4, USART6>::T& peripheral_t<STM32H745_CM4, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H745_CM4, UART7>::T& peripheral_t<STM32H745_CM4, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H745_CM4, UART8>::T& peripheral_t<STM32H745_CM4, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H745_CM7, USART1>::T& peripheral_t<STM32H745_CM7, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H745_CM7, USART2>::T& peripheral_t<STM32H745_CM7, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H745_CM7, USART3>::T& peripheral_t<STM32H745_CM7, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H745_CM7, UART4>::T& peripheral_t<STM32H745_CM7, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H745_CM7, UART5>::T& peripheral_t<STM32H745_CM7, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H745_CM7, USART6>::T& peripheral_t<STM32H745_CM7, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H745_CM7, UART7>::T& peripheral_t<STM32H745_CM7, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H745_CM7, UART8>::T& peripheral_t<STM32H745_CM7, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H747_CM4, USART1>::T& peripheral_t<STM32H747_CM4, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H747_CM4, USART2>::T& peripheral_t<STM32H747_CM4, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H747_CM4, USART3>::T& peripheral_t<STM32H747_CM4, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H747_CM4, UART4>::T& peripheral_t<STM32H747_CM4, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H747_CM4, UART5>::T& peripheral_t<STM32H747_CM4, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H747_CM4, USART6>::T& peripheral_t<STM32H747_CM4, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H747_CM4, UART7>::T& peripheral_t<STM32H747_CM4, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H747_CM4, UART8>::T& peripheral_t<STM32H747_CM4, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H747_CM7, USART1>::T& peripheral_t<STM32H747_CM7, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H747_CM7, USART2>::T& peripheral_t<STM32H747_CM7, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H747_CM7, USART3>::T& peripheral_t<STM32H747_CM7, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H747_CM7, UART4>::T& peripheral_t<STM32H747_CM7, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H747_CM7, UART5>::T& peripheral_t<STM32H747_CM7, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H747_CM7, USART6>::T& peripheral_t<STM32H747_CM7, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H747_CM7, UART7>::T& peripheral_t<STM32H747_CM7, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H747_CM7, UART8>::T& peripheral_t<STM32H747_CM7, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H750x, USART1>::T& peripheral_t<STM32H750x, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H750x, USART2>::T& peripheral_t<STM32H750x, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H750x, USART3>::T& peripheral_t<STM32H750x, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H750x, UART4>::T& peripheral_t<STM32H750x, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H750x, UART5>::T& peripheral_t<STM32H750x, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H750x, USART6>::T& peripheral_t<STM32H750x, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H750x, UART7>::T& peripheral_t<STM32H750x, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H750x, UART8>::T& peripheral_t<STM32H750x, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H753, USART1>::T& peripheral_t<STM32H753, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H753, USART2>::T& peripheral_t<STM32H753, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H753, USART3>::T& peripheral_t<STM32H753, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H753, UART4>::T& peripheral_t<STM32H753, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H753, UART5>::T& peripheral_t<STM32H753, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H753, USART6>::T& peripheral_t<STM32H753, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H753, UART7>::T& peripheral_t<STM32H753, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H753, UART8>::T& peripheral_t<STM32H753, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H755_CM4, USART1>::T& peripheral_t<STM32H755_CM4, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H755_CM4, USART2>::T& peripheral_t<STM32H755_CM4, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H755_CM4, USART3>::T& peripheral_t<STM32H755_CM4, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H755_CM4, UART4>::T& peripheral_t<STM32H755_CM4, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H755_CM4, UART5>::T& peripheral_t<STM32H755_CM4, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H755_CM4, USART6>::T& peripheral_t<STM32H755_CM4, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H755_CM4, UART7>::T& peripheral_t<STM32H755_CM4, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H755_CM4, UART8>::T& peripheral_t<STM32H755_CM4, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H755_CM7, USART1>::T& peripheral_t<STM32H755_CM7, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H755_CM7, USART2>::T& peripheral_t<STM32H755_CM7, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H755_CM7, USART3>::T& peripheral_t<STM32H755_CM7, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H755_CM7, UART4>::T& peripheral_t<STM32H755_CM7, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H755_CM7, UART5>::T& peripheral_t<STM32H755_CM7, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H755_CM7, USART6>::T& peripheral_t<STM32H755_CM7, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H755_CM7, UART7>::T& peripheral_t<STM32H755_CM7, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H755_CM7, UART8>::T& peripheral_t<STM32H755_CM7, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H757_CM4, USART1>::T& peripheral_t<STM32H757_CM4, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H757_CM4, USART2>::T& peripheral_t<STM32H757_CM4, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H757_CM4, USART3>::T& peripheral_t<STM32H757_CM4, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H757_CM4, UART4>::T& peripheral_t<STM32H757_CM4, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H757_CM4, UART5>::T& peripheral_t<STM32H757_CM4, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H757_CM4, USART6>::T& peripheral_t<STM32H757_CM4, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H757_CM4, UART7>::T& peripheral_t<STM32H757_CM4, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H757_CM4, UART8>::T& peripheral_t<STM32H757_CM4, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H757_CM7, USART1>::T& peripheral_t<STM32H757_CM7, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H757_CM7, USART2>::T& peripheral_t<STM32H757_CM7, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H757_CM7, USART3>::T& peripheral_t<STM32H757_CM7, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H757_CM7, UART4>::T& peripheral_t<STM32H757_CM7, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H757_CM7, UART5>::T& peripheral_t<STM32H757_CM7, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H757_CM7, USART6>::T& peripheral_t<STM32H757_CM7, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H757_CM7, UART7>::T& peripheral_t<STM32H757_CM7, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H757_CM7, UART8>::T& peripheral_t<STM32H757_CM7, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H7A3x, USART1>::T& peripheral_t<STM32H7A3x, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H7A3x, USART2>::T& peripheral_t<STM32H7A3x, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H7A3x, USART3>::T& peripheral_t<STM32H7A3x, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H7A3x, UART4>::T& peripheral_t<STM32H7A3x, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H7A3x, UART5>::T& peripheral_t<STM32H7A3x, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H7A3x, USART6>::T& peripheral_t<STM32H7A3x, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H7A3x, UART7>::T& peripheral_t<STM32H7A3x, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H7A3x, UART8>::T& peripheral_t<STM32H7A3x, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H7A3x, USART9>::T& peripheral_t<STM32H7A3x, USART9>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, USART9>::T*>(0x40011800);

typename peripheral_t<STM32H7A3x, USART10>::T& peripheral_t<STM32H7A3x, USART10>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, USART10>::T*>(0x40011c00);

typename peripheral_t<STM32H7B0x, USART1>::T& peripheral_t<STM32H7B0x, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H7B0x, USART2>::T& peripheral_t<STM32H7B0x, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H7B0x, USART3>::T& peripheral_t<STM32H7B0x, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H7B0x, UART4>::T& peripheral_t<STM32H7B0x, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H7B0x, UART5>::T& peripheral_t<STM32H7B0x, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H7B0x, USART6>::T& peripheral_t<STM32H7B0x, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H7B0x, UART7>::T& peripheral_t<STM32H7B0x, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H7B0x, UART8>::T& peripheral_t<STM32H7B0x, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H7B0x, USART9>::T& peripheral_t<STM32H7B0x, USART9>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, USART9>::T*>(0x40011800);

typename peripheral_t<STM32H7B0x, USART10>::T& peripheral_t<STM32H7B0x, USART10>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, USART10>::T*>(0x40011c00);

typename peripheral_t<STM32H7B3x, USART1>::T& peripheral_t<STM32H7B3x, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, USART1>::T*>(0x40011000);

typename peripheral_t<STM32H7B3x, USART2>::T& peripheral_t<STM32H7B3x, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, USART2>::T*>(0x40004400);

typename peripheral_t<STM32H7B3x, USART3>::T& peripheral_t<STM32H7B3x, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, USART3>::T*>(0x40004800);

typename peripheral_t<STM32H7B3x, UART4>::T& peripheral_t<STM32H7B3x, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32H7B3x, UART5>::T& peripheral_t<STM32H7B3x, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, UART5>::T*>(0x40005000);

typename peripheral_t<STM32H7B3x, USART6>::T& peripheral_t<STM32H7B3x, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, USART6>::T*>(0x40011400);

typename peripheral_t<STM32H7B3x, UART7>::T& peripheral_t<STM32H7B3x, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, UART7>::T*>(0x40007800);

typename peripheral_t<STM32H7B3x, UART8>::T& peripheral_t<STM32H7B3x, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, UART8>::T*>(0x40007c00);

typename peripheral_t<STM32H7B3x, USART9>::T& peripheral_t<STM32H7B3x, USART9>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, USART9>::T*>(0x40011800);

typename peripheral_t<STM32H7B3x, USART10>::T& peripheral_t<STM32H7B3x, USART10>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, USART10>::T*>(0x40011c00);

typename peripheral_t<STM32H742x, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H742x, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H742x, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H742x, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H743, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H743, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H743, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H743, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H745_CM4, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H745_CM4, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H745_CM4, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H745_CM4, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H745_CM7, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H745_CM7, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H745_CM7, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H745_CM7, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H747_CM4, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H747_CM4, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H747_CM4, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H747_CM4, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H747_CM7, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H747_CM7, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H747_CM7, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H747_CM7, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H750x, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H750x, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H750x, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H750x, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H753, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H753, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H753, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H753, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H755_CM4, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H755_CM4, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H755_CM4, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H755_CM4, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H755_CM7, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H755_CM7, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H755_CM7, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H755_CM7, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H757_CM4, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H757_CM4, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H757_CM4, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H757_CM4, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H757_CM7, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H757_CM7, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H757_CM7, OTG2_HS_GLOBAL>::T& peripheral_t<STM32H757_CM7, OTG2_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG2_HS_GLOBAL>::T*>(0x40080000);

typename peripheral_t<STM32H7A3x, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H7A3x, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H7B0x, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H7B0x, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H7B3x, OTG1_HS_GLOBAL>::T& peripheral_t<STM32H7B3x, OTG1_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OTG1_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32H742x, OTG1_HS_HOST>::T& peripheral_t<STM32H742x, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H742x, OTG2_HS_HOST>::T& peripheral_t<STM32H742x, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H743, OTG1_HS_HOST>::T& peripheral_t<STM32H743, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H743, OTG2_HS_HOST>::T& peripheral_t<STM32H743, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H745_CM4, OTG1_HS_HOST>::T& peripheral_t<STM32H745_CM4, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H745_CM4, OTG2_HS_HOST>::T& peripheral_t<STM32H745_CM4, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H745_CM7, OTG1_HS_HOST>::T& peripheral_t<STM32H745_CM7, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H745_CM7, OTG2_HS_HOST>::T& peripheral_t<STM32H745_CM7, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H747_CM4, OTG1_HS_HOST>::T& peripheral_t<STM32H747_CM4, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H747_CM4, OTG2_HS_HOST>::T& peripheral_t<STM32H747_CM4, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H747_CM7, OTG1_HS_HOST>::T& peripheral_t<STM32H747_CM7, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H747_CM7, OTG2_HS_HOST>::T& peripheral_t<STM32H747_CM7, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H750x, OTG1_HS_HOST>::T& peripheral_t<STM32H750x, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H750x, OTG2_HS_HOST>::T& peripheral_t<STM32H750x, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H753, OTG1_HS_HOST>::T& peripheral_t<STM32H753, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H753, OTG2_HS_HOST>::T& peripheral_t<STM32H753, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H755_CM4, OTG1_HS_HOST>::T& peripheral_t<STM32H755_CM4, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H755_CM4, OTG2_HS_HOST>::T& peripheral_t<STM32H755_CM4, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H755_CM7, OTG1_HS_HOST>::T& peripheral_t<STM32H755_CM7, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H755_CM7, OTG2_HS_HOST>::T& peripheral_t<STM32H755_CM7, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H757_CM4, OTG1_HS_HOST>::T& peripheral_t<STM32H757_CM4, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H757_CM4, OTG2_HS_HOST>::T& peripheral_t<STM32H757_CM4, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H757_CM7, OTG1_HS_HOST>::T& peripheral_t<STM32H757_CM7, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H757_CM7, OTG2_HS_HOST>::T& peripheral_t<STM32H757_CM7, OTG2_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG2_HS_HOST>::T*>(0x40080400);

typename peripheral_t<STM32H7A3x, OTG1_HS_HOST>::T& peripheral_t<STM32H7A3x, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H7B0x, OTG1_HS_HOST>::T& peripheral_t<STM32H7B0x, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H7B3x, OTG1_HS_HOST>::T& peripheral_t<STM32H7B3x, OTG1_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OTG1_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32H742x, OTG1_HS_DEVICE>::T& peripheral_t<STM32H742x, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H742x, OTG2_HS_DEVICE>::T& peripheral_t<STM32H742x, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H743, OTG1_HS_DEVICE>::T& peripheral_t<STM32H743, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H743, OTG2_HS_DEVICE>::T& peripheral_t<STM32H743, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H745_CM4, OTG1_HS_DEVICE>::T& peripheral_t<STM32H745_CM4, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H745_CM4, OTG2_HS_DEVICE>::T& peripheral_t<STM32H745_CM4, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H745_CM7, OTG1_HS_DEVICE>::T& peripheral_t<STM32H745_CM7, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H745_CM7, OTG2_HS_DEVICE>::T& peripheral_t<STM32H745_CM7, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H747_CM4, OTG1_HS_DEVICE>::T& peripheral_t<STM32H747_CM4, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H747_CM4, OTG2_HS_DEVICE>::T& peripheral_t<STM32H747_CM4, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H747_CM7, OTG1_HS_DEVICE>::T& peripheral_t<STM32H747_CM7, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H747_CM7, OTG2_HS_DEVICE>::T& peripheral_t<STM32H747_CM7, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H750x, OTG1_HS_DEVICE>::T& peripheral_t<STM32H750x, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H750x, OTG2_HS_DEVICE>::T& peripheral_t<STM32H750x, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H753, OTG1_HS_DEVICE>::T& peripheral_t<STM32H753, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H753, OTG2_HS_DEVICE>::T& peripheral_t<STM32H753, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H755_CM4, OTG1_HS_DEVICE>::T& peripheral_t<STM32H755_CM4, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H755_CM4, OTG2_HS_DEVICE>::T& peripheral_t<STM32H755_CM4, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H755_CM7, OTG1_HS_DEVICE>::T& peripheral_t<STM32H755_CM7, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H755_CM7, OTG2_HS_DEVICE>::T& peripheral_t<STM32H755_CM7, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H757_CM4, OTG1_HS_DEVICE>::T& peripheral_t<STM32H757_CM4, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H757_CM4, OTG2_HS_DEVICE>::T& peripheral_t<STM32H757_CM4, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H757_CM7, OTG1_HS_DEVICE>::T& peripheral_t<STM32H757_CM7, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H757_CM7, OTG2_HS_DEVICE>::T& peripheral_t<STM32H757_CM7, OTG2_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG2_HS_DEVICE>::T*>(0x40080800);

typename peripheral_t<STM32H7A3x, OTG1_HS_DEVICE>::T& peripheral_t<STM32H7A3x, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H7B0x, OTG1_HS_DEVICE>::T& peripheral_t<STM32H7B0x, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H7B3x, OTG1_HS_DEVICE>::T& peripheral_t<STM32H7B3x, OTG1_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OTG1_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32H742x, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H742x, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H742x, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H742x, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H743, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H743, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H743, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H743, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H745_CM4, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H745_CM4, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H745_CM4, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H745_CM4, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H745_CM7, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H745_CM7, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H745_CM7, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H745_CM7, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H747_CM4, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H747_CM4, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H747_CM4, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H747_CM4, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H747_CM7, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H747_CM7, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H747_CM7, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H747_CM7, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H750x, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H750x, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H750x, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H750x, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H753, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H753, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H753, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H753, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H755_CM4, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H755_CM4, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H755_CM4, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H755_CM4, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H755_CM7, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H755_CM7, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H755_CM7, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H755_CM7, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H757_CM4, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H757_CM4, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H757_CM4, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H757_CM4, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H757_CM7, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H757_CM7, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H757_CM7, OTG2_HS_PWRCLK>::T& peripheral_t<STM32H757_CM7, OTG2_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, OTG2_HS_PWRCLK>::T*>(0x40080e00);

typename peripheral_t<STM32H7A3x, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H7A3x, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H7B0x, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H7B0x, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H7B3x, OTG1_HS_PWRCLK>::T& peripheral_t<STM32H7B3x, OTG1_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, OTG1_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32H742x, VREFBUF>::T& peripheral_t<STM32H742x, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H743, VREFBUF>::T& peripheral_t<STM32H743, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H745_CM4, VREFBUF>::T& peripheral_t<STM32H745_CM4, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H745_CM7, VREFBUF>::T& peripheral_t<STM32H745_CM7, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H747_CM4, VREFBUF>::T& peripheral_t<STM32H747_CM4, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H747_CM7, VREFBUF>::T& peripheral_t<STM32H747_CM7, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H753, VREFBUF>::T& peripheral_t<STM32H753, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H755_CM4, VREFBUF>::T& peripheral_t<STM32H755_CM4, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H755_CM7, VREFBUF>::T& peripheral_t<STM32H755_CM7, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H757_CM4, VREFBUF>::T& peripheral_t<STM32H757_CM4, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H757_CM7, VREFBUF>::T& peripheral_t<STM32H757_CM7, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H750x, VREFBUF>::T& peripheral_t<STM32H750x, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H7A3x, VREFBUF>::T& peripheral_t<STM32H7A3x, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H7B0x, VREFBUF>::T& peripheral_t<STM32H7B0x, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H7B3x, VREFBUF>::T& peripheral_t<STM32H7B3x, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, VREFBUF>::T*>(0x58003c00);

typename peripheral_t<STM32H742x, WWDG>::T& peripheral_t<STM32H742x, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H742x, WWDG>::T*>(0x50003000);

typename peripheral_t<STM32H743, WWDG>::T& peripheral_t<STM32H743, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H743, WWDG>::T*>(0x50003000);

typename peripheral_t<STM32H745_CM4, WWDG1>::T& peripheral_t<STM32H745_CM4, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H745_CM4, WWDG2>::T& peripheral_t<STM32H745_CM4, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM4, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H745_CM7, WWDG1>::T& peripheral_t<STM32H745_CM7, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H745_CM7, WWDG2>::T& peripheral_t<STM32H745_CM7, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H745_CM7, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H747_CM4, WWDG1>::T& peripheral_t<STM32H747_CM4, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H747_CM4, WWDG2>::T& peripheral_t<STM32H747_CM4, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM4, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H747_CM7, WWDG1>::T& peripheral_t<STM32H747_CM7, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H747_CM7, WWDG2>::T& peripheral_t<STM32H747_CM7, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H747_CM7, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H753, WWDG>::T& peripheral_t<STM32H753, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H753, WWDG>::T*>(0x50003000);

typename peripheral_t<STM32H755_CM4, WWDG1>::T& peripheral_t<STM32H755_CM4, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H755_CM4, WWDG2>::T& peripheral_t<STM32H755_CM4, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM4, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H755_CM7, WWDG1>::T& peripheral_t<STM32H755_CM7, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H755_CM7, WWDG2>::T& peripheral_t<STM32H755_CM7, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H755_CM7, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H757_CM4, WWDG1>::T& peripheral_t<STM32H757_CM4, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H757_CM4, WWDG2>::T& peripheral_t<STM32H757_CM4, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM4, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H757_CM7, WWDG1>::T& peripheral_t<STM32H757_CM7, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, WWDG1>::T*>(0x50003000);

typename peripheral_t<STM32H757_CM7, WWDG2>::T& peripheral_t<STM32H757_CM7, WWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32H757_CM7, WWDG2>::T*>(0x40002c00);

typename peripheral_t<STM32H750x, WWDG>::T& peripheral_t<STM32H750x, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H750x, WWDG>::T*>(0x50003000);

typename peripheral_t<STM32H7A3x, WWDG>::T& peripheral_t<STM32H7A3x, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7A3x, WWDG>::T*>(0x50003000);

typename peripheral_t<STM32H7B0x, WWDG>::T& peripheral_t<STM32H7B0x, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B0x, WWDG>::T*>(0x50003000);

typename peripheral_t<STM32H7B3x, WWDG>::T& peripheral_t<STM32H7B3x, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32H7B3x, WWDG>::T*>(0x50003000);

