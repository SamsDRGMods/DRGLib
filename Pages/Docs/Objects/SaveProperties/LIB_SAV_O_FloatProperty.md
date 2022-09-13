---
title: LIB_SAV_O_FloatProperty
parent: LIB_SAV_O_BaseProperty
layout: page
---

# LIB_SAV_O_FloatProperty

Stores a float

## Functions

### SetValue

| Function name | SetValue |
| --- | --- |
| Inputs | `Value(Float)` |

Sets the value held by this property

### IsBounded

| Function name | IsBounded |
| --- | --- |
| Outputs | `ReturnValue(Boolean)` |

Gets whether this property is bounded within a range

### SetBounds

| Function name | SetBounds |
| --- | --- |
| Inputs | `NewLowerBound(Float)`</br>`NewUpperBound(Float)` |

Sets the bounds that this property is held within

### GetBounds

| Function name | IsBounded |
| --- | --- |
| Outputs | `LowerBound(Float)`</br>`UpperBound(Float)` |

Gets the current bounds of this property. When the property is unbounded returns 0 for both values

### GetValue

| Function name | GetValue |
| --- | --- |
| Outputs | `Value(Float)` |

Gets the value held by this property
