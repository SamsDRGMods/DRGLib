---
title: LIB_WT_Textbox
parent: Widget Templates
layout: page
---

# LIB_WT_Textbox

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| StartingHintText | Text | The hint text used for the textbox at the start |
| FontSize | Integer |  |
| BackgroundModifier | LIB_S_ColorModifier |  |
| TextModifier | LIB_S_ColorModifier |  |
| BorderModifier | LIB_S_ColorModifier |  |

## Functions

### GetText

| Function name | CurrentText |
| --- | --- |
| Outputs | `CurrentText(Text)` |

### SetText

| Function name | SetText |
| --- | --- |
| Inputs | `NewText(Text)` |

### SetHintText

| Function name | SetHintText |
| --- | --- |
| Inputs | `NewHintText(Text)` |

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| OnTextChanged | `Text(Text)` | Called while typing new text |
| OnTextCommitted | `Text(Text)` | Called when the user finished typing text and unselects the text box |
