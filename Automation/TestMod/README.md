# DRG modding automation scripts
This repo contains various bat files to help you automate your projects, including packaging, zipping, cooking, and all those fun things

## Installation/usage
In order to use this I recommend downloading the repo and placing it on folder above your .uproject. Once installed run VerifyVars.bat, and fix any errors in Config.ini

The most useful bats are:
- QuickTestMod.bat
  - Automatically runs all steps required to test mod locally, including cooking the project and copying the pak into your Mods folder
- CookUEProject.bat
  - Cooks your project for WindowsNoEditor
- PackageMod.bat
  - Automatically packages files from cooking into a .pak
- PrepModForRelease
  - Automatically runs all steps required to upload to mod.io, including cooking the project and zipping up the pak

### Config.ini
Contains various variables the batch files access. Assuming you installed everything in the default location you should only have to change ModName

| Variable | Description | Default value |
| --- | --- | --- |
| ProjectFile | Represents the location of the .uproject you want to work with. Can be a relative path. | ..\FSD\FSD.uproject |
| UnrealEngineLocation | Represents the location that UE4.25 is installed in. Expects the folder which CONTAINS Engine\\ | C:\Program Files (x86)\UE_4.25
| ModName | Used by the bats when making your pak name, and in one or two other places. | myMod |
|SteamInstall | The folder the game is installed in. Expects the folder containing FSD.exe | C:\Program Files (x86)\Steam\steamapps\common\Deep Rock Galactic |

### CookUEProject.bat
Runs UE4Editor-Cmd.exe in order to cook the mod files. You can find the cooked files in ProjectFolder\Saved\Cooked\WindowsNoEditor

### CopyWhitelistedFiles.bat
Copies all files/folders in PakWhiteList.ini and automatically copies them into Temp\PackageInput\Content from `ProjectFolder`\Saved\Cooked\WindowsNoEditor\\`ProjectName`\Content

### MakeDefaultConfigFiles.bat
If config.ini, PakWhiteList.ini, or PakWhiteList.ini are missing this bat will create the default version

### PackageMod.bat
Calls `CopyWhitelistedFiles.bat`, `StripBlacklistedFiles.bat` then packages into `"ModName".pak`

### PrepModForRelease
Calls CookUEProject.bat, PackageMod.bat, then automatically zips the pak up, with a suffix. (I recommend your mod version) This allows for fast uploading to mod.io

Zip gets named `"ModName""Suffix".zip`

### QuickTestMod
Calls `CookUEProject.bat`, `PackageMod.bat`, then automatically moves the mod pak into DRG's local testing folder. Useful for prototyping small changes

### StripBlacklistedFiles.bat
Deletes all files/folders in PakBlackList.ini from Temp\PackageInput\Content

### VerifyVars.bat
Checks whether the variables in Config.ini are valid. If not, exits to prevent any odd issues and informs the user which variables need fixing. Is called by every other bat before they do much of anything