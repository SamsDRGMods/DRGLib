---
title: LIB_WT_InputKeySelector
parent: Widget Templates
layout: page
---

# LIB_WT_InputKeySelector

This widget template is used to set and keep track of a DRGLib custom input. By simply including it in your UI you can create a custom input, or you can go through some manual setup using the DRGLib Input function library

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| ActionName | Name | The action tracked by this IKS |
| DefaultAction | LIB_S_CustomInputStruct | Holds data for the custom input to create a default action if no existing action is found |
| ClickedModifier | LIB_S_ColorModifier | |
| HoveredModifier | LIB_S_ColorModifier | |
| TextModifier | LIB_S_ColorModifier | |
| FailedRemapModifier | LIB_S_ColorModifier | Used by the warning popup when an attempted remap is not permitted by the overlap behavior |
| RemapWarningModifier | LIB_S_ColorModifier | Used by the warning popup when a remap succeeds but will overlap some other actions |
| FontSize | Integer | |

## Functions

### ResetSelectedKey

| Function name | ToggleExpansion |
| --- | --- |
| | |

Checks the current mapping for `ActionName` and sets the IKS to match
