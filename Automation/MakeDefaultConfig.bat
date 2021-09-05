::@echo off
echo making default config
copy nul Config.ini
(
echo ProjectFolder=DRGLib UE Project
echo ContentFolder=DRGLib
echo UEBinaries=C:\Program Files ^(x86^)\UE_4.25\Engine\Binaries\Win64
echo SteamInstall=C:\Program Files ^(x86^)\Steam\steamapps\common\Deep Rock Galactic
) > Config.ini