# Special settings data keys
When using a DRGLib settings property there is a struct called "SettingsOptions". In that struct you can find a JSON object named "SpecialSettingsData"
Some settings widgets will make use of the keys outlined in this document to customize the widget in specific ways

| Key | Possible Values | Usage | Used by |
| --- | --- | --- | --- |
| `PreferredWidget` | Any integer, but that depends on the context. For instance, preferring a slider to a spinbox for a float | • For "IntProperties", "0" will force a spinbox and "1" will force a slider. Note that if the integer is unbounded a spinbox will be picked regardless</br>• For "FloatProperties", "0" will force a spinbox and "1" will force a slider. Note that if the float is unbounded a spinbox will be picked regardless | FloatProperty</br>IntProperty |
| `HostFontSize` | Any Natural Number | Used to override the hosts font size, if it has a title for the widget | ExpandingHost</br>HorizontalHost</br>VerticalHost |
| `WidgetFontSize` | Any Natural Number | Used to override the font size of the widget, if it has any text | FloatSliderWidget</br>FloatSpinboxWidget</br>IntSliderWidget</br>IntSpinboxWidget</br>InputKeySelector</br>AnchorDataWidget</br>ByteWidget</br>ColorWidget</br>StringWidget |
| `OpacityChangeable` | true/false | Decides whether the user is permitted to edit the color opacity | ColorProperty |
| `PreviewWidget` | String referring to a class, format: "/Game/%path%/%classname%.%classname%_C</br>e.g. "/Game/DRGLib/UITemplates/HUDPositionSelector/LIB_W_HUDPosDefaultPreview.LIB_W_HUDPosDefaultPreview_C" | Defines a "Preview Widget" for the position selector widget | AnchorDataProperty |
| `AllowSizeModification` | true/false | Decides whether the user is allowed to modify the size of the anchor slot | AnchorDataProperty |

## UIDummy keys

The following keys are used by the UIDummy property inside the "DummyOptions" JSON object of the UIDummy property

| Key | Possible Values | Usage | Used by | 
| --- | --- | --- | --- |
| `SpacerHeight` | Any number >= 0 | Specifies how tall the spacer dummy should be in Slate Units | VerticalSpacer |
| `TitleFontSize` | Any number >= 1 | Specifies the font size to use for the title dummy | Title |
| `TitleText` | String | Specify the text the title will use | Title |
| `IKSAction` | String | The name of the input action that is managed by this IKS | InputKeySelector |
