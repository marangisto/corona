module Config
    ( getMCU
    , getLibs
    , getDefs
    , getBaseDir
    , getLink
    , getEntry
    ) where

import Types
import Development.Shake
import Development.Shake.Config
import Development.Shake.FilePath
import Control.Applicative
import Data.Maybe (fromMaybe)

getMCU :: Action MCU
getMCU = do
    mcu <- fmap MCU <$> getConfig "MCU"
    return $ fromMaybe (error "MCU required") mcu

getLibs :: MCU -> Action [String]
getLibs mcu = fromMaybe defLibs . fmap words <$> getConfig "LIBS"
    where defLibs = [ "corona" ]

getDefs :: Action [String]
getDefs = maybe [] words <$> getConfig "DEFS"

getBaseDir :: Action FilePath
getBaseDir = fromMaybe "../.." <$> getConfig "BASE_DIR"

getLink :: Action FilePath
getLink = do
    mfp <- getConfig "LINK"
    case mfp of
        Just fp -> return fp
        Nothing -> do
            mcu <- getMCU
            baseDir <- getBaseDir
            return $ baseDir </> "hal/link" </> unMCU mcu <.> "ld"

getEntry :: Action FilePath
getEntry = fromMaybe "__reset" <$> getConfig "ENTRY"

