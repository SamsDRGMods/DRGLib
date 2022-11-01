---
title: LIB_W_WidgetTemplateBase
parent: Widget Templates
layout: page
---

# LIB_W_WidgetTemplateBase

This object is the base for all of the widget templates, and all functions inside it are used by those templates in some way

### Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `TooltipDelay` | Float | How long before the tooltip is shown when hovering a compatible widget template |
| `TooltipModifier` | LIB_S_ColorModifier | The base color of the tooltip |
| `TooltipBackgroundModifier` | LIB_S_ColorModifier | How to modify the base tooltip color to make the background |
| `TooltipTextModifier` | LIB_S_ColorModifier | How to modify the base tooltip color to make the text |

### Events

| Event name | Inputs | Description |
| --- | --- | --- |
| PreConstruct | `IsDesignTime(boolean)` | Calls `UpdateWidgetStyle`. Overridden by many templates so that they can accurately color themselves in the editor |
| Construct | | Calls `UpdateWidgetStyle` |

### Functions

#### UpdateWidgetStyle

| Function Name | UpdateWidgetStyle
| --- | --- |

Provides a standard function for each WidgetTemplate to override

Node appearance
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/Objects/LIB_W_WidgetTemplateBase/UpdateWidgetStyleImage.png?raw=true">
</p>

#### GetForegroundColor

| FunctionName | GetForegroundColor |
| --- | --- |
| Inputs | `Widget(UserWidget object reference)` |
| Outputs | `ForegroundColor(LinearColor structure)` |

Scours the widget hierarchy for the foreground color the widget input inherits

Node appearance
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/Objects/LIB_W_WidgetTemplateBase/GetForegroundColorImage.png?raw=true">
</p>

#### GetTooltipWidget

| FunctionName | GetTooltipWidget |
| --- | --- |
| Outputs | `ReturnValue(Widget Object reference)` |

Creates a new LIB_WT_Tooltip using the tooltip text of the widget. Used as a binding for GetTooltipWidget in most WidgetTemplates

Node appearance
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/Objects/LIB_W_WidgetTemplateBase/GetTooltipWidgetImage.png?raw=true">
</p>

#### ModifyColor

| FunctionName | ModifyColor |
| --- | --- |
| Inputs | `Base(LinearColor structure)`</br>`Modifier(LIB_S_ColorModifier structure)` |
| Outputs | `ModifiedColor(LinearColor structure)` |

Modifies the base color by the modifier input. Used to allow for a consistent style for a widget (E.G. the border should be 70% as bright as the center)

Node appearance
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/Objects/LIB_W_WidgetTemplateBase/ModifyColorImage.png?raw=true">
</p>

#### ModifyElement

| FunctionName | ModifyElement |
| --- | --- |
| Inputs | `Base(Float)`</br>`Modifier(LIB_S_ColorElementModifier structure)` |
| Outputs | `ModifiedValue(Float)` |

Modifies a float using the parameters defined by `Modifier` (e.g. setting it to 0.5 or adding 20 to it) 

Node appearance
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/Objects/LIB_W_WidgetTemplateBase/ModifyElementImage.png?raw=true">
</p>

#### GetParentUserWidget

| FunctionName | GetParentUserWidget |
| --- | --- |
| Inputs | `Target(Widget object reference)` |
| Outputs | `UserWidget(UserWidget object reference)` |

Returns the parent user widget in the hierarchy. Used by GetForegroundColor in order to locate the color that is currently being inherited

