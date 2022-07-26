---
title: FindConflictingInputs
grand_parent: Function Libraries
parent: Input
layout: page
---

# FindConflictingInputs

| Function name | FindConflictingInputs |
| --- | --- |
| Function Library | Content/DRGLib/InputFunctions/LIB_F_Input |
| Inputs | `LIB_A_MainRef(LIB_A_Main Object reference)`<br/>`Ignore(Name)` A single action to ignore when searching<br/>`Chord(InputChord Structure)` The Chord/key to search for overlapping actions |
| Outputs | `CustomActions(Array of LIB_S_CustomInputStruct Structures` All custom actions that conflict with the input chord</br>`GameActions(Array of Names)` All base game actions that conflict with the input chord |

Searches through the input settings to find all actions that use the same or similar keys as the input chord

Behavior differs slightly between game and custom actions
- `Game actions:` Considered as overlapping if the same key is used. Modifier keys not considered
- `Custom actions:` Only considered as overlapping if the full input chord matches, modifiers included
This is due to the fact that game actions do not allow modifier keys at all

Node Appearance: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Input/FindConflictingInputsImage.png?raw=true">
</p>
