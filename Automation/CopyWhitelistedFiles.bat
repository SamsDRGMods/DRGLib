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
        ::Resolve to file name only
        set ProjectName=%%~nh
	) else (
		::Resolve qualified path name
		set %%g=%%~fh
	)
)

echo resettings PackageInput folder
rmdir Temp\PackageInput /s /q
mkdir Temp\PackageInput\Content

for /F "tokens=*" %%g in (PakWhiteList.ini) do (
    if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g\" (
        echo copying folder %%g
        robocopy "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" "Temp\PackageInput\Content\%%g" /MIR /ns /nc /nfl /ndl /np /njh /njs
    ) else if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" (
        echo copying file %%g
        copy "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" "Temp\PackageInput\Content\%%g" /y
    ) else (
        echo could not find %%g inside %ProjectName%\Content
    )
)

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)