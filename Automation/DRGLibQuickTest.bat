@echo off
setlocal EnableDelayedExpansion

::Set active directory to the dir the bat is in
pushd %~dp0

if not exist Config.ini call MakeDefaultConfig.bat

::Find variables in config.ini
for /f "tokens=1,2 delims==" %%g in (Config.ini) do (
	if %%g==SteamInstall set SteamInstall=%%h
)
