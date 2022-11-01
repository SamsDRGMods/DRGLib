---
title: LIB_WT_ExpandableArea
parent: Widget Templates
layout: page
---

# LIB_WT_ExpandableArea

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| IsExpanded | Boolean | Whether the area is currently expanded |
| ShouldAnimate | Boolean | |
| FontSize | Integer | |
| AreaName | Text | What to write for the text that shows on the header of the area |
| AnimateSpeed | Float | How fast the area should open in slate units/second when animating |
| HeaderBGModifier | LIB_S_ColorModifier | The color used for the header button |
| TextModifier | LIB_S_ColorModifier | The color used for the text in the header |
| ArrowModifier | LIB_S_ColorModifier | The modifier used for the arrow in the header |
| HoveredModifier | LIB_S_ColorModifier | Used by the header when hovered by the mouse |
| ClickedModifier | LIB_S_ColorModifier | Used by the header when clicked by the mouse |
| ContentBGModifier | LIB_S_ColorModifier | Used for the background of the main content area |

## Functions

### SetExpansion

| Function name | SetExpansion |
| --- | --- |
| Inputs | `IsExpanded(Boolean)` |

Sets whether the area is expanded, skipping any animations

### UpdateDisplayedValues

| Function name | UpdateDisplayedValues |
| --- | --- |

Updates the state of the widget to match the held variables

### ToggleExpansion

| Function name | ToggleExpansion |
| --- | --- |

Toggles the expansion state of the area, playing the appropriate animations
