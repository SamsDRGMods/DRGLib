@echo off
setlocal EnableDelayedExpansion

::Set active directory to the dir the bat is in
pushd %~dp0

call VerifyVars.bat noPause

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
		::Resolve qualified path name
		set %%g=%%~fh
	)
)

call CopyWhitelistedFiles.bat noPause

call StripBlacklistedFiles.bat noPause

::Make input text file
echo making input text file
copy nul Temp\Input.txt
echo "%cd%\Temp\PackageInput\" "../../../FSD/">Temp\Input.txt

::Package the files
echo running UnrealPak
"%UnrealEngineLocation%\Engine\Binaries\Win64\UnrealPak.exe" "%cd%\Temp\%ModName%.pak" -Create="%cd%\Temp\Input.txt"

echo Successfully packaged

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)
