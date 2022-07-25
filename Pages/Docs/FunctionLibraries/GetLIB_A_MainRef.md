---
title: GetLIB_A_MainRef
parent: Function Libraries
layout: page
---

# GetLIB_A_MainRef

| Function name | GetLIB_A_MainRef |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_F_Main |
| Outputs | `ReturnValue(LIB_A_Main Object reference)` Returns a reference to the LIB_A_Main |

Many functions require a LIB_A_Main reference. This node lets you get one. Recommended usage is to store to a variable, since the reference will stay valid until the mission ends

This node has been deprecated in favor of the interface event TODO

Example usage: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Uncategorized/GetLIB_A_MainRefUsage.png?raw=true">
</p>
