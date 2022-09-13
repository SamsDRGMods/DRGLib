---
title: Best practices and FAQ
parent: Guides
layout: page
---

# Introduction
Here's loosely-organized list of things you should *definitely* know about DRGLib before you make a mod with it, and some guides on best practices

# FAQ

## Why shouldn't I pack DRGLib?

Conceptually, the idea of DRGLib is to be a function library that can be updated *independently* of the mods that rely on it. That way, major bugs can be fixed without forcing everyone who makes a mod with DRGLib to update their mods

For this reason, you call functions from DRGLib through a "Dummying" method, similar to if you wanted to call a game function.

## What's up with the LIB_A_MainRef in *insert function name*?
DRGLib spawns in one main actor, fittingly named LIB_A_Main. That main actor handles logic for any function that needs access to specific features, like printing or logging. There is a built-in function to help you get a reference to it, [GetLIB_A_MainRef]({{ site.baseurl }}{% link Pages/Docs/FunctionLibraries/GetLIB_A_MainRef.md %})

*It's recommended to save this function to a variable, as it doesn't have great performance, especially called multiple times per frame*

## How do I update to a new version of DRGLib?
First, make sure you [actually need to update]({{ site.baseurl }}{% link Pages/Docs/Guides/When_do_I_need_to_update.md %}). Then close your project, delete the DRGLib folder from Content, and follow the [Using DRGLib in your mod]({{ site.baseurl }}{% link Pages/Docs/Tutorials/Using_DRGLib_in_your_mod.md %}) tutorial.

## [DRGLibStartupComplete]({{ site.baseurl }}{% link Pages/Docs/Interfaces/LIB_I_DRGLib/DRGLibStartupComplete.md %}) isn't getting called, what gives!?

There are 2 main reasons this might happen:
1. Your mod is spawning more than a frame after DRGLib. The game's mod spawning system spawns all mod init actors on the same frame, but if you're waiting for some reason then that might be why it's not calling. You can resolve this by getting a [LIB_A_Main]({{ site.baseurl }}{% link Pages/Docs/Objects/LIB_A_Main.md %}) reference and calling "UpdateInformedActors" on it
2. You are using the LIB_I_DRGLib on a non-actor. Unfortunately the way DRGLib calls DRGLibStartupComplete only works for actors

# Best practices

- Wait to set up inputs or pages until [DRGLibStartupComplete]({{ site.baseurl }}{% link Pages/Docs/Interfaces/LIB_I_DRGLib/DRGLibStartupComplete.md %}) is called on your mod actor
  - There's something like 3(?) methods outlined throughout these docs that outline the methods to read whether DRGLib has finished starting up. Know that the DRGLibStartupComplete function is the current recommended option. A later version will likely make it the only option (I had trouble experimenting with different methods of activation)
- **Only** use functions and object listed in the documentation. Any function not present there is considered internal and is subject to change without warning, which would almost certainly break your mod
  - If you find a function that isn't documented and you feel it should be, please [open an issue](https://github.com/SamsDRGMods/DRGLib/issues/new?template=Documentation.md) with the documentation tag and describe the function/object that is undocumented
