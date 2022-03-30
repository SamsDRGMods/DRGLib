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

call CookUEProject.bat noPause

call PackageMod.bat noPause

cd Temp

tar -a -cf %ModName%.zip %ModName%.pak

set /p ReleaseName=Please enter a suffix for this release:

ren %ModName%.zip %ModName%%ReleaseName%.zip

pause