---
title: CompareFunction
parent: LIB_I_Sort
layout: page
grand_parent: Interfaces
---

# CompareFunction

| Function name | CompareFunction |
| --- | --- |
| Interface | Content/DRGLib/Sorting/LIB_I_Sort |
| Inputs | `A(Object Reference)`</br>`B(Object Reference)` |
| Outputs | `A>B(Boolean)` |

This function is what lets the object sorting function lib work. 

[ObjectQuickSort]({{site.baseurl}}{% link Pages/Docs/FunctionLibraries/Sort/ObjectQuickSort.md %}) and [ObjectInsertIntoSortedArray]({{site.baseurl}}{% link Pages/Docs/FunctionLibraries/Sort/ObjectInsertIntoSortedArray.md %}) will need an input that implements this function

The below image shows an example of how to use this to compare two objects

![Example image](/DRGLib/Media/FullDocs/Interfaces/LIB_I_Sort/CompareFunctionUsage.png)
