---
title: EnumToStringArray
grand_parent: Function Libraries
parent: Macros
layout: page
---

# EnumToStringArray

| Function name | EnumToStringArray |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_M_BasicMacros |
| Inputs | `ResetArray(Exec)` Empties the stored array<br/>`LoopBody(Exec)`<br/>`EnumValue(String)` |
| Outputs | `PostReset(Exec)`<br/>`Variable(Array of Strings)` |

When used in concert with a ForEach\<EnumName\>, allows for easy generation of a string array containing the name of each enum entry. Useful for populating a combobox with enum values

Node Usage:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Macros/EnumToStringArrayUsage.png)
