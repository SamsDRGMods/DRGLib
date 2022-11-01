---
title: CompareString
grand_parent: Function Libraries
parent: Sort
layout: page
---

# CompareString

| Function name | CompareString |
| --- | --- |
| Function Library | Content/DRGLib/Sorting/LIB_F_Sort |
| Inputs | `A(String)`<br/>`B(String)` |
| Outputs | `A>B(Boolean)` |

Allows you to compare two strings alphabetically. Case insensetive.

Under the hood strings are converted to lowercase then compare the Unicode numbers per character. So this should in theory sort any set of strings, but no promises on how it will handle non-english text

### Truth table:  

| Comparison | Result |
| --- | --- |
| A="a"<br/>B="a" | False |
| A="b"<br/>B="a" | True |
| A="a"<br/>B="b" | False |
| A="a"<br/>B="A" | False |
| A="aa"<br/>B="a" | True |
| A="Aa"<br/>B="a" | True |

Node Appearance:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Sort/CompareStringImage.png)
