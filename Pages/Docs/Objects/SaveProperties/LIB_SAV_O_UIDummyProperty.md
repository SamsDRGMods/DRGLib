---
title: LIB_SAV_O_UIDummyProperty
parent: LIB_SAV_O_BaseProperty
layout: page
---

# LIB_SAV_O_UIDummyProperty

Instead of storing data on the disk, this property is designed to allow for adding custom widgets to a settings page, as well as a set of predefined widgets like spacers, horizontal rules, and input key selectors

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `DummyType` | LIB_SAV_E_DummyType enum | |
| `DummyOptions` | LIB_JSON_O_Value object reference | stores additional data for the dummy to use. See https://github.com/SamsDRGMods/DRGLib/blob/main/Documents/SpecialSettingsDataKeys.md |
| `HeldWidget` | UserWidget object reference | When the dummy type is WidgetHost, this variable will be the hosted widget |
