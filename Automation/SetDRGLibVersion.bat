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

echo please enter version
set /p Major=Major:
set /p Minor=Minor:
set /p Patch=Patch:

:: apparently DAUM expects a / in all paths, not a \. ¯\_(ツ)_/¯
set ProjectFolder=%ProjectFolder:\=/%

copy nul Temp\VersionScript.daum
	(
		echo File "%ProjectFolder%Saved/Cooked/WindowsNoEditor/FSD/Content/DRGLib/Main/LIB_O_VersionHolder.uasset"
		echo ExportChange -r Default__LIB_O_VersionHolder_C 0 Major/Int32/0 %Major%
		echo ExportChange -r Default__LIB_O_VersionHolder_C 0 Minor/Int32/0 %Minor%
		echo ExportChange -r Default__LIB_O_VersionHolder_C 0 Patch/Int32/0 %Patch%
	) > Temp\VersionScript.daum

call DAUM\ExecuteScript.bat ..\Temp\VersionScript.daum

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)
