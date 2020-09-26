{-# LANGUAGE DeriveDataTypeable, RecordWildCards, DuplicateRecordFields #-}
module Main (main) where

import System.Console.CmdArgs
import Data.Maybe (fromMaybe)

data Family
    = STM32F0
    | STM32F1
    | STM32F2
    | STM32F3
    | STM32F4
    | STM32F7
    | STM32G0
    | STM32G4
    | STM32H7
    | STM32L4
    deriving (Eq, Ord, Enum, Read, Show, Data, Typeable)

data Options = Options
    { freq      :: Maybe Double
    , family    :: [Family]
    } deriving (Show, Eq, Data, Typeable)

options :: Main.Options
options = Main.Options
    { freq = def &= help "target frequency"
    , family = def &= args &= typ "FILES"
    } &=
    verbosity &=
    help "ClockTree" &=
    summary "ClockTree v0.1.0, (c) Bengt Marten Agren 2020" &=
    details [ "Solve clock tree registers for frequency"
            ]

maxFreq :: Family -> Double
maxFreq STM32F2 = 120e6
maxFreq STM32G4 = 170e6
maxFreq STM32H7 = 480e6
maxFreq STM32L4 = 80e6
maxFreq x = error $ "don't know max frequency for " <> show x

main :: IO ()
main = do
    opts@Options{..} <- cmdArgs options
    case family of
        [fam] -> solve fam $ fromMaybe (maxFreq fam) freq
        _ -> error "specify one family"

class ClockTree a where
    gen :: Double -> [a]

solve :: Family -> Double -> IO ()
solve STM32F2 freq
  = mapM_ print
  . filter (\F2{..} -> fPllP == freq && fPllQ == 48e6)
  $ gen 16e6
solve STM32G4 freq
  = mapM_ print
  . filter (\G4{..} -> fSYS == freq
                    && fPllP == freq
                    && fPllQ == freq
           )
  $ gen 16e6
solve STM32H7 freq
  = mapM_ print
  . filter (\H7{..} -> fSYS == freq
                    && fPllP == freq
                    && fPllQ == freq
                    && fPllR == freq
           )
  $ gen 8e6         -- using HSE on NUCLEO
solve STM32L4 freq
  = mapM_ print
  . filter (\L4{..} -> fSYS == freq
                    -- && fPllP == freq
                    && fPllQ == freq
                    && fPllR == freq
           )
  $ gen 16e6

data F2 = F2
    { pllN      :: Double
    , pllM      :: Double
    , pllP      :: Double
    , pllQ      :: Double
    , fPllP     :: Double
    , fPllQ     :: Double
    , fVCO      :: Double
    } deriving (Show)

instance ClockTree F2 where
  gen fCin =
    [ let fVCO = fCin * pllN / pllM
          fPllQ = fVCO / pllQ
          fPllP = fVCO / pllP
       in F2{..}
    | pllN <- [64..432]
    , pllM <- [2..63]
    , pllP <- [2, 4, 6, 8]
    , pllQ <- [2..15]
    , let pllIn = fCin / pllM
       in pllIn >= 1e6 && pllIn <= 2e6     -- required range!
    , let fVCO = fCin * pllN / pllM
       in fVCO >= 64e6 && fVCO <= 432e6    -- allowed range!
    ]

data G4 = G4
    { pllN      :: Double
    , pllM      :: Double
    , pllP      :: Double
    , pllPDIV   :: Double
    , pllQ      :: Double
    , pllR      :: Double
    , fSYS      :: Double
    , fPllP     :: Double
    , fPllQ     :: Double
    , fVCO      :: Double
    } deriving (Show)

instance ClockTree G4 where
  gen fCin =
    [ let fVCO = fCin * pllN / pllM
          fSYS = fVCO / pllR
          fPllQ = fVCO / pllQ
          fPllP | pllPDIV == 0 = fVCO / pllP
                | otherwise = fVCO / pllPDIV
       in G4{..}
    | pllN <- [8..127]
    , pllM <- [1..16]
    , pllP <- [7, 17]
    , pllPDIV <- [0, 2..31]
    , pllQ <- [2, 4, 6, 8]
    , pllR <- [2, 4, 6, 8]
    , let pllIn = fCin / pllM
       in pllIn >= 2.66e6 && pllIn <= 8e6    -- required range!
    , let fVCO = fCin * pllN / pllM
       in fVCO >= 64e6 && fVCO <= 344e6    -- allowed range!
       && fVCO / pllR <= 170e6
       && fVCO / pllQ <= 170e6
    ]

data H7 = H7
    { pllN      :: Double   -- aka DIVN
    , pllM      :: Double   -- aka DIVM
    , pllP      :: Double
    , pllQ      :: Double
    , pllR      :: Double
    -- , pllPDIV   :: Double 
    , fSYS      :: Double
    , fPllP     :: Double
    , fPllQ     :: Double
    , fPllR     :: Double
    , fVCO      :: Double
    } deriving (Show)

instance ClockTree H7 where
  gen fCin =
    [ let fVCO = fCin * pllN / pllM
          fSYS = fVCO / pllR
          fPllP = fVCO / pllP
          fPllQ = fVCO / pllQ
          fPllR = fVCO / pllR
       in H7{..}
    | pllN <- [4..512]
    , pllM <- [1..63]
    , pllP <- [1..128]
    , pllQ <- [1..128]
    , pllR <- [1..128]
    --, pllPDIV <- [0, 2..31]
    , let refCk = fCin / pllM
       in refCk >= 2e6 && refCk <= 16e6     -- required range for VCOH
    , let fVCO = fCin * pllN / pllM
       in fVCO >= 192e6 && fVCO <= 836e6    -- allowed range for VCOH
       && fVCO / pllP <= 480e6
       && fVCO / pllR <= 480e6
       && fVCO / pllQ <= 480e6
    ]

data L4 = L4
    { pllN      :: Double
    , pllM      :: Double
    , pllP      :: Double
    , pllQ      :: Double
    , pllR      :: Double
    -- , pllPDIV   :: Double    IGNORING L48x/L4Ax devices for now
    , fSYS      :: Double
    , fPllP     :: Double
    , fPllQ     :: Double
    , fPllR     :: Double
    , fVCO      :: Double
    } deriving (Show)

instance ClockTree L4 where
  gen fCin =
    [ let fVCO = fCin * pllN / pllM
          fSYS = fVCO / pllR
          fPllP = fVCO / pllP
          fPllQ = fVCO / pllQ
          fPllR = fVCO / pllR
       in L4{..}
    | pllN <- [8..86]
    , pllM <- [1..8]
    , pllP <- [7, 17]
    , pllQ <- [2, 4, 6, 8]
    , pllR <- [2, 4, 6, 8]
    --, pllPDIV <- [0, 2..31]
    , let pllIn = fCin / pllM
       in pllIn >= 4e6 && pllIn <= 16e6    -- required range!
    , let fVCO = fCin * pllN / pllM
       in fVCO >= 64e6 && fVCO <= 344e6    -- allowed range!
       && fVCO / pllP <= 80e6
       && fVCO / pllR <= 80e6
       && fVCO / pllQ <= 80e6
    ]

