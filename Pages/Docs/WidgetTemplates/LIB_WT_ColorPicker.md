---
title: LIB_WT_ColorPicker
parent: Widget Templates
layout: page
---

# LIB_WT_ColorPicker

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| SelectedColor | LinearColor structure | Best used to set the default value from the widget editor, use getter and setter functions otherwise |
| MenuBackgroundModifier | LIB_S_ColorModifier | The modifier to use to define the background color of the color picker menu |
| OpacityChangeable | Boolean | Whether the opacity should be allowed to be changed through the widget |

## Functions

### SetSelectedColor

| Function name | SetSelectedColor |
| --- | --- |
| Inputs | `NewColor(LinearColor structure)` |

Sets the selected color and updates displayed values to match

### GetSelectedColor

| Function name | GetSelectedColor |
| --- | --- |
| Outputs | `SelectedColor(LinearColor structure)` |

Gets whatever color is currently selected

## Event dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| OnChangesConfirmed | `SelectedColor(LinearColor structure)` | Called when the user finishes selecting a new color |
