module Types
    ( MCU(..)
    , ARCH(..)
    , ToolConfig(..)
    , Format(..)
    , Tool
    , ToolChain(..)
    ) where

import STM32 as STM32

data ARCH = AVR | ARM deriving (Read, Show)

data ToolConfig = ToolConfig
    { mcu       :: MCU
    , baseDir   :: FilePath
    , extLink   :: Maybe FilePath
    , entry     :: String
    }

data Format = Binary | Hex

type Tool = (String, [String] -> [String])

data ToolChain = ToolChain
    { cc        :: Tool
    , cpp       :: Tool
    , asm       :: Tool
    , ld        :: Tool
    , ar        :: Tool
    , objcopy   :: Tool
    , objdump   :: Tool
    , size      :: Tool
    , program   :: Tool
    , reset     :: Tool
    , format    :: Format
    , ldScript  :: IO String
    }

