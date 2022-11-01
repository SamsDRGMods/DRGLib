---
title: LIB_DEB_O_ValueHolder
parent: Objects
layout: page
---

# LIB_DEB_O_ValueHolder

This object is how your mod communicates a Debug Watches' value to DRGLib. A debug watch is what allows DRGLib to show simple displays like the current FPS, or the players position. They will also be dumped to the log every time the user pressed the appropriate button (Default F4)

In order to set up a debug watch effectively, you only need 4 nodes. One to add the Watch to DRGLib, two for the event dispatcher, and one to set the variable's value. You can see an example of this below.

![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Watch/AddDebugWatchUsage.png)

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `Value` | String | The current value of the watch. |

## Functions

### SetValue

This function allows you to set the current value of the watch. Honestly, I don't know why I made it a function

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| `RequestNewValue` | `ValueHolder(LIB_DEB_O_ValueHolder Object reference )` | This dispatcher is called by DRGLib when a watch needs to be updated. Will be called once a frame while a watch is in the active debug HUD, or whenever the user requests a dump of all watches |
