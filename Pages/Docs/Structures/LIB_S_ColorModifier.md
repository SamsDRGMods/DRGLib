---
title: LIB_S_ColorModifier
parent: Structures
layout: page
---

# LIB_S_ColorModifier

| Value | Type | Description |
| --- | --- | --- |
| UseOverride | Boolean | Whether to skip the normal modify process and just use the `OverrideColor` |
| OverrideColor | LinearColor | The color we use if `UseOverride` is true |
| HueModifier | LIB_S_ColorElementModifier | Defines how to modify the hue of a color |
| SaturationModifier | LIB_S_ColorElementModifier | Defines how to modify the Saturation of a color |
| ValueModifier | LIB_S_ColorElementModifier | Defines how to modify the value of a color |
| AlphaModifier | LIB_S_ColorElementModifier | Defines how to modify the alpha of a color |

This stuct is used by `LIB_W_WidgetTemplateBase`'s `ModifyColor` function to decide how to treat the base color
