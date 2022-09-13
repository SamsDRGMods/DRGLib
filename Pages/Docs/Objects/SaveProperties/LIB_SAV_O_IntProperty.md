---
title: LIB_SAV_O_IntProperty
parent: LIB_SAV_O_BaseProperty
layout: page
---

# LIB_SAV_O_IntProperty

Stores an Integer

## Functions

### SetValue

| Function name | SetValue |
| --- | --- |
| Inputs | `Value(Int)` |

Sets the value held by this property

### IsBounded

| Function name | IsBounded |
| --- | --- |
| Outputs | `ReturnValue(Boolean)` |

Gets whether this property is bounded within a range

### SetBounds

| Function name | SetBounds |
| --- | --- |
| Inputs | `NewLowerBound(Int)`</br>`NewUpperBound(Int)` |

Sets the bounds that this property is held within

### GetBounds

| Function name | IsBounded |
| --- | --- |
| Outputs | `LowerBound(Int)`</br>`UpperBound(Int)` |

Gets the current bounds of this property. When the property is unbounded returns 0 for both values

### GetValue

| Function name | GetValue |
| --- | --- |
| Outputs | `Value(Float)` |

Gets the value held by this property
