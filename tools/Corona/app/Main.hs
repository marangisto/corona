{-# LANGUAGE RecordWildCards, TupleSections #-}
module Main (main) where

import Types
import Config
import qualified ARM as ARM
import Development.Shake
import Development.Shake.Command
import Development.Shake.FilePath
import Development.Shake.Config
import Development.Shake.Util
import System.FilePath (takeBaseName)
import System.Directory as D (getCurrentDirectory, doesFileExist)
import Data.Maybe (fromMaybe)
import Data.List (isPrefixOf, isInfixOf)
import Data.Char (toLower)

main :: IO ()
main = do
  let configFile = "build.mk"
  exists <- D.doesFileExist configFile
  if exists then shakeArgs shakeOptions{ shakeFiles = buildDir } $ do
    usingConfigFile configFile

    want [ buildDir </> "image" <.> "s" ]

    buildDir </> "image" <.> "elf" %> \out -> do
        name <- fmap takeBaseName $ liftIO getCurrentDirectory
        cs <- filterGarbageFiles <$> getDirectoryFiles "" [ "//*.c" ]
        cpps <- filterGarbageFiles <$> getDirectoryFiles "" [ "//*.cpp" ]
        asms <- filterGarbageFiles <$> getDirectoryFiles "" [ "//*.asm" ]
        mcu <- getMCU
        let objs = [ buildDir </> name </> c <.> "o" | c <- cs ++ cpps ++ asms ]
        libs <- (map (\l -> buildDir </> l </> l <.> "a")) <$> getLibs mcu
        lnk <- return $ buildDir </> "link" <.> "ld"
        need $ lnk : objs ++ libs
        (command, flags) <- ld <$> toolChain
        () <- cmd command (flags $ objs ++ libs) "-o" [ out ]
        (command, flags) <- size <$> toolChain
        cmd command (flags []) [ out ]

    buildDir </> "link" <.> "ld" %> \out -> do
        script <- ldScript <$> toolChain
        liftIO (writeFile out =<< script)

    buildDir </> "image" <.> "hex" %> \out -> do
        let elf = out -<.> ".elf"
        need [ elf ]
        (command, flags) <- objcopy <$> toolChain
        cmd command (flags []) [ elf ] "-Oihex" [ out ]

    buildDir </> "image" <.> "bin" %> \out -> do
        let elf = out -<.> ".elf"
        need [ elf ]
        (command, flags) <- objcopy <$> toolChain
        cmd command (flags []) [ elf ] "-Obinary" [ out ]

    buildDir </> "image" <.> "s" %> \out -> do
        let elf = out -<.> ".elf"
        need [ elf ]
        (command, flags) <- objdump <$> toolChain
        cmd (FileStdout out) command (flags []) "-S" [ elf ]

    buildDir <//> "*.a" %> \out -> do
        baseDir <- getBaseDir
        let libName = takeBaseName out
        let libDir = baseDir </> libName </> "src"
        cs <- filterGarbageFiles <$> getDirectoryFiles libDir [ "/*.c" ]
        cpps <- filterGarbageFiles <$> getDirectoryFiles libDir [ "/*.cpp" ]
        let objs = [ buildDir </> libName </> c <.> "o" | c <- cs ++ cpps ]
        need objs
        (command, flags) <- ar <$> toolChain
        cmd command (flags []) "rcs" out objs

    let compile tool out = do
            baseDir <- getBaseDir
            this <- fmap takeBaseName $ liftIO getCurrentDirectory
            let src | [ buildDir, lib, name ] <- splitDirectories out
                    , lib /= this
                    = baseDir </> lib </> "src" </> dropExtension name
                    | otherwise = ".." </> dropDirectory1 (dropExtension out)
                m = out -<.> "m"
            (command, flags) <- tool <$> toolChain
            mcu <- getMCU
            hse <- (("HSE="<>) . show) <$> getHSE
            libs <- getLibs mcu
            defs <- getDefs
            incs <- getIncludes
            let include = map ("-I"<>) $ "." :
                    [ baseDir </> lib </> "include"
                    | lib <- libs
                    ] ++
                    [ baseDir </> lib </> "include"
                      </> "stm32" </> (map toLower $ family mcu)
                    | lib <- libs
                    , lib == "corona"
                    ] ++ incs
                define = [ "-D" <> def | def <- hse : defs ]
            () <- cmd command (flags [])
                [ "-c", "-Werror", "-Wall", "-Os" ] include define
                [ src ] "-o" [ out ] "-MMD -MF" [ m ]
            needMakefileDependencies m

    buildDir <//> "*.c.o" %> compile cc
    buildDir <//> "*.cpp.o" %> compile cpp
    buildDir <//> "*.asm.o" %> compile asm

    phony "upload" $ do
        tc <- toolChain
        let payload = case format tc of
                Hex -> buildDir </> "image" <.> "hex"
                Binary -> buildDir </> "image" <.> "bin"
        need [ payload ]
        (command, flags) <- return $ program tc
        cmd command (flags [ payload ])

    phony "reset" $ do
        (command, flags) <- reset <$> toolChain
        cmd command (flags [])

    phony "clean" $ do
        putNormal $ "Cleaning files in " ++ buildDir
        removeFilesAfter buildDir [ "//*" ]

  else
    putStrLn $ "no " <> configFile <> " present, bailing out..."

toolChain :: Action ToolChain
toolChain = do
    mcu <- getMCU
    baseDir <- getBaseDir
    entry <- getEntry
    extLink <- getLink
    prog <- getProg
    return $ case arch mcu of
        ARM -> ARM.toolChain ToolConfig{..}

arch :: MCU -> ARCH
arch MCU{..}
    | "STM32" `isPrefixOf` name = ARM
    | otherwise = error $ "don't know architecture for " <> name

filterGarbageFiles :: [FilePath] -> [FilePath]
filterGarbageFiles = filter $ \p -> not $ any (`isPrefixOf` takeFileName p) ["#", ".#"]

buildDir :: FilePath
buildDir = "_build"

