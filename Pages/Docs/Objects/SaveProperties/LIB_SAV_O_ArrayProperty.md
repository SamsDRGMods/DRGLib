---
title: LIB_SAV_O_ArrayProperty
parent: LIB_SAV_O_BaseProperty
layout: page
---

# LIB_SAV_O_ArrayProperty

Stores an array of other properties

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `ValueItemClass` | LIB_SAV_O_BaseProperty class reference | |

## Functions

### GetCanSerializeToJSON

| Function name | GetCanSerializeToJSON |
| --- | --- |
| Outputs | `ReturnValue (Boolean)` |

Returns whether this array property can be serialized to JSON

### ClearValues

| Function name | ClearValues |
| --- | --- |
| | |

Removes all held values from this array property

### AddValue

| Function name | AddValue |
| --- | --- |
| Inputs | `NewValue (LIB_SAV_O_BaseProperty object reference)` |

Adds a new value to the array property. If the class of NewValue does not match `ValueItemClass`, then this will not occur

### FindValue

| Function name | FindValue |
| --- | --- |
| Inputs | `ItemToFind (LIB_SAV_O_BaseProperty object reference)` |
| Outputs | `ReturnValue (Int)` |

Locates the index of a given property

### GetValues

| Function name | GetValues |
| --- | --- |
| Outputs | `Output (Array of LIB_SAV_O_BaseProperty object references)` |

Gets a copy of the values array held by this object

### GetValue

| Function name | ReadPropertyAsFloat |
| --- | --- |
| Inputs | `Index (Int)` |
| Outputs | `Output (LIB_SAV_O_BaseProperty object reference)` |

Gets a copy of a value at a specified index
