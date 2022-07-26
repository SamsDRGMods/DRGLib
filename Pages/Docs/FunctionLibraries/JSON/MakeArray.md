---
title: MakeArray
grand_parent: Function Libraries
parent: JSON
layout: page
---

# MakeArray

| Function name | MakeArray |
| --- | --- |
| Function Library | Content/DRGLib/JSON/LIB_F_JSON |
| Inputs | `Value(Array of LIB_JSON_O_Value object references)`<br/>`Outer(Object reference)` |
| Outputs | `Return(LIB_JSON_O_Value object reference)` |

Makes a new JSON object and populates it with the entry from Value

**Note:**
When generating new JSON trees directly it is recommended to ensure that each object's outer is it's parent in the JSON tree, so that it is possible to traverse both up and down the tree programmatically
