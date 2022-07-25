---
layout: page
parent: Custom Save
title: SaveToTextFile
grand_parent: Function Libraries
---

# UpdateSaveObject

| Function name | UpdateSaveObject |
| --- | --- |
| Function Library | Content/DRGLib/DRGLibSettings/LIB_SAV_F_SaveFunctions |
| Inputs | `Base(LIB_SAV_O_CustomSaveObject reference)`<br/>`New(LIB_SAV_O_CustomSaveObject reference)`<br/>`CullUnusedOldValues(Boolean)` If true, remove all properties from base that did not exist in new<br/>`EnforceNewSettingsOptions(Boolean)` When true, replaces all settings options from base with the options from new <br/>`EnforceNewLimits(Boolean)` When true, forces the limits for integers and floats to match the limits from new |
| Outputs | `ReturnValue(LIB_SAV_O_CustomSaveObject reference)` |

Allows you to update a save to add new properties without losing old values that the user entered. Assembles a new LIB_SAV_O_CustomSaveObject using the values and properties from base wherever possible, falling back to new when required. 

For further details on recommended usage check out the save object tutorial here TODO

**note:** destructively modifies the input objects "base" and "new"
