---
title: AddDebugWatch
grand_parent: Function Libraries
parent: Watches
layout: page
---

# AddDebugWatch

| Function name | AddDebugWatch |
| --- | --- |
| Function Library | Content/DRGLib/Debug/LIB_F_Watch |
| Inputs | `LIB_A_MainRef(LIB_A_Main object reference)`</br>`WatchDisplayName(String)` The name of the watch</br>`Category(Array of Strings)` The category of the watch</br>`Description(String)` A short description of what the watch does. Currently used only in the ActiveWatches settings page, and will likely stay that way</br>`VariableTypeColor(LIB_DEB_E_VariableType Enum)` What type of variable this is. Used ONLY to select a preset color, has no change on how Watch is tracked</br>`ColorOverride(LinearColor Structure)` If the preset colors are too limiting, you can enter any LinearColor here</br>`UseOverride(Boolean)` Whether or not we want to use the provided color override. |
| Outputs | `CreatedValueHolder(LIB_DEB_O_ValueHolder Object reference)` The value holder allowing you to pass the watches' value to DRGLib |

Adds a Debug Watch to DRGLib. 

- **Colors are used only when the watch is added to the HUD**
- **In order to simplify storage of HUD settings, your watch is uniquely identified by its combination of category and name. While there is technically nothing stopping you from having two watches with the same name/category, it is not recommended**


Node Appearance:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Watch/AddDebugWatchImage.png)
