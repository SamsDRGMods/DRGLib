@echo off

echo Administrative permissions required. Detecting permissions...
net session >nul 2>&1
if %errorLevel% == 0 (
	echo Success: Administrative permissions confirmed.
) else (
	echo Failure: Current permissions inadequate.
	pause
	exit
)

rem change the current directory to the bat location
pushd %~dp0

echo making symbolic link
cd ..
rmdir "%cd%\DRGLib UE project\Content\ModHub"
del "%cd%\DRGLib UE project\Content\ModHub"
mklink /d "%cd%\DRGLib UE project\Content\ModHub" "%cd%\ModHubModule\FSD\Content\ModHub"

pause
