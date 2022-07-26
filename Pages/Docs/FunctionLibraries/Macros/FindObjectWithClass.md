---
title: FindObjectWithClass
grand_parent: Function Libraries
parent: Macros
layout: page
---

# FindObjectWithClass

| Function name | FindObjectWithClass |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_M_BasicMacros |
| Inputs | `Class(Object Class Reference)` The class to search for<br/>`Array(Array of Object references)` The array to find the object in |
| Outputs | `Return(Object reference)` The found object, requires casting to be useful<br/>`Found(Boolean)` Whether an object was found |

This macro locates an object of a specific class in an array. Useful for when an array has mixed object types.

Node Usage: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Macros/FindObjectWithClassUsage.png?raw=true">
</p>
