---
title: IsDRGLibReady
parent: Function Libraries
layout: page
---

# IsDRGLibReady

| Function name | IsDRGLibReady |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_F_Main |
| Outputs | `ReturnValue(bool)` Returns true if DRGLib is ready for commands relating to the managers |

Any function requiring a "Lib_A_MainRef" will need to wait for DRGLib to prepare the various feature managers. This function helps simplify that process. 

This node has been deprecated in favor of the interface event [DRGLibStartupComplete]({{ site.baseurl}}{% link Pages/Docs/Interfaces/LIB_I_DRGLib/DRGLibStartupComplete.md %})

Example usage: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Uncategorized/IsDRGLibReadyUsage.png?raw=true">
</p>
