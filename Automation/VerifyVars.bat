@echo off
setlocal EnableDelayedExpansion

::Set active directory to the dir the bat is in
pushd %~dp0

if not exist Config.ini call MakeDefaultConfigFiles.bat

::Find variables in config.ini
for /f "tokens=1,2 delims==" %%g in (Config.ini) do (
	::Variables modname and ProjectFile need to be treated differently, all other variables in Config.ini are paths
	if %%g==ModName (
		set ModName=%%h
	) else if %%g==ProjectFile (
		::Resolve to path w/ drive letter
		set ProjectFolder=%%~dph
		::Resolve to file name w/ extension
		set ProjectFile=%%~nxh
	) else (
		::Resolve to path w/ drive letter
		set %%g=%%~dph
	)
)

set err=0

if not exist "%SteamInstall%\FSD.exe" set err=1
if not exist "%UnrealEngineLocation%\Engine\Binaries\Win64\UE4Editor.exe" set err=1
if not exist "%ProjectFolder%\%ProjectFile%" set err=1

if err==1 GOTO errHandling


::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)
exit /b

:errHandling
if not exist "%SteamInstall%\FSD.exe" echo SteamInstall is invalid, please check Config.ini Note that SteamInstall should be the folder containing FSD.exe
if not exist "%UnrealEngineLocation%\Engine\Binaries\Win64\UE4Editor.exe" echo UnrealEngineLocation invalid, please check Config.ini Note that UnrealEngineLocation should be the folder CONTAINING Engine\
if not exist "%ProjectFolder%\%ProjectFile%" echo ProjectFile does not exist. Please check Config.ini
pause
exit