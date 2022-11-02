---
title: LIB_WT_Combobox
parent: Widget Templates
layout: page
---

# LIB_WT_Combobox

The LIB_WT_Combobox is a custom implementation of a Combobox widget.

Internally it stores an array of options, and an index of the selected option. Upon clicking the "Header" it opens a popup menu with a list of available options. When clicking an option it is selected. 

It is possible for no item to be selected. In that case the stored item index is -1

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| DefaultOptions | Array of Strings | Used to initially populate the combobox |
| TextModifier | LIB_S_ColorModifier | The color of all text in the combobox |
| HoverModifier | LIB_S_ColorModifier | Used both when hovering the header and items in the menu |
| ClickModifier | LIB_S_ColorModifier | Used both when hovering the header and items in the menu |
| HeaderModifier | LIB_S_ColorModifier | Used for the background of the header "The main button you see when nothing else is visible |
| ActiveItemModifier | LIB_S_ColorModifier | The modifier for whichever item in the menu is selected |
| InactiveItemModifier | LIB_S_ColorModifier | The modifier for every item not selected |
| MenuBGModifier | LIB_S_ColorModifier | The modifier used for the menu Background. Seen mostly under the scroll bar, or when items are transparent |
| FontSize | Integer | |

## Functions

### AddOption

| Function name | AddOption |
| --- | --- |
| Inputs | `Option(String)` |

Adds a new option to the combobox

### ClearOptions

| Function name | ClearOptions |
| --- | --- |
| | |

Completely removes every option from the combobox

### ClearSelection

| Function name | ClearSelection |
| --- | --- |
| | |

Sets the currently selected index to -1

### IsOpen

| Function name | IsOpen |
| --- | --- |
| Outputs | `Open(Boolean)` |

Returns whether the Combobox is currently open

## RemoveOption

| Function name | RemoveOption |
| --- | --- |
| Inputs | `Option(String)` |

Removes every instance of the selected option from the Combobox while preserving the selected option using SetSelectedOption

### RemoveIndex

| Function name | RemoveIndex |
| --- | --- |
| | |

Removes the option at a given index of the Combobox. If this index is the selected index; reset selected index to -1

### SetSelectedOption

| Function name | SetSelectedOption |
| --- | --- |
| Inputs | `Option(String)`</br>`CallSelectionChanged(Boolean)` |

Sets the selected option to `Option`. If `Option` is not found in the Combobox options, then set selected index to -1

Will not call `UserChangedSelection` unless `CallSelectionChanged` is True

### GetSelectedOption

| Function name | GetSelectedOption |
| --- | --- |
| Outputs | `Option(String)` |

Gets the currently selected option, or "" if no option is selected

### SetSelectedIndex

| Function name | SetSelectedIndex |
| --- | --- |
| Inputs | `Index(Integer)`</br>`CallSelectionChanged(Boolean)` |

Sets the selected Index to `Index`. If `Index` is out of range(-1 to Options length-1), do nothing

Will not call `UserChangedSelection` unless `CallSelectionChanged` is True

### GetSelectedIndex

| Function name | GetSelectedIndex |
| --- | --- |
| Outputs | `ReturnValue(Integer)` |

Returns the index of the selected option, or -1 if no option is selected

### GetOptions

| Function name | GetOptions |
| --- | --- |
| Outputs | `Options(Array of Strings)` |

Returns the array of available options for the combobox

### SetOptions

| Function name | SetOptions |
| --- | --- |
| Inputs | `Options(Array of Strings)`</br>`CallSelectionChanged(Boolean)` |

Completely replaces the options available in the combobox and sets the selected index to -1

Will not call `UserChangedSelection` unless `CallSelectionChanged` is True

### UpdateDisplayedValues

| Function name | UpdateDisplayedValues |
| --- | --- |
| | |

Makes sure that the header and menu have the correct options displayed. Called by all the setter functions automatically

### RegenerateOptions

| Function name | RegenerateOptions |
| --- | --- |
| | |

Just calls UpdateDisplayedValues. Is included for legacy compatibility from before the Combobox redesign

## Event dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| UserChangedSelection | `SelectedItem(String)` | Called when the user changes their selection |
| OnOpening | | Called when the user opens the combobox |
