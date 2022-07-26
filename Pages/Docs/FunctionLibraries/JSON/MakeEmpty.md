---
title: MakeEmpty
grand_parent: Function Libraries
parent: JSON
layout: page
---

# MakeEmpty

| Function name | MakeEmpty |
| --- | --- |
| Function Library | Content/DRGLib/JSON/LIB_F_JSON |
| Inputs | `Type(LIB_JSON_E_Type Enum)`<br/>`Outer(Object reference)` |
| Outputs | `Return(LIB_JSON_O_Value object reference)` |

Makes a new JSON object of specified type. Does not populate the value

**Note:**
When generating new JSON trees directly it is recommended to ensure that each object's outer is it's parent in the JSON tree, so that it is possible to traverse both up and down the tree programmatically
