---
title: LIB_WT_IntSlider
parent: Widget Templates
layout: page
---

# LIB_WT_IntSlider

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| MaxValue | Integer | The maximum value the slider can hold |
| BackfillModifier | LIB_S_ColorModifier | The color used to fill behind the handle |
| BackgroundModifier | LIB_S_ColorModifier | The color used to fill the background of the slider |
| HandleModifier | LIB_S_ColorModifier | The color used for the handle |

## Functions

### SetSelectedValue

| Function name | SetSelectedValue |
| --- | --- |
| Inputs | `NewSelectedValue(Integer)` |

### UpdateDisplayedValues

| Function name | UpdateDisplayedValues |
| --- | --- |

Updates the state of the visuals to match the stored variables

### GetSelectedValue

| Function name | GetSelectedValue |
| --- | --- |
| Outputs | `SelectedValue(Integer)` |
