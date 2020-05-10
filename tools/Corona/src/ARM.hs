{-# LANGUAGE RecordWildCards #-}
module ARM (toolChain) where

import Types
import System.FilePath
import Data.List (isPrefixOf)

toolChain :: ToolConfig -> ToolChain
toolChain tc@ToolConfig{..} = ToolChain{..}
    where name = "arm-none-eabi-gcc"
          cc = ("arm-none-eabi-gcc", \_ -> ccFlags tc)
          cpp = ("arm-none-eabi-g++", \_ -> ccFlags tc ++ cppFlags mcu)
          asm = ("arm-none-eabi-gcc", \_ -> ccFlags tc ++ asmFlags mcu)
          ld = ("arm-none-eabi-gcc", \objs -> ldFlags tc objs)
          ar = ("arm-none-eabi-ar", \_ -> [])
          objcopy = ("arm-none-eabi-objcopy", \_ -> copyFlags mcu)
          objdump = ("arm-none-eabi-objdump", \_ -> [ "--disassemble-all" ])
          size = ("arm-none-eabi-size", \_ -> [])
          format = Binary

ccFlags ToolConfig{..} = mcuFlags mcu ++
    [ "-mthumb"
    , "-ffunction-sections"
    , "-fdata-sections"
    , "-DMCU=" <> unMCU mcu
    ]

mcuFlags :: MCU -> [String]
mcuFlags MCU{..}
    | "STM32F0" `isPrefixOf` unMCU = [ "-mcpu=cortex-m0" ]
    | "STM32F1" `isPrefixOf` unMCU = [ "-mcpu=cortex-m3" ]
    | "STM32F4" `isPrefixOf` unMCU = [ "-mcpu=cortex-m4" ]
    | "STM32F7" `isPrefixOf` unMCU = [ "-mcpu=cortex-m7" ]
    | "STM32G0" `isPrefixOf` unMCU = [ "-mcpu=cortex-m0plus" ]
    | "STM32G4" `isPrefixOf` unMCU =
        [ "-mcpu=cortex-m4"
        , "-mfloat-abi=hard"
        , "-mfpu=fpv4-sp-d16"
        , "-fsingle-precision-constant"
        ]
    | "STM32H7" `isPrefixOf` unMCU = [ "-mcpu=cortex-m7" ]
    | otherwise = error "don't know toolchain flags for mcu"

cppFlags _ =
    [ "-std=gnu++17"
    , "-fno-threadsafe-statics"
    , "-fno-exceptions"
    , "-fno-rtti"
    ]

asmFlags _ =
    [ "-xassembler-with-cpp"
    ]

ldFlags ToolConfig{..} objs = mcuFlags mcu ++
    [ "-mthumb"
    , "-specs=nosys.specs"  -- to get gcc _sbrk, etc to link
    , "-Wl,--gc-sections"
    , "-T" ++ link
    , "-Wl,--check-sections"
    , "-Wl,--entry=" ++ entry
    , "-Wl,--unresolved-symbols=report-all"
    , "-Wl,--warn-common"
    , "-Wl,--warn-section-align"
    , "-Wl,--start-group"
    ] ++ objs ++
    [ "-Wl,--end-group"
    , "-lm"
    ]

copyFlags _ =
    [
    ]

