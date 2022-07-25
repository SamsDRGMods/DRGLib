---
layout: page
parent: DRG
title: GetLocalPlayerController
grand_parent: Function Libraries
---

# GetLocalPlayerController

| Function name | GetLocalPlayerController |
| --- | --- |
| Function Library | Content/DRGLib/DRGFunctions/LIB_F_DRG |
| Outputs | `ReturnValue(PlayerController object reference)` Returns the local player controller |

This function gets the local player controller (i.e. the one controlled on this PC). 

Note this returns the player *controller*, not the Dwarf actor. To get a reference to that you can use "Get Controlled Pawn" off of the PlayerController reference

Example usage: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/DRG/GetLocalPlayerControllerUsage.png?raw=true">
</p>