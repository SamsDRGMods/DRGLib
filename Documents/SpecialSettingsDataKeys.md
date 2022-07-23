When using a DRGLib settings property there is a struct called "SettingsOptions". In that struct you can find a JSON object named "SpecialSettingsData"
Some settings widgets will make use of the keys outlined in this document to customize the widget in specific ways

Key: "PreferredWidget" Values: Any integer, but that depends on the context Use: Used to override the usual widget for a given setting. For instance, preferring a slider to a spinbox for a float
- For "IntProperties", "0" will force a spinbox and "1" will force a slider. Note that if the integer is unbounded a spinbox will be picked regardless
- For "FloatProperties", "0" will force a spinbox and "1" will force a slider. Note that if the float is unbounded a spinbox will be picked regardless
Key: "HostFontSize" Values: Any Natural number Use: Used to override the hosts font size, if it has a title for the widget
Key: "WidgetFontSize" Values: Any Natural number Use: Used to override the font size of the widget, if it has any text
Key: "OpacityChangeable" Values: True/False Use: Used by the color property to decide whether to allow the user to change a color's opacity

The following keys are used by the UIDummy property inside the "DummyOptions" JSON object of the UIDummy property
Key: "SpacerHeight" Values: Any number >= 0 Use: Specify how tall the spacer dummy should be in Slate Units
Key: "TitleFontSize" Values: Any number >= 1 Use: Specify the font size to use for the title dummy
Key: "TitleText" Values: String Use: Specify the text the title will use
Key: "IKSAction" Values: String Use: The name of the Input Action the IKS dummy will manage