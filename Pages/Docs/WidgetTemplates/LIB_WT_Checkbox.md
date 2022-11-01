---
title: LIB_WT_Checkbox
parent: Widget Templates
layout: page
---

# LIB_WT_Checkbox

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| ClickedModifier | LIB_S_ColorModifier | The modifier to use when the checkbox is clicked |
| HoveredModifier | LIB_S_ColorModifier | The modifier to use while the checkbox is hovered with the mouse |

## Functions

### GetIsChecked

| Function name | GetIsChecked |
| --- | --- |
| Outputs | `IsChecked(Boolean)` |

Return whether the checkbox is currently checked

### ToggleCheckedState

| Function name | ToggleCheckedState |
| --- | --- |

Toggles the current checkbox state, and plays the animation

### SetIsChecked

| Function name | SetIsChecked |
| --- | --- |
| Inputs | `NewIsChecked(Boolean)` |

Sets whether the checkbox is checked, skipping any animations

## Event dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| OnClicked | `IsChecked(Boolean)` | Called every time the checkbox is clicked |
