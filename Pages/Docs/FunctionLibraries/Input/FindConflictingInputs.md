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
| Inputs | `LIB_A_MainRef(LIB_A_Main Object reference)`<br/>`Ignore(Name)` A single action to ignore when searching<br/>`Chord(InputChord Structure)` The Chord/key to search for overlapping actions<br/>`CollisionLayer(Name)` Optionally specifies a layer to search for |
| Outputs | `CustomActions(Array of LIB_S_CustomInputStruct Structures` All custom actions that conflict with the input chord</br>`GameActions(Array of Names)` All base game actions that conflict with the input chord |

Searches through the input settings to find all actions that use the same or similar keys as the input chord

Behavior differs slightly between game and custom actions
- `Game actions:` Considered as overlapping if the same key is used. Modifier keys not considered
- `Custom actions:` Only considered as overlapping if the full input chord matches, modifiers included
This is due to the fact that game actions do not allow modifier keys at all

When a collision layer is specified then:
- Game actions are unaffected, and will collide as normal
- Custom actions collide only when they have the same Layer as the one specified in `CollisionLayer`

If no collision layer is specified then:
- Game actions are unaffected, and will collide as normal
- Custom actions will collide, even if the have a collision layer specified

Even if an action collides, that doesn't necessarily mean a remap won't be allowed. 

The intention behind this system is to allow for inputs in totally unrelated contexts to not interfere (i.e. the mod wouldn't use inputs most of the time). For instance, if a mod added shortcut keys to the loadout terminal it could specify its own layer so that it would allow overlapping keybinds with a mod that works in an entirely different context, like in missions

Node Appearance:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Input/FindConflictingInputsImage.png)
