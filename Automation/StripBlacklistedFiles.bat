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

for /F "tokens=*" %%g in (PakBlackList.ini) do (
    if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g\" (
        echo removing folder %%g
        rmdir "Temp\PackageInput\Content\%%g" /s /q
    ) else if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" (
        echo removing file %%g
        del "Temp\PackageInput\Content\%%g" /q
    ) else (
        echo could not find %%g inside %ProjectName%\Content
    )
)

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)