module Config
    ( getMCU
    , getLibs
    , getDefs
    , getBaseDir
    , getLink
    , getEntry
    ) where

import Types
import STM32 (mcuList)
import Development.Shake
import Development.Shake.Config
import Development.Shake.FilePath
import Control.Applicative
import Data.Maybe (fromMaybe)
import Data.List (find)

getMCU :: Action MCU
getMCU = do
    x <- getConfig "MCU"
    let mcu = findMCU =<< x
    return $ fromMaybe (error "MCU required") mcu

getLibs :: MCU -> Action [String]
getLibs mcu = fromMaybe defLibs . fmap words <$> getConfig "LIBS"
    where defLibs = [ "corona" ]

getDefs :: Action [String]
getDefs = maybe [] words <$> getConfig "DEFS"

getBaseDir :: Action FilePath
getBaseDir = fromMaybe "../.." <$> getConfig "BASE_DIR"

getLink :: Action (Maybe FilePath)
getLink = getConfig "LINK"

getEntry :: Action FilePath
getEntry = fromMaybe "__reset" <$> getConfig "ENTRY"

findMCU :: String -> Maybe MCU
findMCU x = find ((==x) . name) mcuList

