module Config
    ( getMCU
    , getLibs
    , getDefs
    , getIncludes , getBaseDir , getLink , getEntry , getHSE
    , getProg
    ) where

import Types
import Boards
import STM32 (mcuList)
import Development.Shake
import Development.Shake.Config
import Development.Shake.FilePath
import Control.Applicative
import Data.Maybe (fromMaybe, catMaybes)
import Data.List (find)

getMCU :: Action MCU
getMCU = do
    m <- getConfig "MCU"
    b <- getBoard
    mcu <- case (m, b) of
        (Nothing, Nothing) -> error "no MCU or board specified"
        (Just x, Nothing) -> return $ findMCU x
        (Nothing, Just x) -> return $ findMCU =<< boardMCU x
        (_, _) -> error "specify either MCU or BOARD (not both)"
    return $ fromMaybe (error "MCU required") mcu

getBoard :: Action (Maybe Board)
getBoard = do
    boardEnv <- getEnv "BOARD"
    boardCfg <- getConfig "BOARD"
    return $ fmap Board $ (boardEnv <|> boardCfg)

getLibs :: MCU -> Action [String]
getLibs mcu = fromMaybe defLibs . fmap words <$> getConfig "LIBS"
    where defLibs = [ "corona" ]

getDefs :: Action [String]
getDefs = do
    x <- fmap unBoard <$> getBoard
    xs <- maybe [] (map Just . words) <$> getConfig "DEFS"
    return $ catMaybes $ x : xs

getIncludes :: Action [String]
getIncludes = maybe [] words <$> getConfig "INCLUDE"

getBaseDir :: Action FilePath
getBaseDir = fromMaybe "../.." <$> getConfig "BASE_DIR"

getLink :: Action (Maybe FilePath)
getLink = getConfig "LINK"

getEntry :: Action FilePath
getEntry = fromMaybe "__reset" <$> getConfig "ENTRY"

getHSE :: Action Int
getHSE = fromMaybe 0 . fmap read <$> getConfig "HSE"

findMCU :: String -> Maybe MCU
findMCU x = find ((==x) . name) mcuList

getProg :: Action Prog
getProg = fromMaybe SWD . fmap read <$> getConfig "PROG"

