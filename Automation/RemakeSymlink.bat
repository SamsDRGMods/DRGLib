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
cd "..\DRGLib UE project\Content"
rmdir ModHub"
del "ModHub"
mklink /d "ModHub" "..\..\ModHubModule\FSD\Content\ModHub"

pause
