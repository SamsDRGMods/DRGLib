---
title: LIB_WT_Slider
parent: Widget Templates
layout: page
---

# LIB_WT_Slider

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| BackfillModifier | LIB_S_ColorModifier | The color used to fill behind the handle |
| BackgroundModifier | LIB_S_ColorModifier | The color used to fill the background of the slider |
| HandleModifier | LIB_S_ColorModifier | The color used for the handle |

## Functions

### SetPercent

| Function name | SetPercent |
| --- | --- |
| Inputs | FillPercent |

Sets the fill percent of the slider

### UpdateDisplayedValues

| Function name | UpdateDisplayedValues |
| --- | --- |

Updates the state of the visuals to match the stored variables

## Event dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| OnValueChanged | `FillPercent(Float)` | Called whenever the slider is dragged |
