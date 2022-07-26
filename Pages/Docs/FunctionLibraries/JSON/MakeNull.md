---
title: MakeNull
grand_parent: Function Libraries
parent: JSON
layout: page
---

# MakeNull

| Function name | MakeNull |
| --- | --- |
| Function Library | Content/DRGLib/JSON/LIB_F_JSON |
| Inputs | `Outer(Object reference)` |
| Outputs | `Return(LIB_JSON_O_Value object reference)` |

Makes a new JSON object that is null

**Note:**
When generating new JSON trees directly it is recommended to ensure that each object's outer is it's parent in the JSON tree, so that it is possible to traverse both up and down the tree programmatically
