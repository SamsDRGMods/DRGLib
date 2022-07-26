---
title: MakeObject
grand_parent: Function Libraries
parent: JSON
layout: page
---

# MakeObject

| Function name | MakeObject |
| --- | --- |
| Function Library | Content/DRGLib/JSON/LIB_F_JSON |
| Inputs | `Value(Map of LIB_JSON_Value object references to Strings)`<br/>`Outer(Object reference)` |
| Outputs | `Return(LIB_JSON_O_Value object reference)` |

Makes a new JSON object and populates it with the entry from Value

**Note:**
When generating new JSON trees directly it is recommended to ensure that each object's outer is it's parent in the JSON tree, so that it is possible to traverse both up and down the tree programmatically
