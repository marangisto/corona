module Types where

newtype MCU = MCU { unMCU :: String }

data ARCH = AVR | ARM deriving (Read, Show)

data ToolConfig = ToolConfig
    { mcu       :: MCU
    , baseDir   :: FilePath
    , link      :: FilePath
    , entry     :: String
    }

data Format = Binary | Hex

type Tool = (String, [String] -> [String])

data ToolChain = ToolChain
    { name      :: String
    , cc        :: Tool
    , cpp       :: Tool
    , asm       :: Tool
    , ld        :: Tool
    , ar        :: Tool
    , objcopy   :: Tool
    , objdump   :: Tool
    , size      :: Tool
    , format    :: Format
    }

