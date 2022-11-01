---
title: AddCustomActionMapping
grand_parent: Function Libraries
parent: Input
layout: page
---

# AddCustomActionMapping

| Function name | AddCustomActionMapping |
| --- | --- |
| Function Library | Content/DRGLib/InputFunctions/LIB_F_Input |
| Inputs | `LIB_A_MainRef(LIB_A_Main Object reference)`<br/>`ActionName(Name)` The name of the custom action<br/>`DefaultChord(InputChord Structure)` The key combo needed to trigger the action by default<br/>`OverlapBehavior(LIB_E_InputOverlap Enum)` Whether/how the custom action is permitted to overlap with other inputs<br/>`ActionDescription(String)` A short description of what the action does |

The meat and potatoes of the Input library. Sets up a custom input with DRGLib, avoiding a lot of the grunt work. If a custom action with the same name already exists in DRGLib, do nothing

**Note:** OverlapBehavior is only considered in the LIB_WT_InputKeySelector. The RemapCustomActionMapping node doesn't care

For full notes on usage refer to the input tutorial TODO

Node Appearance:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Input/AddCustomActionMappingImage.png)
