This folder contains various bat files for the automation of DRGLib packaging n stuff

Config.ini: This ini contains various key/value pairs for the bats to use
	ProjectFolder: This represents the folder the Uproject is sitting in. Don't change it default=DRGLib UE Project
	ContentFolder: This represents the folder inside content which your DRGLib is in. Don't change it default=DRGLib
	UEBinaries: This represents the folder that UnrealPak.exe(And other binaries) is in. default=C:\Program Files (x86)\UE_4.25\Engine\Binaries\Win64
	SteamInstall: This represents the main Deep Rock Galactic folder. default=C:\Program Files (x86)\Steam\steamapps\common\Deep Rock Galactic

MakeDefaultConfig.bat: Makes a new Config.ini with the default values. Run automatically when it is detected that Config.ini is missing by the other programs

PackageDRGLib.bat %1: Copies the files from ..\DRGLib UE Project\WindowsNoEditor\Content\DRGLib, packages them into DRGLib.pak and places it in the Temp\ folder
	%1: Put noPause here to stop the bat from pausing at the end