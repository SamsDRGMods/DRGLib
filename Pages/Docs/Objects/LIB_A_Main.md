---
title: LIB_A_Main
parent: Objects
layout: page
---

# LIB_A_Main

This object is responsible for spawning all of DRGLib's feature managers, as well as providing a single place in order to get references to those specific feature managers

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `ActiveManagers` | Array of LIB_A_ManagerParent Object references | This variable stores each spawned feature manager. Using FindObjectWithClass lets the function libraries use this variable effectively |

## Functions

### UpdateInformedActors

| Function name | UpdateInformedActors |
| --- | --- |

Checks for actors that implement LIB_I_DRGLib that haven't yet had "DRGLibIsReady" called and calls it on them. Called by DRGLib once upon initialization finishing, and once one frame later.

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| `InitComplete` | | Called when DRGLib has finished loading. If you require optimal response time for your mod you can bind to this dispatcher after you establish that DRGLib is not ready |
