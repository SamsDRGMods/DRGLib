---
title: LIB_WT_Spinbox
parent: Widget Templates
layout: page
---

# LIB_WT_Spinbox

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| MinValue | Float | The minimum value the Spinbox is allowed to store |
| Value | Float | The currently held value of the Spinbox |
| MaxValue | Float | The maximum value the Spinbox is allowed to store |
| NudgeMultiplier | Float | How much the Spinbox should change by when nudging |
| DragMultiplier | Float | An additional multiplier used while the user is dragging the Spinbox to nudge the value |
| BorderModifier | LIB_S_ColorModifier |  |
| BackgroundModifier | LIB_S_ColorModifier |  |
| FillModifier | LIB_S_ColorModifier |  |
| TextModifier | LIB_S_ColorModifier |  |
| HoveredModifier | LIB_S_ColorModifier |  |
| FontSize | Integer |  |

## Functions

### GetCurrentValue

| Function name | GetCurrentValue |
| --- | --- |
| Outputs | `Value(Float)` |

### SetCurrentValue

| Function name | SetCurrentValue |
| --- | --- |
| Inputs | `NewValue(Float)` |

### NudgeCurrentValue

| Function name | NudgeCurrentValue |
| --- | --- |
| Inputs | `NudgeAmount(Float)` |
| Outputs | `NewValue(Float)` |

"Nudges" the current value of the Spinbox by `NudgeAmount`*`NudgeMultiplier`

### UpdateDisplayedValues

| Function name | UpdateDisplayedValues |
| --- | --- |
| | |

Updates the state of the visuals to match the stored variables

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| OnValueChanged | `InValue(Float)` | Called whenever the Spinbox is dragged |
| OnValueCommitted | `InValue(Float)` | Called whenever the value is committed (And the user is not actively dragging it) |
