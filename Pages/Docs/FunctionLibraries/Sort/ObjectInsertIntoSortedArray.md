---
title: ObjectInsertIntoSortedArray
grand_parent: Function Libraries
parent: Sort
layout: page
---

# ObjectInsertIntoSortedArray

| Function name | ObjectInsertIntoSortedArray |
| --- | --- |
| Function Library | Content/DRGLib/Sorting/LIB_F_Sort |
| Inputs | `ObjectArray(Array of Object References)`<br/>`ObjectToInsert(Object Reference)`<br/>`SortInterface(LIB_I_SortInterface)` Any object that utilizes the LIB_I_SortInterface |

Inserts an object into a sorted array at it's proper location. If the array is unsorted there's no telling where the object will go

Implemented through a clumsy binary search. But it works so that's what matters

Node Appearance: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Sort/ObjectInsertIntoSortedArrayImage.png?raw=true">
</p>
