---
title: Understanding DRGLib's patchnotes
parent: Guides
layout: page
---

# Introduction

DRGLib has extremely detailed patch notes, which can sometimes be intimidating

Changes are listed by the file that was changed. 

Each change will be marked with one of the following tags:
- [+]
  - Represents a new feature or function
- [N]
  - Represents that a change or fix took place. The N stands for **N**onBreaking, to show that this change will not affect existing mods
- [B]
  - Represents a change that will break existing mods, e.g. removing a pin from a function. The B stands for **B**reaking. This tag should only ever occur on a Major version change
- [-]
  - Represents a removal of an existing feature or function. This should only ever occur on a Major Version change
- [I]
  - Represents a change that should only have relevance if you are calling or using functions outside of the normally documented functions. Note that there is no guarantee these won't be removed in minor updates or patches, so shy away from internal functions

  ## Example
  Here is an example of an update with a few changes:

```
- [+] Added function "GetModVersion"
- [N] LIB_WT_WarningPopup
  - Now centers popup above the center of the anchor, instead of to the right
  - Now wraps text when getting overly long
- [N] LIB_WT_InputKeySelector
  - [N] No longer locks mouse to bounds while selecting a key
- [N] LIB_WT_Combobox
  - [N] Completely rewrote combobox under the hood, since apparently allowing us to customize font at runtime is just *too hard* for epic to do themselves
  - [+] added function "SetSelectedIndex"
  - [I][+] Added MenuOptions and SelectedIndex private variables
  - [I][+] Added LIB_WC_ComboboxMenu and LIB_WC_ComboboxMenuItem
  - [+] added function "SetOptions"
  - [+] added function "UpdateDisplayedValues"
- [N] Updated GetDRGLibVersion to pull from mod.io instead of a packed in file
  - [I] This also means DAUM has been removed from the automation folder
- [I] Reorganized testing folder
  - Now holds TestMap instead of it being in the maps folder
```

As you can see, this update added a new function and reworked a few widgets under the hood