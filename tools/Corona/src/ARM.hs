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
          ldScript = makeLink tc

ccFlags ToolConfig{..} = mcuFlags mcu ++
    [ "-mthumb"
    , "-ffunction-sections"
    , "-fdata-sections"
    , "-DMCU=" <> name mcu
    ]

mcuFlags :: MCU -> [String]
mcuFlags MCU{..} = ("-mcpu=" <> cleanCore core) : fpuFlags core

fpuFlags :: String -> [String]
fpuFlags core
    | core == "cortex-m4" = 
        [ "-mfloat-abi=hard"
        , "-mfpu=fpv4-sp-d16"
        , "-fsingle-precision-constant"
        ]
    | core == "cortex-m7" =     -- FIXME: enable double precision?
        [ "-mfloat-abi=hard"
        , "-mfpu=fpv5-sp-d16"
        , "-fsingle-precision-constant"
        ]
    | otherwise = []

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
    , "-T_build/link.ld"
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

makeLink :: ToolConfig -> IO String
makeLink ToolConfig{..} = case extLink of
    Just fn -> readFile fn
    Nothing -> do
        let fn = baseDir </> "corona" </> "src" </> "stm32" <.> "ld"
        (memory mcu <>) <$> readFile fn

memory :: MCU -> String
memory MCU{..} = unlines
    [ "MEMORY"
    , "{"
    , "    FLASH(rx) : ORIGIN = 0x08000000, LENGTH = " <> show flash <> "k"
    , "    RAM(rwx) : ORIGIN = 0x20000000, LENGTH = " <> show ram <> "k"
    , "}"
    , ""
    ]

cleanCore :: String -> String
cleanCore "cortex-m0+" = "cortex-m0plus"
cleanCore c = c

