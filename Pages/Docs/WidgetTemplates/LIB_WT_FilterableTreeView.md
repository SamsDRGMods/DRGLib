---
title: LIB_WT_FilterableTreeView
parent: Widget Templates
layout: page
---

# LIB_WT_FilterableTreeView

This widget is nearly identical to LIB_WT_TreeView, but the end user can easily search it using the text box at the top

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| DepthMultiplier | Float | How far to the right each step of a nested object moves |
| FontSize | Integer |  |
| HoveredModifier | LIB_S_ColorModifier |  |
| ClickedModifier | LIB_S_ColorModifier |  |
| BackgroundModifier | LIB_S_ColorModifier |  |
| ExpansionArrowModifier | LIB_S_ColorModifier |  |
| TextModifier | LIB_S_ColorModifier |  |
| CustomWidgetModifier | LIB_S_ColorModifier | The modifier used to set the foreground color of custom widgets |
| CustomWidgetClass | User Widget Class | The widget that is generated for each data object |
| TextMatchModifier | LIB_S_ColorModifier |  |

## Functions

### AddItem

| Function name | AddItem |
| --- | --- |
| Inputs | `ObjectToAdd(Object Reference)`</br>`Category(Array of Strings)`</br>`EntryName(String)` |

### RemoveItem

| Function name | RemoveItem |
| --- | --- |
| Inputs | `ObjectToRemove(Object Reference)` |

### ClearList

| Function name | CurrentText |
| --- | --- |
| Inputs | `ObjectToRemove(Object Reference)` |

### FilterObjects

| Function name | CurrentText |
| --- | --- |
| Inputs | `FilterString(String)` |

Hides all objects where the name does not contain the filter string

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| ItemClicked | `Object(Object Object Reference)` |  |
| CustomWidgetGenerated | `WidgetRef(User Widget Object Reference)` |  |
