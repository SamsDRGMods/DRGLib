@echo off
setlocal EnableDelayedExpansion

::Set active directory to the dir the bat is in
pushd %~dp0

if not exist Config.ini call MakeDefaultConfig.bat

::Find variables in config.ini
for /f "tokens=1,2 delims==" %%g in (Config.ini) do (
	if %%g==ProjectFolder set ProjectFolder=%%h
	if %%g==ContentFolder set ContentFolder=%%h
	if %%g==UEBinaries set UEBinaries=%%h
)

echo Removing temp folder
rmdir /S /Q Temp

::I know all those flags look intimidating. I don't actually remember what they mean so they scare me too
echo copying cooked files
robocopy "..\%ProjectFolder%\WindowsNoEditor\FSD\Content\%ContentFolder%" "Temp\PackageInput\Content\%ContentFolder%" /MIR /E /njh /njs /ndl /nc /ns /nfl
copy "..\%ProjectFolder%\WindowsNoEditor\FSD\AssetRegistry.bin" "Temp\PackageInput" 

::Yank out the trap card
echo removing Trap card
del Temp\PackageInput\Content\DRGLib\Trapcard\LIB_O_TrapCard.*

::Make input text file
echo making input text file
copy nul Temp\Input.txt
echo "%cd%\Temp\PackageInput\" "../../../FSD/">Temp\Input.txt

::Package the files
echo running UnrealPak
"%UEBinaries%\UnrealPak.exe" "%cd%\Temp\%ContentFolder%.pak" -Create="%cd%\Temp\Input.txt"

echo Successfully packaged

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)
