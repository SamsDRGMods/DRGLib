---
title: ValidateLIB_A_MainRef
parent: Function Libraries
layout: page
---

# ValidateLIB_A_MainRef

| Function name | ValidateLIB_A_MainRef |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_F_Main |
| Inputs | `LIB_A_MainRef(LIB_A_Main object reference)` A reference in need of validation |
| Outputs | `ValidatedReference(LIB_A_Main object reference)` A validated reference to LIB_A_Main |

**This node is intended for internal usage**  
This function will take a LIB_A_Main reference and check whether it is valid. If it is not valid, the function will create a valid reference and return it
If it is valid, then the function just returns the original input

The intended usage of the function is inside a function that requires a LIB_A_MainRef. This is largely a convenience feature, making it so that you don't have to plug anything into a node's LIB_A_MainRef input. This makes prototyping faster at the cost of some performance, and it is recommended to use a saved variable reference when finalizing code

Node appearance: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Uncategorized/ValidateLIB_A_MainRefImage.png?raw=true">
</p>
